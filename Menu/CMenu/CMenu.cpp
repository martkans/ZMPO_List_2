//
// Created by martkans on 19.10.18.
//

#include "CMenu.h"

CMenu::CMenu(string name, string command) {
    this->name = name;
    this->command = command;
    error = new bool();
}

CMenu::~CMenu() {
    delete error;

    while (!menu_items.empty()){
        delete menu_items.at(0);
        menu_items.erase(menu_items.begin());
    }

    cout << "usuwam CMenu: " + name + "\n";
}

bool CMenu::addCMenuItem(CMenuItem *item) {
    if(checkIfUnique(item->name, item->command)){
        menu_items.push_back(item);
        return true;
    } else {
        return false;
    }
}

bool CMenu::deleteCMenuItem(string command_of_object_to_delete) {
    unsigned long pos = getPositionOfCMenuItem(command_of_object_to_delete, error);
    if(!*error){
        delete menu_items.at(pos);
        menu_items.erase(menu_items.begin() + pos);
        return true;
    }
    return false;
}

void CMenu::run() {
    string input;
    unsigned long pos;

    do{
        showMenu();

        cout << "\nWprowadz komende:\n";
        getline(cin, input);

        if(input != BACK_STRING){
            pos = getPositionOfCMenuItem(input, error);

            if(!*error){
                menu_items.at(pos)->run();
            } else {
                alert(BAD_VALUE_ALERT_MESSAGE);
            }
        } else {
            cout << "\ncofnij\n\n";
        }

    }while (input != BACK_STRING);
}

void CMenu::showMenu() {
    cout    << "\n\n" << this->name << " (" << this->command << ")\n"
            << "------------------------\n";

    if(!menu_items.empty()){
        for (unsigned long i = 0; i < menu_items.size(); ++i) {
            cout << i+1 << ". " << menu_items.at(i)->name << " (" << menu_items.at(i)->command << ")\n";
        }
    }
}

bool CMenu::checkIfUnique(string new_name, string new_command) {
    for(unsigned long i = 0; i != menu_items.size(); ++i){
        if(menu_items.at(i)->name == new_name || menu_items.at(i)->command == new_command){
            return false;
        }
    }

    return true;
}

unsigned long CMenu::getPositionOfCMenuItem(string command, bool* error) {
    *error = false;
    for(unsigned long i = 0; i != menu_items.size(); ++i){
        if(menu_items.at(i)->command == command){
            return i;
        }
    }
    *error = true;
    return 0;
}
