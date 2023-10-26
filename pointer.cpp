#include <iostream>

void changeVariable(int* variableToChange);

int main() 
{
    int a = 5;
	
	std::cout << a << std::endl;
	
	changeVariable(&a);
	
	std::cout << a << std::endl;
	
    return 0;
}

void changeVariable(int* variableToChange)
{
	*variableToChange = *variableToChange + 1;
}
