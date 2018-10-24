//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDSHOWOBJECTINFO_H
#define LISTA2_CCOMMANDSHOWOBJECTINFO_H


#include "../CCommand/CCommand.h"

class CCommandShowObjectInfo : public CCommand{
    public:
        CCommandShowObjectInfo(CTableHandler* table_handler);
        ~CCommandShowObjectInfo();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDSHOWOBJECTINFO_H
