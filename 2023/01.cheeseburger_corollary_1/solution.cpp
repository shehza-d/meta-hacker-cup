#include <iostream>
#include <fstream>
#include <string>
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
		// Read/take input
		int a, b, c;
		inputFile >> a >> b >> c;


		// Example computation (you will replace this with actual logic)
		
		int single_burger = a, double_burger = b, target = c;
		string result = "NO";
		
		int buns = 2 * (single_burger + double_burger);

		int patties = single_burger + (2 * double_burger);

		if (buns > target && patties >= target)
			result = "YES";
		// Write the output (example format: Case #t: result)
		outputFile << "Case #" << t << ": " << result << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}
