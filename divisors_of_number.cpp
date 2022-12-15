// C++ implementation of Naive method to print all
// divisors
#include <iostream>
using namespace std;

// function to print the divisors
void printDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout <<" " << i;
}

/* Driver program to test above function */
int main()
{
	cout <<"The divisors of 2485 are: \n";
	printDivisors(2485);
	return 0;
}

// this code is contributed by shivanisinghss2110

