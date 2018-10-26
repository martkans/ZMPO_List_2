//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCREATEOBJECTS_H
#define LISTA2_CCOMMANDCREATEOBJECTS_H

#include "../CCommand/CCommand.h"

class CCommandCreateSpecificObjects : public CCommand{
    public:
        CCommandCreateSpecificObjects(CTableHandler* table_handler);
        ~CCommandCreateSpecificObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCREATEOBJECTS_H
