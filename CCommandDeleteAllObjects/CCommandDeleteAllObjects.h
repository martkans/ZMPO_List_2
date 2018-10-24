//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDDELETEALLOBJECTS_H
#define LISTA2_CCOMMANDDELETEALLOBJECTS_H


#include "../CCommand/CCommand.h"

class CCommandDeleteAllObjects : public CCommand{
    public:
        CCommandDeleteAllObjects(CTableHandler* table_handler);
        ~CCommandDeleteAllObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;

};


#endif //LISTA2_CCOMMANDDELETEALLOBJECTS_H
