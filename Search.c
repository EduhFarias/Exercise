#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int *V, int Element, int size){
	int i, count;
	count = 0;
	for(i = 0; i < size; i++){
		if(V[i] == Element){
			return i;
		}
	}
  return -1;
}

int BinarySearchR(int *V, int Element, int Begin, int End){
	int Middle;
	Middle = (Begin + End)/2;
	if(Begin >= End){
		return -1;
	}
	else{
		if(V[Middle] < Element){
			Begin = Middle + 1;
			BinarySearchR(V, Element, Begin, End);
		}
		else if(V[Middle] > Element){
			End = Middle - 1;
			BinarySearchR(V, Element, Begin, End);
		}
		else return Middle;
	}
}

int BinarySearchI(int *V, int Element, int Size){
	int begin, end, middle;
	begin = 0;
	end = Size - 1;
	
	while(begin <= end){
		middle = (begin + end) / 2;
		if(V[middle] < Element){
			begin = middle + 1;
		}
		else if(V[middle] > Element){
			end = middle - 1;
		}
		else return middle;
	}
	return -1;
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
	int *Array, n, answer, x;
	puts("Amount of elements: ");
	scanf("%d", &n);

	Array = Alloc(Array, n);
	puts("Enter the numbers of the array: ");
	Read(Array, n);

	puts("Enter the desired number: ");
	scanf("%d", &x);

	answer = LinearSearch(Array, x, n);
	printf("Position of the element: %d\n", answer);

	answer = BinarySearchR(Array, x, 0, n - 1);
	printf("Position of the element: %d\n", answer);

	answer = BinarySearchI(Array, x, n);
	printf("Position of the element: %d\n", answer);

	free(Array);
	return 0;
}
