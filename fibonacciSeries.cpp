// Fibonacci Series using Recursion

#include <bits/stdc++.h>
using namespace std;
 
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
 
int main()
{
   int n , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> n;
   cout << "\nFibonnaci Series : ";
   while(i < n) {
      cout << " " << fibonacci(i);
      i++;
   }
   return 0;
}

