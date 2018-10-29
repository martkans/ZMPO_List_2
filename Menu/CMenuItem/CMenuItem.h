//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENUITEM_H
#define LISTA2_CMENUITEM_H

#define BAD_VALUE_ALERT_MESSAGE                 "Podano błędną wartość.\n"

#include <string>

using namespace std;

class CMenuItem {
    public:
        friend class CMenu;
        virtual ~CMenuItem(){};

    protected:
        string name;
        string command;
        int level;

        virtual void run() = 0;

        virtual int getMaxLevel(int max) = 0;
        virtual void setLevel(int level) = 0;
        virtual void buildLevel(string** tree_menu) = 0;
};


#endif //LISTA2_CMENUITEM_H
