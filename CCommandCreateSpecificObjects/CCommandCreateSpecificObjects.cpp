//
// Created by martkans on 21.10.18.
//

#include "CCommandCreateSpecificObjects.h"

CCommandCreateSpecificObjects::CCommandCreateSpecificObjects(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandCreateSpecificObjects::~CCommandCreateSpecificObjects() {
    cout << "usuwam CCommandCreateSpecificObjects\n";
}


void CCommandCreateSpecificObjects::runCommand() {
    bool* error = new bool();
    int number_of_objects;

    cout << "\nIle chcesz utworzyć obiektów?\n";
    number_of_objects = provideInt(1, INT_MAX, error);

    if (*error){
        alert(BAD_VALUE_ALERT_MESSAGE);
    } else {
        for (int i = 0; i < number_of_objects; ++i) {
            string name;
            int table_length;

            cout << "\nObiekt nr " << i+1 << "\n";
            cout << "\nPodaj nazwę obiektu: ";
            getline(cin, name);

            cout << "\nPodaj długość tablicy obiektu: ";
            table_length = provideInt(1, INT_MAX, error);

            if (*error){
                alert(BAD_VALUE_ALERT_MESSAGE);
                --i;
            } else {
                table_handler->createPersonalizedObject(table_length, name);
            }

        }
    }
    delete error;
}
