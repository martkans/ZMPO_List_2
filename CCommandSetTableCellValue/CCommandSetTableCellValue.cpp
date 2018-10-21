//
// Created by martkans on 21.10.18.
//

#include "CCommandSetTableCellValue.h"

void CCommandSetTableCellValue::runCommand() {
    bool* error = new bool();
    int position_of_object, cell_number, cell_value;

    if (CTableHandler::getVectorLastIndex() != EMPTY_VECTOR){
        cout << "\nPodaj nr obiektu, którego wartość komórki chcesz zmienić (0 - " << CTableHandler::getVectorLastIndex()
             << ")\n";
        position_of_object = provideInt(0, CTableHandler::getVectorLastIndex(), error);

        if(*error){
            alert(BAD_VALUE_ALERT_MESSAGE);
        } else {
            cout << "\nPodaj nr komórki, której chcesz zmienić (0 - " << CTableHandler::getTableLastIndex(position_of_object)
                 << ")\n";
            cell_number = provideInt(0, CTableHandler::getTableLastIndex(position_of_object), error);

            if(*error){
                alert(BAD_VALUE_ALERT_MESSAGE);
            } else {
                cout << "\nPodaj nową wartość komórki.\n";
                cell_value = provideInt(INT_MIN, INT_MAX, error);

                if(*error){
                    alert(BAD_VALUE_ALERT_MESSAGE);
                } else {
                    CTableHandler::setValueOfObjectCell(position_of_object, cell_number, cell_value);
                }
            }
        }
    } else {
        alert(NO_OBJECTS_ALERT_MESSAGE);
    }

    delete error;
}
