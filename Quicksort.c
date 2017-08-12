#include <stdio.h>
#include <stdlib.h>

void Swap(int *x, int *y){
	int aux;
	aux = *y;
	*y = *x;
	*x = aux;
}

int* Quick(int *v, int size){
	if(size <= 1){
		return v;
	}
	else{
		int pivot = v[size / 2];
		int a, b;
		a = 0;
		b = size - 1;

		while(a < b){
			while(v[a] < pivot){a++;}
			while(v[b] > pivot){b--;}
			if(a < b){
				Swap(&v[a], &v[b]);
				a++;
				b--;
			}
		}
		Quick(v, a);
		Quick(v+a, size - a);
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

	Answer = Quick(Array, n);
	printf("{Quick Sort: ");
	for(i = 0; i < n; i++){
		if(i == n - 1){
			printf("%d}\n", Answer[i]);
		}
		else printf("%d, ", Answer[i]);
	}


	free(Array);
	return 0;
}
