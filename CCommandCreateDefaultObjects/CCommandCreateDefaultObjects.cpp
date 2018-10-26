//
// Created by martkans on 26.10.18.
//

#include "CCommandCreateDefaultObjects.h"

CCommandCreateDefaultObjects::CCommandCreateDefaultObjects(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandCreateDefaultObjects::~CCommandCreateDefaultObjects() {
    cout << "usuwam CCommandCreateDefaultObjects\n";
}

void CCommandCreateDefaultObjects::runCommand() {
    bool* error = new bool();
    int number_of_objects;

    cout << "\nIle chcesz utworzyć obiektów?\n";
    number_of_objects = provideInt(1, INT_MAX, error);

    if (*error){
        alert(BAD_VALUE_ALERT_MESSAGE);
    } else {
        for (int i = 0; i < number_of_objects; ++i) {
            cout << "\nObiekt nr " << i+1 << "\n";
            table_handler->createDefaultObject();
        }
    }
    delete error;
}
