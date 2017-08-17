#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(){
    Stack *s = createStack();
    push(s,1);
    printf("comc\n");
    push(s,2);
    printf("1: %d\n", pop(s));
    printf("2: %d\n", pop(s));
    printf("3: %d\n", pop(s));


    //1

        return 0;
}