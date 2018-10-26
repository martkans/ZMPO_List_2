//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDCHANGETABLESIZE_H
#define LISTA2_CCOMMANDCHANGETABLESIZE_H

#include "../CCommand.h"

class CCommandChangeTableSize : public CCommand{
    public:
        CCommandChangeTableSize(CTableHandler* table_handler);
        ~CCommandChangeTableSize();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDCHANGETABLESIZE_H
