//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENU_H
#define LISTA2_CMENU_H

#define BACK_STRING "back"

#include <iostream>
#include <vector>

#include "../CMenuItem/CMenuItem.h"
#include "../../Tools/Tools.h"

using namespace std;

class CMenu : public CMenuItem{
    public:
        CMenu(string name, string command);
        ~CMenu();

        void run();

        bool addCMenuItem(CMenuItem* item);
        bool deleteCMenuItem(string command_of_object_to_delete);

    private:
        bool* error;
        vector <CMenuItem*> menu_items;

        void showMenu();
        bool checkIfUnique(string new_name, string new_command);
        unsigned long getPositionOfCMenuItem(string command, bool* error);
};



#endif //LISTA2_CMENU_H
