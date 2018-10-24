//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCREATEOBJECTS_H
#define LISTA2_CCOMMANDCREATEOBJECTS_H

#include "../CCommand/CCommand.h"

class CCommandCreateObjects : public CCommand{
    public:
        CCommandCreateObjects(CTableHandler* table_handler);
        ~CCommandCreateObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCREATEOBJECTS_H
