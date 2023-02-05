#pragma once
#include "Car.h"
class Van:public Car
{
public:
	void Run() override;

	void Accelerate();
private:

};

