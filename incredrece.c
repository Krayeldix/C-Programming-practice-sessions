#include <stdio.h>

int main() {

    int i=10;
    int j=5+i++;

    printf("%d, %d\n", i,j);

    return 0;

}