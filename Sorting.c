#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void Swap(int *x, int *y){
	int aux;
	aux = *y;
	*y = *x;
	*x = aux;
}

int* Bubble(int *v, int size){
	int i, j;
	for(j = size - 1; j >= 0; j--){
		for(i = 0; i < j; i++){
			if(v[i] > v[i + 1]){
				Swap(&v[i], &v[i + 1]);
			}
		}
	}
	return v;
}

int* Selection(int *v, int size){
	int i, j, min;
	for(i = 0; i < size; i++){
		min = i;
		for(j = i + 1; j < size; j++){
			if(v[min] > v[j]){
				min = j;
			}
		}
		Swap(&v[i], &v[min]);
	}
	return v;
}

int* Insertion(int *v, int size){
	int i, j, key;
	for(i = 1; i < size; i++){
		key = v[i];
		j = i - 1;

		while((j >= 0) && (v[j] > key)){
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = key;
	}
	return v;
}

int* Alloc(int *v, int x){
	v = (int*) malloc(x * sizeof(int));
	if(v == NULL){
		puts("Error");
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
	int *Array, n, *Answer, i;
	puts("Amount of elements: ");
	scanf("%d", &n);

	Array = Alloc(Array, n);
	puts("Enter the numbers of the array: ");
	Read(Array, n);

	Answer = Bubble(Array, n);
	printf("{Bubble Sort: ");
	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d}\n", Answer[i]);
		}
		else printf("%d, ", Answer[i]);
	}

	Answer = Selection(Array, n);
	printf("{Selection Sort: ");
	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d}\n", Answer[i]);
		}
		else printf("%d, ", Answer[i]);
	}

	Answer = Insertion(Array, n);
	printf("{Insertion Sort: ");
	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d}\n", Answer[i]);
		}
		else printf("%d, ", Answer[i]);
	}
  
	free(Array);
	return 0;
}
