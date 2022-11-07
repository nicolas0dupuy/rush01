#ifndef CHECK_

#define CHECK_

/*
check_duplicate:

int n : number of squares on the board
int * line : point to the start of the line
int direction : 1 to 4
    1 : up to bottom
    2 : bottom to up
    3 : left to right
    4 : right  to left
*/
int check_duplicates(int n, int * line, int direction);

/*
check_aligned:

int n : number of squares on the board
int * line : point to the start of the line
int direction : 1 to 4
    1 : up to bottom
    2 : bottom to up
    3 : left to right
    4 : right  to left
int to_see : number of buildings to see in this direction
*/
int check_aligned(int n, int * line, int direction, int to_see);

/*
int * next_square:

int n : number of squares on the board
int * position : the current read position in the line
int direction :  1 to 4
    1 : up to bottom
    2 : bottom to up
    3 : left to right
    4 : right  to left
*/
int * next_square(int n, int * position, int direction);

#endif

