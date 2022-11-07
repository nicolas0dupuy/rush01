#include "stdio.h"

int main(int argc, char *argv[]) {
    if (argc != 2){
        printf("Usage:\n");
        printf("rush-01 \"col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left");
        printf(" row3left row4left row1right row2right row3right row4right \" \n");
    }
    return 0;
}