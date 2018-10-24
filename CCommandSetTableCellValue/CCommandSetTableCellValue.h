//
// Created by martkans on 21.10.18.
//

#ifndef LISTA2_CCOMMANDSETTABLECELLVALUE_H
#define LISTA2_CCOMMANDSETTABLECELLVALUE_H


#include "../CCommand/CCommand.h"

class CCommandSetTableCellValue : public CCommand{
    public:
        CCommandSetTableCellValue(CTableHandler* table_handler);
        ~CCommandSetTableCellValue();

        void runCommand();

    private:
        CTableHandler* table_handler;
};


#endif //LISTA2_CCOMMANDSETTABLECELLVALUE_H
