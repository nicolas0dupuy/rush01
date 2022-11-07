#include "stdio.h"
#include "check.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
    if (argc != 2){
        printf("Usage:\n");
        printf("rush-01 \"col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left");
        printf(" row3left row4left row1right row2right row3right row4right \" \n");
    }
    char *pos;
    pos = argv[1];
    int n_args = 0; // Count the number of args in argv
    while (*pos)
    {
        if (*pos != ' ')
        {
            n_args++;
        }
    }
    


    
    while(*pos)
    {
        if (*pos != ' ')
        {
            int i = atoi(pos);
            printf("%d \n", i);
        }
        pos++;
    }
    return 0;
}