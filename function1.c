#include <stdio.h>

int main(void) {

    int height, length, width, volume, weight;

    printf("Enter Height");
    scanf("%d", &height);
    printf("Enter Length");
    scanf("%d", &length);
    printf("Enter Width");
    scanf("%d", &width);
    
    volume= height*length*width;
    weight= (volume+165)/166;

    printf("Voulme %d\n", volume);
    printf("Dimension %d\n", weight);

    return 0;

}