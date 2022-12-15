#include<stdio.h>

void printarray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
	printf("%d ",a[i]);
}

}

void bubblesortadaptive(int *a,int n){
	int issorted=0;
	int i,j,k;
		for(i=0;i<n-1;i++){
				printf("\npass %d",i+1);
			issorted=1;
		
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1])
			{
	k=a[j];
	a[j]=a[j+1];
	a[j+1]=k;
	issorted=0;		
			}
				
		}if(issorted)
		{
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

	int a[ ]={1,97,88,40,5};
	printarray(a,n);
    bubblesortnormal(a,n);
    printf("\n");
    printarray(a,n);
     bubblesortadaptive(a,n);
    printf("\n");
	printarray(a,n);
return 0;
}
