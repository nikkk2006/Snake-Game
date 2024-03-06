#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include "raylib.h"
#include "raymath.h"
#include "buttonExit.h"
#include "constants.h"
#include <deque>


bool eventTriggered(double interval);

bool elementInDeque(Vector2& element, std::deque<Vector2> deque);

Vector2 generateRandomCell();

#endif // !FUNCTIONS_H

