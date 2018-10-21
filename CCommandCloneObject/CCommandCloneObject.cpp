//
// Created by martkans on 21.10.18.
//

#include "CCommandCloneObject.h"

void CCommandCloneObject::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if(CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, który chcesz sklonować (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            CTableHandler::cloneObject(position_of_object);
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
