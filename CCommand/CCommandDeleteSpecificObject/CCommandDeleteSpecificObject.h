//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDDELETESPECIFICOBJECT_H
#define LISTA2_CCOMMANDDELETESPECIFICOBJECT_H


#include "../CCommand.h"

class CCommandDeleteSpecificObject : public CCommand{
    public:
        CCommandDeleteSpecificObject(CTableHandler* table_handler);
        ~CCommandDeleteSpecificObject();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDDELETESPECIFICOBJECT_H
