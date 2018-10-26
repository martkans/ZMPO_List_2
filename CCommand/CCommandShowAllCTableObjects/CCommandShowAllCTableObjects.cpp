//
// Created by martkans on 21.10.18.
//

#include "CCommandShowAllCTableObjects.h"

CCommandShowAllCTableObjects::CCommandShowAllCTableObjects(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandShowAllCTableObjects::~CCommandShowAllCTableObjects() {
    cout << "usuwam CCommandShowAllCTableObjects\n";
}

void CCommandShowAllCTableObjects::runCommand() {
    if (table_handler->getVectorLastIndex() != EMPTY_VECTOR) {
        cout << "\n" << table_handler->getShortInfoAboutAllObjects() << "\n";
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

}
