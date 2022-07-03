// 
// Démineur Classic 
// https://github.com/FredZeroG/minesweeper-classic
// 
// MIT License - Copyright (C) 2020 FredZeroG
// This file is subject to the terms and conditions defined in
// file "LICENSE", which is part of this source code package.

#pragma once

#include "common.h"

// SPRITES
void draw_cell_sprite(CellSprite sprite, SDL_Rect *rd);
void draw_digit(int value, int x, int y);
