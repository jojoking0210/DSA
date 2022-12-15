// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to find the missing elements
void printMissingElements(int arr[], int N)
{
	// Initialize an array with zero
	// of size equals to the maximum
	// element in the array
	int b[arr[N - 1] + 1] = { 0 };

	// Make b[i]=1 if i is present
	// in the array
	for (int i = 0; i < N; i++) {

		// If the element is present
		// make b[arr[i]]=1
		b[arr[i]] = 1;
	}

	// Print the indices where b[i]=0
	for (int i = arr[0]; i <= arr[N - 1]; i++) {
		
		if (b[i] == 0) {
			int j,a[j];
			cout << i << " ";
			a[j]=i;
			j++;
		}
	
	for(j=0;j<n;j++){
		cout<<a[j];
	}
}

// Driver Code
int main()
{
	// Given array arr[]
	int arr[] = { 6, 7, 10, 11, 13 };

	int N = sizeof(arr) / sizeof(int);

	// Function Call
	printMissingElements(arr, N);

	return 0;
}

