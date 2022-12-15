// C++ program to print all prime factors
#include <bits/stdc++.h>
using namespace std;

// A function to print all prime
// factors of a given number n
void primeFactorssum(int n)
{
int a[1000];	
	int s=0,k;
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{s=s+2;
		cout << 2 << " ";
		n = n/2;
	}

	// n must be odd at this point. So we can skip
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n % i == 0)
		{s=s+i;
			cout << i << " ";
			n = n/i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		{	s=s+n;
		cout << n << " "<<"sum is"<<s;
		}
		
}

/* Driver code */
int main()
{
	int n = 1;
	primeFactorssum(n);
	return 0;
}

// This is code is contributed by rathbhupendra

