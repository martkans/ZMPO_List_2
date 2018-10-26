//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCREATESPECIFICOBJECTS_H
#define LISTA2_CCOMMANDCREATESPECIFICOBJECTS_H

#include "../CCommand.h"

class CCommandCreateSpecificObjects : public CCommand{
    public:
        CCommandCreateSpecificObjects(CTableHandler* table_handler);
        ~CCommandCreateSpecificObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCREATEOBJECTS_H
