#ifndef GAMECOMMAND_H
#define GAMECOMMAND_H

#include <iostream>
#include "Model.h"
#include "Input_Handling.h"
#include "Point2D.h"
#include <limits>

void DoMoveCommand(Model&, int, Point2D);


void DoMoveToCenterCommand(Model&, int, int);
void DoMoveToGymCommand(Model&, int, int);
void DoStopCommand(Model&, int);
void DoBattleCommand(Model&, int, unsigned int);
void DoRecoverInCenterCommand(Model&, int, unsigned int);

void DoCommands(Model&);
void DoAdvancedCommand(Model&, View&);
void DoRunCommand(Model&, View&);

#endif