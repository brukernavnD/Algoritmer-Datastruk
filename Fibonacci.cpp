#include <iostream>
using namespace std;

int FibonacciNum = 4;

int RecursiveFibonacci(int n)
{
	if (n <= 1)
    {
    	return n;
    }
	else {
    	return RecursiveFibonacci(n - 1) + RecursiveFibonacci(n - 2);
    };
};

int Fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
};

int main()
{
    cout << "Fibonacci of " << FibonacciNum << " = " << Fibonacci(FibonacciNum) << endl;
    //cout << "Recursive Fibonacci of " << FibonacciNum << " = " << RecursiveFibonacci(FibonacciNum) << endl;
    return 0;
};
