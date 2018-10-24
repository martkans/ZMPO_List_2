//
// Created by martkans on 21.10.18.
//

#include "CCommandTest.h"

CCommandTest::CCommandTest(CTableHandler *table_handler) {
    this->table_handler = table_handler;
}

CCommandTest::~CCommandTest() {
    cout << "usuwam CCommandTest\n";
}

void CCommandTest::runCommand() {
    bool* error = new bool();
    int position_of_object;

    if(table_handler->getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego rozmiar chcesz zmienić (0 - " << table_handler->getVectorLastIndex()
             << ")\n";

        position_of_object = provideInt(0, table_handler->getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            table_handler->testObject(*table_handler->getObject(position_of_object));
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
