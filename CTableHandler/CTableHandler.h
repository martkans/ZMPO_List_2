//
// Created by martkans on 20.10.18.
//

#ifndef LISTA2_CTABLEHANDLER_H
#define LISTA2_CTABLEHANDLER_H


#include "../CTable/CTable.h"

#include <vector>
#include <string>


class CTableHandler {
private:
    static vector <CTable*> CTable_objects;

public:
    friend class CCommand;
    ~CTableHandler();

    static int getVectorLastIndex();
    static int getTableLastIndex(int position_of_object);

    static void createDefaultObject();
    static void createPersonalizedObject(int size_of_table, string name);
    static void cloneObject(int position_of_existing_object);

    static void changeNameOfObject(int position_of_object, string new_name);
    static void changeSizeOfObject(int position_of_object, int new_size);

    static string getInfoAboutObject(int position_of_object);
    static string getShortInfoAboutAllObjects();

    static void setValueOfObjectCell(int position_of_object, int cell_number, int value);

    static void deleteSpecificObject(int position_of_object);
    static void deleteAllObjects();

    static void testObject(CTable other_object);

    static CTable* getObject(int position);
};


#endif //LISTA2_CTABLEHANDLER_H
