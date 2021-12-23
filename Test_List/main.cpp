#include <iostream>
#include <cstdlib>

#include "TList.h"

void testOnlyFirstEven(){
	TList list;
	list.insEnd(4);
	list.insEnd(7);
	list.insEnd(9);

	std::cout << list;
	list.deleteEvenValue();
	std::cout << list;
}

void testAllEven(){
	TList list;
	list.insEnd(4);
	list.insEnd(8);
	list.insEnd(12);
	list.insEnd(20);
	list.insEnd(24);

	std::cout << list;
	list.deleteEvenValue();
	std::cout << list;
}

void testAllOdd(){
	TList list;
	list.insEnd(1);
	list.insEnd(3);
	list.insEnd(5);
	list.insEnd(7);

	std::cout << list;
	list.deleteEvenValue();
	std::cout << list;
}

void testLastOdd(){
	TList list;
	list.insEnd(1);
	list.insEnd(3);
	list.insEnd(5);
	list.insEnd(8);

	std::cout << list;
	list.deleteEvenValue();
	std::cout << list;
}

void testEmptyList(){
	TList list;

	std::cout << list;
	list.deleteEvenValue();
	std::cout << list;
}


void main(){
	std::cout << "Test(OnlyFirstEven):\n";
	testOnlyFirstEven();
	std::cout << "\n";

	std::cout << "Test(AllEven):\n";
	testAllEven();
	std::cout << "\n";

	std::cout << "Test(AllOdd):\n";
	testAllOdd();
	std::cout << "\n";

	std::cout << "Test(LastOdd):\n";
	testLastOdd();
	std::cout << "\n";

	std::cout << "Test(EmptyList):\n";
	testEmptyList();
	std::cout << "\n";

	system("pause");
}