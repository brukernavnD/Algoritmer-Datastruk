#include <iostream>
using namespace std;

int FactorialNum = 4;

int Factorial(int FactorialNum)
{
    long factorial = 1.0;

    if (FactorialNum < 0){
    	cout << "Error! Factorial of a negative number doesn't exist.";
    }
    else {
    
        for(int i = 1; i <= FactorialNum; ++i) {
            factorial *= i;
        };
        return factorial;
    };
};

int RecursiveFactorial(int FactorialNum)
{
	if(FactorialNum > 1)
		return FactorialNum * RecursiveFactorial(FactorialNum - 1);
	else
		return 1;
};

int main()
{
    cout << "Factorial of " << FactorialNum << " = " << Factorial(FactorialNum) << endl;
    //cout << "Recursive Factorial of " << FactorialNum << " = " << RecursiveFactorial(FactorialNum) << endl;
    return 0;
};