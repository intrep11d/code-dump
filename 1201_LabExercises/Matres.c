#include<stdio.h>
#define MAX 10

void display(int a[],int n);
void swap(int a[],int n);
void insert(int a[],int *n,int item);
void swapVal(int *x, int *y);
float get_average(int a[],int n);
void collectionSwap(int a[], int n);
    
int main(){
	
	int arr[MAX];
	int n, i, x, y, pick, item, sum, all;

	printf("Enter size of array");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter array %d: ",i);
		scanf("%d",&arr[i]);
	}
	
	do{
	printf("Select an option: \n");

	printf("1. Swap Item in Collection: \n");
	printf("2. Insert Item in the Collection: \n");
	printf("3. Swap Values: \n");
	printf("4. Average: \n");
	printf("5. Collection 1: \n");
	
	
	
	scanf("%d",&pick);
	switch(pick){
		case 1:
			swap(arr,n);
			display(arr,n);
			break;
	
		case 2:
			printf("Enter a number to be inserted:");
			scanf("%d",&item);
			insert(arr,&n,item);
			display(arr,n);
			break;
			
		case 3:
			printf("Enter X: ");
			scanf("%d",&x);
			
			printf("Enter Y: ");
			scanf("%d",&y);
			
			swapVal(&x,&y);
            break;
		
		case 4:	
            get_average(arr, n);
		     printf("Average of the array: ");
		     printf("%d",sum);
		     display(arr,n);
		     break;
		
     	case 5:
     	     printf("collection swap 1:  ");
		     scanf("%d",&all);
		     display(arr,n);
		     break;
		
	
		
}
	
	
	}while(pick!=0);
	return 0;
}

void display(int a[],int n){
	int i=0;
	printf("Count: %d\n",n);
		for(i=0;i<n; i++){
		printf("%d ",a[i]);
	}
		printf("\n\n\n\n\n");
}
void swap(int a[],int n){
	
int ding = a[0], temp, i = 0, index =0;
for (i = 0; i < n; i++){
    if(a[i]< ding){
        ding = a [i];
        index = i;}
 }
 temp =a[0];
 a[0] =ding;
 a[index] = temp;
 ding = n;
}

void insert(int a[], int *n, int item){
	
	int i, counter = 0;
	for(i=0; i<*n;i++){
		if(item>a[i]){
			counter++;
		}
	}
	
	for(i=*n; i>=counter; i--){
		a[i] = a[i-1];
	}
	
	a[counter] = item; 
	(*n)++;
	
	printf("\n");
	
	for(i=0;i<*n;i++){
		printf("%d ", a[i]);
	}
}

void swapVal(int *x, int *y){

	*x=*x+*y; 
	*y=*x-*y;
	*x=*x-*y;
	
	printf("The swapped values X= %d and Y= %d ", *x,*y);
	
	printf("\n\n\n\n\n");
}
float get_average(int a[], int n){
	
	float sum;
	int i;
	
	for(i=0; i<n;i ++){
		sum = sum+a[i];
	}
	
	sum/=n;
	return sum;
}

void collectionSwap(int a[], int n){

	int all;
	
	display(a,n);
	
	for(all=0;all<8;all++){
	swap(&a[all], n-all);
	display(a, n);
	
	}

}