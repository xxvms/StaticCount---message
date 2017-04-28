// StaticCount - message.cpp : Defines the entry point for the console application.
//

#include <iostream>

int callStatic(int counter_);

int main()
{

	std::cout << "Please provide value for counter: ";
	int loopValue = 0;
	std::cin >> loopValue;

	for (int i = 0; i < loopValue; i++)
	{
		std::cout << callStatic(i) << "\t";
	}
	std::cout << std::endl;
	

	std::cout << "This is call outside loop - testing if static retains value outside loop" << std::endl;

	std::cout << callStatic(12) << "\t" << std::endl;
	system("pause");
    return 0;
}
int callStatic(int counter_)
{
	static int counter = 0;
	counter++;
	return counter;
}
