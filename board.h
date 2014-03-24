/*
 *  Copyright 2014 by Wade T. Cline
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.

 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.

 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef board_H
#define board_H


#include <stdio.h>


#define BOARD_COLUMNS 4
#define BOARD_ROWS 4

// Likelihood of a '4' appearing on the board represented as a percentage
// multiplied by 100.
#define BOARD_4SPAWN_CHANCE 15


/**
 * Represents the in-game board.
 */
struct board {
	// Holds the value of each tile.
	unsigned tiles[BOARD_ROWS][BOARD_COLUMNS];
};


/**
 * Returns 0 if the game is not over; >0 if the game is over and the user
 * has won, or <0 if the user has lost.
 */
int board_done(struct board* board);

/**
 * Returns the number of empty tiles in the board.
 */
unsigned board_get_tiles_empty(struct board* board);

/**
 * Initializes the specified board.
 */
void board_init(struct board* board);

/**
 * Spawn a new tile on the board.
 *
 * I didn't know what to call this, so "plopping" a value on the board sounds
 * legit enough.
 */
void board_plop(struct board* board);

/**
 * Print the board to 'stdout'.
 */
void board_print(struct board* board);

/**
 * Shift all the elements in the board down.
 */
void board_shift_down(struct board* board);

/**
 * Shift all the elements in the board left.
 */
void board_shift_left(struct board* board);

/**
 * Shift all the elements in the board right.
 */
void board_shift_right(struct board* board);

/**
 * Shift all the elements in the board up.
 */
void board_shift_up(struct board* board);


#endif // board_H