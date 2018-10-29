//
// Created by martkans on 19.10.18.
//

#include "CMenuCommand.h"

CMenuCommand::CMenuCommand(string name, string command, CCommand *command_object) {
    this->name = name;
    this->command = command;
    this->level = 0;
    this->command_object = command_object;
}

CMenuCommand::CMenuCommand(string name, string command) {
    this->name = name;
    this->command = command;
    this->level = 0;
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

void CMenuCommand::setLevel(int level) {
    this->level = level;
}

int CMenuCommand::getMaxLevel(int max) {
    if(this->level > max){
        max = this->level;
    }
    return max;
}

void CMenuCommand::buildLevel(string **tree_menu) {
    *(tree_menu[level]) += command + " ";
}
