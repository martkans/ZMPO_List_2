//
// Created by martkans on 19.10.18.
//

#include "CMenu.h"

void CMenu::run() {
    string input;

    while (input != "back"){
        showMenu();
    }
}

void CMenu::showMenu() {
    cout    << this->name << " (" << this->command << ")\n"
            << "------------------------\n";
    for (unsigned long i = 0; i < menu_items.size(); ++i) {
        cout << i+1 << ". " << menu_items.at(i)->name << " (" << menu_items.at(i)->command << ")\n";
    }

}
