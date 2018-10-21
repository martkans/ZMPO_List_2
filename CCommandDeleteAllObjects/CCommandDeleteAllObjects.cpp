//
// Created by martkans on 21.10.18.
//

#include "CCommandDeleteAllObjects.h"

void CCommandDeleteAllObjects::runCommand() {
    bool answer;
    bool* error = new bool();

    if (CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nCzy na pewno chcesz usunąć wszystkie obiekty? (t/n)\n";
        answer = provideYesOrNo(error);

        if(*error){
            alert(CONFIRMATION_ERROR_ALERT_MESSAGE);
        } else{
            if (answer) {
                CTableHandler::deleteAllObjects();
            }
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
