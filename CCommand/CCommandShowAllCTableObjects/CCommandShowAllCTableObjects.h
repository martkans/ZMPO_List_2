//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H
#define LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H


#include "../CCommand.h"

class CCommandShowAllCTableObjects : public CCommand{
    public:
        CCommandShowAllCTableObjects(CTableHandler* table_handler);
        ~CCommandShowAllCTableObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H
