	// C++ program to print diamond shape
	// with 2n rows
	#include <bits/stdc++.h>
	using namespace std;

	// Prints diamond pattern with 2n rows
	void printDiamond(int n)
	{
		int space = n - 1;

		// run loop (parent loop)
		// till number of rows
		for (int i = 0; i < n; i++)
		{
			// loop for initially space,
			// before star printing
			for (int j = 0;j < space; j++)
				cout << " ";

			// Print i+1 stars
			for (int j = 0; j <= i; j++)
			if(j == 0 || j == i)
				cout << "* ";
			else
			cout << "  ";

			cout << endl;
			space--;
		}

		// Repeat again in reverse order
		space = 0;

		// run loop (parent loop)
		// till number of rows
		for (int i = n; i > 0; i--)
		{
			// loop for initially space,
			// before star printing
			for (int j = 0; j < space; j++)
				cout << " ";

			// Print i stars
			for (int j = 0;j < i;j++)
				if(j == 0 || j == i-1)
				cout << "* ";
				else
			cout << "  ";

			cout << endl;
			space++;
		}
	}

	// Driver code
	int main()
	{
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
		#endif
		int n ; 
		cin >> n;

		printDiamond(n);
		return 0;
	}

	// This is code is contributed
	// by rathbhupendra
