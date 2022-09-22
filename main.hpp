//
// Created by Griffin Thompson on 9/21/22.
//

#ifndef INC_03L_MOVING_GRID_MAIN_HPP
#define INC_03L_MOVING_GRID_MAIN_HPP

struct Point{int x, y;};
enum Direction {NORTH = 1, EAST, SOUTH, WEST};
void move(Point&, Direction);

#endif //INC_03L_MOVING_GRID_MAIN_HPP
