//
// Created by martkans on 21.10.18.
//

#include "CCommandChangeObjectName.h"


CCommandChangeObjectName::CCommandChangeObjectName(CTableHandler* table_handler){
    this->table_handler = table_handler;
}

CCommandChangeObjectName::~CCommandChangeObjectName() {
    cout << "usuwam CCommandChangeObjectName\n";
}

void CCommandChangeObjectName::runCommand() {
    bool* error = new bool();
    int position_of_object;
    string name;

    if(table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego chcesz zmienić nazwę (0 - " << table_handler->getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);

        if (*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\nPodaj nową nazwę obiektu: ";
            getline(cin, name);

            table_handler->changeNameOfObject(position_of_object, name);
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}


