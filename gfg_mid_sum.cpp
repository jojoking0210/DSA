 #include <iostream>
using namespace std;

int main(){
int a,i=0,n=5,s1=0,s2=0;
int arr[]={1,3,5,2,2};
   do{
        s1=s1+arr[i];
        s2=s2+arr[n-1-i];
		i++;
      }while(s1!=s2);
        cout<<arr[i];
	
    return 0;
} 


int s1=0,s2=0,i=0;
    
    do{
        s1=s1+a[i];
        s2=s2+a[n-1-i];
		i++;
      }while(s1!=s2);
      
      if(n%2==0){
        return -1;}
        
      else if(i!=n){
       return i+1;  
     } 
     else if(n==1){
         return 1;
     }
    else 
        {
            return -1;
        }
