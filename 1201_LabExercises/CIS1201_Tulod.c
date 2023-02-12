#include <stdio.h>
void swap(int a[], int n);
void display(int a[], int n);
void insert(int a[], int *n, int item);

int main()
{
	int list[5] = {1, 2, 13, 16, 25};
	int count = 5;
	int item = 5;
	
	//swap(list, count);
	insert(list, &count, item);
	display(list, count);
	
	
}

void swap(int a[], int n){
	int smallest = a[0], firstIndex, i = 0, temp;
	for (i = 0; i < n; ++i){
		if (a[i] < smallest){
			smallest = a[i];
			firstIndex = i;
		}
	}
	temp = a[0];
	a[0] = smallest;
	a[firstIndex] = temp;
}

void display(int a[], int n){
	int i = 0;
	printf("[");
	for (i = 0; i != n; ++i){
		printf("%d", a[i]);
		
		if(i < n -1){
			printf("|");
		}
	}
	printf("], COUNT: %d", n);
}

void insert(int a[], int *n, int item){
	//Determine the order of the digit if inserted into the array
	int i;
	for (i = 0; item < a[i] || i < *n; ++i){
		if (item < a[i]){
			a[i-1] = item;
		}
	}
	
	//Get the index of the number before where it should be inserted to
	/*int i;
	for (i = 0; a[i] < *n < a[i+1]; ++i){
	a[(*n)] = item;
	(*n)++;
	}*/
	
		
	/*int i = 0;
	for (i = 0; i < *n - 1; ++i){
		for ()
		*/
	}





