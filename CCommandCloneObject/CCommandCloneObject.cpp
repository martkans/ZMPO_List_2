//
// Created by martkans on 21.10.18.
//

#include "CCommandCloneObject.h"

CCommandCloneObject::CCommandCloneObject(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandCloneObject::~CCommandCloneObject() {
    cout << "usuwam CCommandCloneObject\n";
}

void CCommandCloneObject::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if(table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, który chcesz sklonować (0 - " << table_handler->getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            table_handler->cloneObject(position_of_object);
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
