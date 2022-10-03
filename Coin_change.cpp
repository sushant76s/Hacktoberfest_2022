// Question.
// Given an integer array of coins[ ] of size N representing different types of currency and an integer sum, The task is to find the number of ways to make sum by using different combinations from coins[].  

// Note: Assume that you have an infinite supply of each type of coin. 

// Examples: 

// Input: sum = 4, coins[] = {1,2,3}, 
// Output: 4
// Explanation: there are four solutions: {1, 1, 1, 1}, {1, 1, 2}, {2, 2}, {1, 3}.

// memoization approach

#include <bits/stdc++.h>

using namespace std;

// This code is
int count(int coins[], int n, int sum)
{
	// table[i] will be storing the number of solutions for
	// value i. We need sum+1 rows as the table is
	// constructed in bottom up manner using the base case
	// (sum = 0)
	int table[sum + 1];

	// Initialize all table values as 0
	memset(table, 0, sizeof(table));

	// Base case (If given value is 0)
	table[0] = 1;

	// Pick all coins one by one and update the table[]
	// values after the index greater than or equal to the
	// value of the picked coin
	for (int i = 0; i < n; i++)
		for (int j = coins[i]; j <= sum; j++)
			table[j] += table[j - coins[i]];
	return table[sum];
}

int main()
{
	int coins[] = { 1, 2, 3 };
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 4;
	cout << count(coins, n, sum);
	return 0;
}

