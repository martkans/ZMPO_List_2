//
// Created by martkans on 21.10.18.
//

#include "CCommandShowObjectInfo.h"

CCommandShowObjectInfo::CCommandShowObjectInfo(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandShowObjectInfo::~CCommandShowObjectInfo() {
    cout << "usuwam CCommandShowObjectInfo\n";
}

void CCommandShowObjectInfo::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if (table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, o którym informacje chcesz otrzymać (0 - " << table_handler->getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\n" << table_handler->getInfoAboutObject(position_of_object) << "\n";
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
