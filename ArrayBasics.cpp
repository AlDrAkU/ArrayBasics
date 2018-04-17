#include <iostream>
#include <string>
#include "structs.h"
#include "utils.h"

#pragma region generalDirectives


void ArrayGenerator();
void PrintElements(int* pNumbers, int size);
void Printelements(int* pNumbers, int startIdx, int endIdx);

const int size{5};


void ArrayGenerator() {
	Point2f a1{}, a2{}, a3{}, a4{};
	int arrayInt[]{2,5,8,12,6,7,21};
	int arrayInt2[]{ 5,8,12,6,7,21 };
	int arrayInt3[]{ 8,12,6,7,21 };
	Point2f arrayInt4[]{a1,a2,a3,a4 };


	std::cout << "First element in the first list is: " << arrayInt[0] << '\n';
	std::cout << "First element in the second list is: " << arrayInt2[0] << '\n';
	std::cout << "First element in the third list is: " << arrayInt3[0] << '\n';

	std::cout << "Last element in the first list is: " << arrayInt[6] << '\n';
	std::cout << "Last element in the second list is: " << arrayInt2[5] << '\n';
	std::cout << "Last element in the third list is: " << arrayInt3[4] << '\n';
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Iterating over the elements" << std::endl;


	for (int i = 0; i < sizeof(arrayInt)/4; i++)
	{
		std::cout << arrayInt[i] << " " ;

	}
	std::cout << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < sizeof(arrayInt)/4; i++)
	{
	std::cout <<"Address of element with index "<< i << " is " << &arrayInt[i] << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Array of Point2f types " << std::endl;


	for (int i = 0; i < sizeof(arrayInt4)/8; i++)
	{
		std::cout << "Address of element with index " << i << " is " << &arrayInt4[i] << '\n';
	}
}
void PrintElements(int* pNumbers, int size) {





}
void Printelements(int* pNumbers, int startIdx, int endIdx) {





}

int main() {
	ArrayGenerator();


	system("pause");
}