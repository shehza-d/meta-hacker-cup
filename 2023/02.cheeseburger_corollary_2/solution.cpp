// https://www.facebook.com/codingcompetitions/hacker-cup/2023/practice-round/problems/A2
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
		long a, b, c;
		// Reading input
		inputFile >> a >> b >> c;

		// Example computation (you will replace this with actual logic)

		long single_burger_price = a, double_burger_price = b, cash = c;
		long result = 0;

		result = cash / single_burger_price; // buy all single burgers

		// Double Burger Buy (Suppose Single Buy)
		result = max(result, 2 * (cash / double_burger_price) - 1);

		// 1 Single + Double Remaining
		if (cash > single_burger_price)
			result = max(result, 2 * ((cash - single_burger_price) / double_burger_price) + 1);

		if (cash > 2 * single_burger_price)
			result = max(result, 2 * ((cash - 2 * single_burger_price) / double_burger_price) + 2);

		// Write the output (example format: Case #t: result)
		outputFile << "Case #" << t << ": " << result << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}
