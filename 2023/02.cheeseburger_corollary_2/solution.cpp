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

	// Process each test case
	for (int t = 1; t <= testCases; ++t)
	{
		int a, b, c;
		// Reading input
		inputFile >> a >> b >> c;

		// Example computation (you will replace this with actual logic)

		// <your code here...>

		// Write the output (example format: Case #t: result)
		outputFile << "Case #" << t << ": " << "YES" << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}
