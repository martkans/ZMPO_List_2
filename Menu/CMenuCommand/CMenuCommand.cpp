//
// Created by martkans on 19.10.18.
//

#include "CMenuCommand.h"

CMenuCommand::CMenuCommand(string name, string command, CCommand *command_object) {
    this->name = name;
    this->command = command;
    this->command_object = command_object;
}

CMenuCommand::CMenuCommand(string name, string command) {
    this->name = name;
    this->command = command;
    this->command_object = NULL;
}

CMenuCommand::~CMenuCommand() {
    delete command_object;
    cout << "usuwam CMenuCommand: " + command + "\n";
}

void CMenuCommand::run() {
    if (command_object == NULL){
        cout << "pusta komenda\n";
    } else {
        command_object->runCommand();
    }
}
