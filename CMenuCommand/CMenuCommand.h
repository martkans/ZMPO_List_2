//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CMENUCOMMAND_H
#define LISTA2_CMENUCOMMAND_H


#include "../CMenuItem/CMenuItem.h"
#include "../CCommand/CCommand.h"

class CMenuCommand : private CMenuItem{
    public:
        CMenuCommand(string name, string command, CCommand* command_object);
        CMenuCommand(string name, string command);

        ~CMenuCommand();
    private:
        CCommand* command_object;
        virtual void run();

};


#endif //LISTA2_CMENUCOMMAND_H
