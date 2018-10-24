//
// Created by martkans on 21.10.18.
//

#include "CCommandCreateObjects.h"

CCommandCreateObjects::CCommandCreateObjects(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandCreateObjects::~CCommandCreateObjects() {
    cout << "usuwam CCommandCreateObjects\n";
}


void CCommandCreateObjects::runCommand() {
    bool* error = new bool();
    int number_of_objects;
    bool answer;

    cout << "\nIle chcesz utworzyć obiektów?\n";
    number_of_objects = provideInt(1, INT_MAX, error);

    if (*error){
        alert(BAD_VALUE_ALERT_MESSAGE);
    } else {
        for (int i = 0; i < number_of_objects; ++i) {
            cout << "\nObiekt nr " << i+1 << "\n";
            cout << "\nCzy chcesz utworzyć domyślny obiekt? (t/n)\n";
            answer = provideYesOrNo(error);

            if (*error){
                alert(CONFIRMATION_ERROR_ALERT_MESSAGE);
                --i;
            } else {
                if (answer){
                    table_handler->createDefaultObject();
                } else {
                    string name;
                    int table_length;

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

        }
    }
    delete error;
}
