//Этот проект создан с помощью классического шаблона
#include <iostream>
#include <cmath>
#include "Car.h"
#include "Van.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;



	std::cout << "Task1: " << std::endl;
	//Преобразуйте double i = 32200030001.1 в int по правилам языка C++, выведите
	//экран на результат.Предположите, что произошло ?

	double i = 32200030001.1;
	int a = static_cast<int>(i);
	std::cout << a << std::endl; // выдает отрицательное число, потому что число находится вне диапазона double, и отзеркаливает от минусовой границы диапазона


	std::cout << "Task2: " << std::endl;
	//2. Приведите пример снятия константности с указателя на double.

	char* s;
	const char* cs;
	s = const_cast<char*>(cs);

	std::cout << "Task3 " << std::endl;


	Car car;
	Van van;


	//успешный upcast

	Car* pCar = &van;

	//успешный downcast

	Van* pVan = (Van*)pCar;


	// 2 неуспешных downcasta

	Van* pVan = static_cast<Van*>(pCar); // не успешный, так как так можно делать если нет виртуальных классов

	Van* pVan = (Van*)&car;


	//Закомментированным кодом предложите версию
	//downcast’a которая будет считаться неопределенным поведением.

	/*Van* pVan = (Van*)&car;
	pCar->Run();
	pVan->Run();
	pVan->Accelerate();*/






	return 0;
}