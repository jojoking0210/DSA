#include<stdio.h>

int main(){
	int x[]={1,4,8,5,1,4};
	int* ptr,y;
//	ptr=x+4;
//	y=ptr-x;
ptr=x;
	printf("%u",ptr);
	printf("%u %u",ptr,y);
	return 0;
}
