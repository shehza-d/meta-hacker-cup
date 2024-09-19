#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool check(map<int, int> &apple, long long daily)
{
	for (auto [k, v] : apple)
	{
		if (k * 2 >= daily)
			break;
		else if (k * 2 == daily)
			return v % 2 == 0;
		else if (apple.count(daily - k) == 0 || apple[daily - k] != v)
			return false;
	}

	return true;
}

int take2(int N, vector<int> &A)
{
	if (N == 1)
		return 1;

	long long sum = accumulate(begin(A), end(A), 0LL);
	map<int, int> apple;

	for (int a : A)
		++apple[a];

	for (auto it = rbegin(apple); it != rend(apple); ++it)
	{
		int extra = it->first;

		if ((sum - extra) % (N - 1))
			continue;

		long long daily = (sum - extra) / (N - 1);

		if (daily <= extra)
			continue;

		sum -= extra;
		if (--apple[extra] == 0)
			apple.erase(extra);

		if (check(apple, daily))
			return daily - extra;

		sum += extra;
		++apple[extra];
	}

	return -1;
}

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
		int n;
		// Reading input
		inputFile >> n;

		// Example computation (you will replace this with actual logic)

		vector<int> A(n * 2 - 1);

		for (auto &x : A)
			inputFile >> x;

		// Write the output (example format: Case #t: result)
		outputFile << "Case #" << t << ": " << take2(n, A) << endl;
	}

	// Close the files
	inputFile.close();
	outputFile.close();

	return 0;
}

// https://github.com/li-chiun-lin/MetaHackerCup/blob/main/2023_Q/two_apples_a_day.cpp