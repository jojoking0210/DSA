#include <iostream>
using namespace std;

int main() {
int T;
cin>>T;
while(T--){
    int a,b,x;
    cin>>a>>b>>x;
   if(a==b)
   {
       cout<<"YES\n";
   }
  else if(abs(b-a)<(2*x))
  {
      cout<<"NO\n";
  }
  else if(abs(b-a)>=(2*x) && abs(b-a)%(2*x)==0)
  {
      cout<<"YES\n";
  }
}
	return 0;
}

