//
// Created by martkans on 24.10.18.
//

#ifndef LISTA2_APPLICATIONRUNNER_H
#define LISTA2_APPLICATIONRUNNER_H

#include "../Menu/CMenu/CMenu.h"
#include "../Table/CTableHandler/CTableHandler.h"
#include "../CCommand/CCommand.h"
#include "../Menu/CMenuCommand/CMenuCommand.h"
#include "../CCommand/CCommandChangeObjectName/CCommandChangeObjectName.h"
#include "../CCommand/CCommandChangeTableSize/CCommandChangeTableSize.h"
#include "../CCommand/CCommandCloneObject/CCommandCloneObject.h"
#include "../CCommand/CCommandCreateSpecificObjects/CCommandCreateSpecificObjects.h"
#include "../CCommand/CCommandCreateDefaultObjects/CCommandCreateDefaultObjects.h"
#include "../CCommand/CCommandDeleteAllObjects/CCommandDeleteAllObjects.h"
#include "../CCommand/CCommandDeleteSpecificObject/CCommandDeleteSpecificObject.h"
#include "../CCommand/CCommandSetTableCellValue/CCommandSetTableCellValue.h"
#include "../CCommand/CCommandShowAllCTableObjects/CCommandShowAllCTableObjects.h"
#include "../CCommand/CCommandShowObjectInfo/CCommandShowObjectInfo.h"
#include "../CCommand/CCommandTest/CCommandTest.h"
#include "../CCommand/CCommandShowTree/CCommandShowTree.h"


void start();

#endif //LISTA2_APPLICATIONRUNNER_H
