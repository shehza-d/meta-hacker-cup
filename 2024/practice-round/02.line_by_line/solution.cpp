#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
#include <iomanip>

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
	long testCases;
	inputFile >> testCases;

	// Process each test case
	for (int t = 1; t <= testCases; ++t)
	{
		double n, p, result;
		// Reading input
		inputFile >> n >> p;

		// Example computation (you will replace this with actual logic)

		// result = pow(100 * (p / 100), n - 1 / n);
		result = (100 * pow(p / 100.0, (double)(n - 1) / n));

		// Write the output (example format: Case #t: result)
		outputFile << "Case #" << t << ": " << setprecision(10) << result - p << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}
