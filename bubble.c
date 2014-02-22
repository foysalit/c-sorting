#include <stdlib.h>
#include <stdio.h>

#define MAX 10

void getInput(int A[], int size){
	int i;

	printf("Insert the numbers in order\n");

	for (i = 0; i < size; ++i){
		scanf("%d", &A[i]);
	}
}

void printArray(int A[], int size){
	int i;

	for (i = 0; i < size; ++i){
		printf("%d\t", A[i]);
	}

	printf("\n");
}

void bubbleSort(int A[], int size){
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < size; ++i){
		for (j = (size - 1); j > i; --j){
			/*("comparing %d with %d\n", A[j], A[j-1]);*/
			if(A[j] < A[j-1]){
				temp = A[j];
				A[j] = A[j-1];
				A[j-1] = temp;
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	int A[MAX];

	getInput(A, MAX);

	printf("before:\t");
	printArray(A, MAX);

	bubbleSort(A, MAX);

	printf("after:\t");
	printArray(A, MAX);

	return 0;
}