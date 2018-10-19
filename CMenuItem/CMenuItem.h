//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENUITEM_H
#define LISTA2_CMENUITEM_H

#include <string>

using namespace std;

class CMenuItem {
    protected:
        string name;
        string command;

        virtual void run() = 0;
};


#endif //LISTA2_CMENUITEM_H
