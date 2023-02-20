#include <stdio.h>
void swap(int a[], int n);
void insert(int a[], int *n, int item);
void swapValues(int *a, int *b);
float get_average(int a[], int n);
void collectionSwap(int a[], int n);
void collectionInsert(int a[], int n);
void display(int a[], int n);

//Comment specific parts of the code to use a function(s)

int main() {
    int a[] = {5, 4, 2, 1, 7, 3, 10, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int *x = 2, *y = 5;

    //swap(a, n);
    display(a, n);

   printf("\nOriginal Collection: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    

    swapValues(&x, &y);
    printf("\nSwapped Values: x = %d, y = %d\n", x, y);

    printf("Swapped Collection: ");
    swap(a, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


   int item = 3;
    printf("Inserted Collection: ");
    insert(a, &n, item);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("Average of Collection: %.2f\n", get_average(a, n));
    

    //collectionSwap(a, n);
    //collectionInsert(a, n);
    
}





void swap(int a[], int n) {
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

void insert(int a[], int *n, int item) {
    int i = *n - 1;

    while (i >= 0 && a[i] > item) {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = item;
    (*n)++;
}

void swapValues(int *a, int *b) {
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

float get_average(int a[], int n) {
    int i;
    float sum = 0.0;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

void collectionSwap(int a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        swap(a + i, n - i);
        display(a, n);
        printf("\n");
    }
}

void collectionInsert(int a[], int n) {
    int i, item;

    for (i = 1; i < n;) {
        item = a[i];
        insert(a, &i, a[i]);
        display(a, n);
        printf("\n");
    }
    
}

void display(int a[], int n) {
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

