#include <stdio.h>

int main(int argc, char const *argv[]) {
//    int matriz[10][3] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}, {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};

    int matriz[2][5] = {{0, 1, 2, 3, 4},{5, 6, 7, 8, 9}};
    int **m;

    m = matriz;


    printf("%c\n", *((m+1)+1));
/*    char sla[10][2] = {
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'},
        {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}
    };*/
    //char *p;

//    p = sla;

//    printf("%c\n", p[1][1]);

    return 0;
}
