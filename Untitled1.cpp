#include <iostream>
using namespace std;

int main() {
int T,count=0;
cin>>T;
while(T--){
    int a,b,x;
    cin>>a>>b>>x;
   while(b<a) {
    a=a+x;
    b=b-x;
    if(a-b==0)
    {
        count=count+1;
    }
    if(count>0)
   { cout<<"YES\n";
    }
    else
    {
       cout<<"NO\n";
    }
   } 

}
	return 0;
}

