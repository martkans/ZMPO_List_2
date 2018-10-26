//
// Created by martkans on 21.10.18.
//

#include "CCommandChangeTableSize.h"


CCommandChangeTableSize::CCommandChangeTableSize(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandChangeTableSize::~CCommandChangeTableSize() {
    cout << "usuwam CCommandChangeTableSize\n";
}

void CCommandChangeTableSize::runCommand() {
    bool* error = new bool();
    int position_of_object;
    int table_length;

    if(table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego chcesz zmienić rozmiar (0 - " << table_handler->getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);

        if (*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\nPodaj nowy rozmiar tablicy obiektu (1 - " << INT_MAX
                 << ")\n";

            table_length = provideInt(1, INT_MAX, error);

            if (*error){
                alert(BAD_VALUE_ALERT_MESSAGE);
            } else {
                table_handler->changeSizeOfObject(position_of_object, table_length);
            }
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }


    delete error;
}
