//
// Created by martkans on 21.10.18.
//

#include "CCommandChangeTableSize.h"

void CCommandChangeTableSize::runCommand() {
    bool* error = new bool();
    int position_of_object;
    int table_length;

    if(CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego chcesz zmienić rozmiar (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if (*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\nPodaj nowy rozmiar tablicy obiektu (1 - " << INT_MAX
                 << ")\n";

            table_length = provideInt(1, INT_MAX, error);

            if (*error){
                alert(BAD_VALUE_ALERT_MESSAGE);
            } else {
                CTableHandler::changeSizeOfObject(position_of_object, table_length);
            }
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }


    delete error;
}
