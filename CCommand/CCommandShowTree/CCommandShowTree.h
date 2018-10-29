//
// Created by martkans on 29.10.18.
//

#ifndef LISTA2_CCOMMANDSHOWTREE_H
#define LISTA2_CCOMMANDSHOWTREE_H


#include "../CCommand.h"
#include "../../Menu/CMenu/CMenu.h"

class CCommandShowTree : public CCommand{
public:
    CCommandShowTree(CMenu* main_menu);
    ~CCommandShowTree();

    void runCommand();

private:
    CMenu* main_menu;
};


#endif //LISTA2_CCOMMANDSHOWTREE_H
