#include <iostream>


int main() 
{
    int a = 5; // stack
	
	// heap
	int* speicher_fuer_int = new int;
	*speicher_fuer_int = 10;
	
	delete speicher_fuer_int;
	
	int size = 5;
	//std::cin >> size;
	int* dynArray = new int[size];
	
	// ....
	
	
	delete[] dynArray;
}

