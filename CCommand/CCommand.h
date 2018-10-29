//
// Created by martkans on 19.10.18.
//

#define BAD_VALUE_ALERT_MESSAGE                 "Podano błędną wartość.\n"
#define NO_OBJECTS_ALERT_MESSAGE                "Nie masz żadnych obiektów! Stwórz je lub zakończ program!\n"
#define CONFIRMATION_ERROR_ALERT_MESSAGE        "Wprowadź 't' aby potwierdzić lub 'n', aby zaprzeczyć!\n"

#define EMPTY_VECTOR    -1

#include "../Tools/Tools.h"
#include "../Table/CTableHandler/CTableHandler.h"


#include <iostream>
#include <climits>

using namespace std;

#ifndef LISTA2_CCOMMAND_H
#define LISTA2_CCOMMAND_H

class CCommand {
    public:
        virtual ~CCommand();
        virtual void runCommand();
};
#endif //LISTA2_CCOMMAND_H


#ifndef LISTA2_CCOMMANDCHANGEOBJECTNAME_H
#define LISTA2_CCOMMANDCHANGEOBJECTNAME_H

class CCommandChangeObjectName : public CCommand{
    public:
        CCommandChangeObjectName(CTableHandler* table_handler);
        ~CCommandChangeObjectName();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDCHANGEOBJECTNAME_H


#ifndef LISTA2_CCOMMANDCHANGETABLESIZE_H
#define LISTA2_CCOMMANDCHANGETABLESIZE_H

class CCommandChangeTableSize : public CCommand{
    public:
        CCommandChangeTableSize(CTableHandler* table_handler);
        ~CCommandChangeTableSize();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDCHANGETABLESIZE_H


#ifndef LISTA2_CCOMMANDCLONEOBJECT_H
#define LISTA2_CCOMMANDCLONEOBJECT_H

class CCommandCloneObject : public CCommand {
    public:
        CCommandCloneObject(CTableHandler* table_handler);
        ~CCommandCloneObject();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDCLONEOBJECT_H


#ifndef LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H
#define LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H

class CCommandCreateDefaultObjects : public CCommand{
    public:
        CCommandCreateDefaultObjects(CTableHandler* table_handler);
        ~CCommandCreateDefaultObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDCREATEDEFAULTOBJECTS_H


#ifndef LISTA2_CCOMMANDCREATESPECIFICOBJECTS_H
#define LISTA2_CCOMMANDCREATESPECIFICOBJECTS_H

class CCommandCreateSpecificObjects : public CCommand{
    public:
        CCommandCreateSpecificObjects(CTableHandler* table_handler);
        ~CCommandCreateSpecificObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDCREATEOBJECTS_H


#ifndef LISTA2_CCOMMANDDELETEALLOBJECTS_H
#define LISTA2_CCOMMANDDELETEALLOBJECTS_H

class CCommandDeleteAllObjects : public CCommand{
    public:
        CCommandDeleteAllObjects(CTableHandler* table_handler);
        ~CCommandDeleteAllObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDDELETEALLOBJECTS_H


#ifndef LISTA2_CCOMMANDDELETESPECIFICOBJECT_H
#define LISTA2_CCOMMANDDELETESPECIFICOBJECT_H

class CCommandDeleteSpecificObject : public CCommand{
    public:
        CCommandDeleteSpecificObject(CTableHandler* table_handler);
        ~CCommandDeleteSpecificObject();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDDELETESPECIFICOBJECT_H


#ifndef LISTA2_CCOMMANDSETTABLECELLVALUE_H
#define LISTA2_CCOMMANDSETTABLECELLVALUE_H

class CCommandSetTableCellValue : public CCommand{
    public:
        CCommandSetTableCellValue(CTableHandler* table_handler);
        ~CCommandSetTableCellValue();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDSETTABLECELLVALUE_H


#ifndef LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H
#define LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H

class CCommandShowAllCTableObjects : public CCommand{
    public:
        CCommandShowAllCTableObjects(CTableHandler* table_handler);
        ~CCommandShowAllCTableObjects();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDSHOWALLCTABLEOBJECTS_H


#ifndef LISTA2_CCOMMANDSHOWOBJECTINFO_H
#define LISTA2_CCOMMANDSHOWOBJECTINFO_H

class CCommandShowObjectInfo : public CCommand{
    public:
        CCommandShowObjectInfo(CTableHandler* table_handler);
        ~CCommandShowObjectInfo();

        void runCommand();

    private:
        CTableHandler* table_handler;
};

#endif //LISTA2_CCOMMANDSHOWOBJECTINFO_H

#ifndef LISTA2_CCOMMANDTEST_H
#define LISTA2_CCOMMANDTEST_H

class CCommandTest : public CCommand{
    public:
        CCommandTest(CTableHandler* table_handler);
        ~CCommandTest();

        void runCommand();

    private:
        CTableHandler* table_handler;

};
#endif //LISTA2_CCOMMANDTEST_H


#ifndef LISTA2_CCOMMANDSHOWTREE_H
#define LISTA2_CCOMMANDSHOWTREE_H

#include "../Menu/Menu.h"

class CCommandShowTree : public CCommand{
    public:
        CCommandShowTree(CMenu* main_menu);
        ~CCommandShowTree();

        void runCommand();

    private:
        CMenu* main_menu;
};

#endif //LISTA2_CCOMMANDSHOWTREE_H

