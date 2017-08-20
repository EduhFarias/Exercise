#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define MAX 1000

int main(){
    char string[MAX];
    scanf("%s", string);
    int i;
    Stack *s = createStack();
    Stack *p = createStack();
    for(i = 0; i < strlen(string); i++){
        push(s,string[i]);
    }
    if(compare(s, p, strlen(string))){
        printf("%s eh um palindromo\n", string);
    } else printf("%s nao eh um palindromo\n", string);

    return 0;
}
