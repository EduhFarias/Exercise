#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;

int* Map(int (*Fuction)(int x), int* v, int size){
	if(i > size){
		return v;
	}
	else{
		*(v + i) = (*Fuction)(*(v + i));
		i++;
		return Map(*Fuction, v, size);
	}
}

int Square(int x){
	return x*x; 
}

int Factorial(int x){
	if(x == 1){
		return 1;
	}
	else return Factorial(x - 1) * x;
}

int* Alloc(int *v, int x){
	v = (int*) malloc(x * sizeof(int));
	if(v == NULL){
		puts("Error");
		free(v);
		exit(1);
	}
	else return v;
}

void Read(int *v, int x){
	int i;
	for(i = 0; i < x; i++){
		scanf("%d", &v[i]);
	}
}

int main(){
	int *Array, n, *Answer;
	char Op;
	puts("Amount of elements: ");
	scanf("%d", &n);

	Array = Alloc(Array, n);
	puts("Enter the numbers of the array: ");
	Read(Array, n);
	puts("(S)quare or (F)actorial: ");
	getchar();
	Op = getchar();

	if(Op == 'S'){
		Answer = Map(Square, Array, n);
	}
	else if(Op == 'F'){
		Answer = Map(Factorial, Array, n);
	}
	else{ 
		puts("Invalid operation");
		free(Array);
		exit(1);
	}

	printf("{");
	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d}\n", Answer[i]);
		}
		else printf("%d, ", Answer[i]);
	}

	free(Array);

	return 0;
}
