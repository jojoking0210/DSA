#include<stdio.h>

void printarray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
}

}

void bubbleSortAdaptive(int *a, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}

void bubblesortnormal(int *a,int n){

	int i,j,k;
		for(i=0;i<n-1;i++){
			printf("\npass %d",i+1);
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
			{
	k=a[j];
	a[j]=a[j+1];
	a[j+1]=k;
			}
			
		}
	}
}

int main(){
	int n=5;

	int a[ ]={97,65,43,2,1};
	printarray(a,n);
    bubblesortnormal(a,n);
    printf("\n");
    printarray(a,n);
     bubbleSortAdaptive(a,n);
    printf("\n");
	printarray(a,n);
return 0;
}
