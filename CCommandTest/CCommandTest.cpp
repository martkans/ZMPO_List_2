//
// Created by martkans on 21.10.18.
//

#include "CCommandTest.h"

void CCommandTest::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if(CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego rozmiar chcesz zmienić (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";

        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            CTableHandler::testObject(*CTableHandler::getObject(position_of_object));
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
