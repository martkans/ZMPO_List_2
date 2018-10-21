//
// Created by martkans on 21.10.18.
//

#include "CCommandShowAllCTableObjects.h"

void CCommandShowAllCTableObjects::runCommand() {
    if (CTableHandler::getVectorLastIndex() != EMPTY_VECTOR) {
        cout << "\n" << CTableHandler::getShortInfoAboutAllObjects() << "\n";
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

}
