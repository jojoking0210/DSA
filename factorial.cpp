#include<stdio.h>


int fact(int n){    
      if(n==1 || n==0){
      	return 1;
	  }
      return n*fact(n-1);
  }
  
  int main(){
  	int a;
  	a=fact(10);
  	int p=fact(50);
  	int k=(fact(7)*fact(6));
  	int result=p/k;
  	printf("%d %d %d %d",a,p,k,result);
  }
