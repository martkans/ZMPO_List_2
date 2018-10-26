//
// Created by martkans on 21.10.18.
//

#include "CCommandDeleteAllObjects.h"

CCommandDeleteAllObjects::CCommandDeleteAllObjects(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandDeleteAllObjects::~CCommandDeleteAllObjects() {
    cout << "usuwam CCommandDeleteAllObjects\n";
}

void CCommandDeleteAllObjects::runCommand() {
    bool answer;
    bool* error = new bool();

    if (table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nCzy na pewno chcesz usunąć wszystkie obiekty? (t/n)\n";
        answer = provideYesOrNo(error);

        if(*error){
            alert(CONFIRMATION_ERROR_ALERT_MESSAGE);
        } else{
            if (answer) {
                table_handler->deleteAllObjects();
            }
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
