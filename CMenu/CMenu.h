//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENU_H
#define LISTA2_CMENU_H

#include <iostream>
#include <vector>

#include "../CMenuItem/CMenuItem.h"
#include "../Tools/Tools.h"

using namespace std;

class CMenu : CMenuItem{
    private:
        vector <CMenuItem*> menu_items;
        virtual void run();
        void showMenu();

    public:
        CMenu();
        ~CMenu();

        bool addCMenuItem(CMenuItem*);
        bool deleteCMenuItem(CMenuItem*);

};



#endif //LISTA2_CMENU_H
