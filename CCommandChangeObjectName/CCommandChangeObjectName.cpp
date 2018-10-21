//
// Created by martkans on 21.10.18.
//

#include "CCommandChangeObjectName.h"

void CCommandChangeObjectName::runCommand() {
    bool* error = new bool();
    int position_of_object;
    string name;

    if(CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego chcesz zmienić nazwę (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if (*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\nPodaj nową nazwę obiektu: ";
            getline(cin, name);

            CTableHandler::changeNameOfObject(position_of_object, name);
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
