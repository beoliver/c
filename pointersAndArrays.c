#include "pointersAndArrays.h"

int main(void) {

    int x;
    int y;
    
    int xs[10];
    
    int *p;
    
    for (int i = 0; i < 10; i++) {
        xs[i] = i+1;
    }
    
    p = xs; // (p = &xs[0])
    
    x = *(p+9);
    y = *(xs+1);
    
    printf("the value of x+y is: %d\n", x+y);
    
}
