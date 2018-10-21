//
// Created by martkans on 21.10.18.
//

#include "CCommandShowObjectInfo.h"

void CCommandShowObjectInfo::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if (CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, o którym informacje chcesz otrzymać (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\n" << CTableHandler::getInfoAboutObject(position_of_object) << "\n";
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
