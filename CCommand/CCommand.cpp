//
// Created by martkans on 19.10.18.
//

#include "CCommand.h"

CCommand::~CCommand() {
    cout << "usuwam CCommand\n";
}

void CCommand::runCommand() {
    cout << "Komenda domyślna\n";
}

