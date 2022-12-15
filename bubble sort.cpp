#include<stdio.h>

void swap(int *a,int n){
	int k,j,i;
	k=a[j];
	a[j]=a[j+1];
	a[j+1]=k;
}
void printarray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
}

}

void bubblesort(int *a,int n){
	int i,j;
		for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
			{swap(a,n);
			}
		}
	}
}

int main(){
	int i,j,n=8;
	int a[ ]={3,4,5,1,9,10,45,88};
	printarray(a,n);
    bubblesort(a,n);
    printf("\n");
	printarray(a,n);
return 0;
}
