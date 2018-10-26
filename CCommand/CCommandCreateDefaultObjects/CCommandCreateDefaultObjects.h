//
// Created by martkans on 26.10.18.
//

#ifndef LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H
#define LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H


#include "../CCommand.h"

class CCommandCreateDefaultObjects : public CCommand{
    public:
        CCommandCreateDefaultObjects(CTableHandler* table_handler);
        ~CCommandCreateDefaultObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H
