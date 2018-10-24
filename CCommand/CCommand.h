//
// Created by martkans on 19.10.18.
//

#ifndef LISTA2_CCOMMAND_H
#define LISTA2_CCOMMAND_H

#define BAD_VALUE_ALERT_MESSAGE                 "Podano błędną wartość.\n"
#define NO_OBJECTS_ALERT_MESSAGE                "Nie masz żadnych obiektów! Stwórz je lub zakończ program!\n"
#define CONFIRMATION_ERROR_ALERT_MESSAGE        "Wprowadź 't' aby potwierdzić lub 'n', aby zaprzeczyć!\n"

#define EMPTY_VECTOR    -1

#include "../Tools/Tools.h"
#include "../CTableHandler/CTableHandler.h"

#include <iostream>
#include <climits>

using namespace std;

class CCommand {
    public:
        virtual ~CCommand();
        virtual void runCommand();
};
#endif //LISTA2_CCOMMAND_H
