//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCHANGEOBJECTNAME_H
#define LISTA2_CCOMMANDCHANGEOBJECTNAME_H


#include "../CCommand/CCommand.h"

class CCommandChangeObjectName : public CCommand{
    public:
        CCommandChangeObjectName(CTableHandler* table_handler);
        ~CCommandChangeObjectName();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCHANGEOBJECTNAME_H
