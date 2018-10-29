//
// Created by martkans on 29.10.18.
//

#include "CCommandShowTree.h"

CCommandShowTree::CCommandShowTree(CMenu *main_menu) {
    this->main_menu = main_menu;
}

CCommandShowTree::~CCommandShowTree() {
    cout << "usuwam CCommandShowTree\n";
}

void CCommandShowTree::runCommand() {
    int number_of_levels = main_menu->getMaxLevel(0) + 1;
    string** tree_menu = new string*[number_of_levels];

    for (int i = 0; i < number_of_levels; ++i) {
        tree_menu[i] = new string;
    }

    main_menu->buildLevel(tree_menu);

    for (int i = 0; i < number_of_levels; ++i) {
        cout << *(tree_menu[i]) << "\n";
        delete tree_menu[i];
    }

    delete[] tree_menu;
}