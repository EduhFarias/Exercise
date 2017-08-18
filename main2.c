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
    for(i = 0; i < strlen(string) / 2; i++){
        push(p, pop(s));
    }
    if(strlen(string) % 2 != 0){
        pop(s);
    }
    int flag=1;
    for(i = 0; i < strlen(string) / 2; i++){
        if(pop(s) != pop(p)){
            flag = 0;
        }
    }
    if(flag == 1) printf("%s é um palíndromo\n", string);
    else printf("%s não é um palíndromo\n", string);
    printf("%d\n", flag);

    return 0;
}
