#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	// Open input and output files
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");

	// Check if files are open
	if (!inputFile.is_open() || !outputFile.is_open())
	{
		cerr << "Error opening file(s)" << endl;
		return 1;
	}

	// Read number of test cases (example input format)
	int testCases;
	inputFile >> testCases;

	string result = "NO";

	// Process each test case
	for (int t = 1; t <= testCases; ++t)
	{
		long long n, k, test, minimum;
		// Reading input
		inputFile >> n >> k;

		// Example computation (you will replace this with actual logic)

		vector<int> A(n);

		for (auto &x : A)
		{
			inputFile >> x;
		}
		sort(A.begin(), A.end());

		minimum = A[0];

		test = (minimum * 2) * max(0LL, (long long)(n - 2)) + minimum;
		// Write the output (example format: Case #t: result)

		outputFile << "Case #" << t << ": " << (test <= k ? "YES" : "NO") << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}
