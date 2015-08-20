#include "pointerArray.h"
#include <stdlib.h>

int main(void) {

    int *ys = (int *) malloc(10 * sizeof(int));
    // (int *) is required to CAST as malloc returns (void *)
    // that is to say a pointer of type void
    int *p = ys;
    // pointer p points to same memory address as pointer ys;
    
    for (int i = 0; i < 10; i++) {
        *(p+i) = i+1;
    }
    
    printf("the value of ys[0] is: %d\n", *ys);
    
    p = ys;
    
}
