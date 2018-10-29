//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENUCOMMAND_H
#define LISTA2_CMENUCOMMAND_H


#include "../CMenuItem/CMenuItem.h"
#include "../../CCommand/CCommand.h"

class CMenuCommand : public CMenuItem{
    public:
        CMenuCommand(string name, string command, CCommand* command_object);
        CMenuCommand(string name, string command);

        ~CMenuCommand();
        void run();

        int getMaxLevel(int max);
        void setLevel(int level);
        void buildLevel(string** tree_menu);

    private:
        CCommand* command_object;

};


#endif //LISTA2_CMENUCOMMAND_H
