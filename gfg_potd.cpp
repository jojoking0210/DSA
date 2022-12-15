// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;

     int primeFactorssum(int n)
{
	
	int s=0;
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{s=s+2;
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{s=s+i;
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		{	s=s+n;	
		}
		return s;
}
 int sumOfAll(int l, int r){
 int i;  
for(i=l;i<=r;i++){
    int k,sum=0;
    k=primeFactorssum(i);
    sum=sum+k;
    cout<<sum;
}
