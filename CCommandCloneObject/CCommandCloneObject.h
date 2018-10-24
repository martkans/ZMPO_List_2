//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCLONEOBJECT_H
#define LISTA2_CCOMMANDCLONEOBJECT_H


#include "../CCommand/CCommand.h"

class CCommandCloneObject : public CCommand {
    public:
        CCommandCloneObject(CTableHandler* table_handler);
        ~CCommandCloneObject();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCLONEOBJECT_H
