//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDTEST_H
#define LISTA2_CCOMMANDTEST_H


#include "../CCommand/CCommand.h"

class CCommandTest : public CCommand{
    public:
        CCommandTest(CTableHandler* table_handler);
        ~CCommandTest();

        void runCommand();

    private:
        CTableHandler* table_handler;

};


#endif //LISTA2_CCOMMANDTEST_H
