//
// Created by martkans on 21.10.18.
//

#include "CCommandDeleteSpecificObject.h"

CCommandDeleteSpecificObject::CCommandDeleteSpecificObject(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandDeleteSpecificObject::~CCommandDeleteSpecificObject() {
    cout << "usuwam CCommandDeleteSpecificObject\n";
}

void CCommandDeleteSpecificObject::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if (table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, który chcesz usunąć (0 - " << table_handler->getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);
        if (*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else if(!*error){
            table_handler->deleteSpecificObject(position_of_object);
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
