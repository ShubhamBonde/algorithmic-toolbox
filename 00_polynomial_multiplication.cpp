#include <bits/stdc++.h>
using namespace std;
// Polynomial multiplication algorithm.
int *poly_multiplication(int *A, int *B, int n);
int main(){
	int n, t;
    cin >> n;
	t = n;
	int A[n], B[n];


	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		A[i] = x;
	}


	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		B[i] = x;
	}
	int *product = poly_multiplication(A, B, n);
    for (int i = 0; i < (2*n-1); i++)
	{
		cout << product[i] << " ";
	}
    cout << "\n";

    
}



int *poly_multiplication(int *A, int *B, int n)
{
	int *solution = new int[2*n-1];
	for (int i = 0; i < (2*n-1); i++)
	{
		solution[i] = 0;
	}

	for (int i = 0; i < (n); i++)
	{
		for (int j = 0; j < (n); j++)
		{
			solution[i+j] += A[i]*B[j]; // important 
		}
	}
	
	return solution;

}
