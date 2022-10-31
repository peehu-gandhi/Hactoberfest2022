#include <bits/stdc++.h>
using namespace std;

int MaxNonEmpSubSeq(int a[], int n)
{

	int sum = 0;

	// Stores the largest element
	int max = *max_element(a, a + n);

	if (max <= 0) {

		return max;
	}

	// Traverse the array
	for (int i = 0; i < n; i++) {

		// If a[i] is greater than 0
		if (a[i] > 0) {

			sum += a[i];
		}
	}
	return sum;
}

int main()
{
	int arr[] = { -2, 11, -4, 2, -3, -10 };
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << MaxNonEmpSubSeq(arr, N);

	return 0;
}
