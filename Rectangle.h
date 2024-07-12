#pragma once
#include "IShape.h"

class Rectangle:public IShape 
{
public:
	Rectangle();
	~Rectangle();

	void Size(float a,float b) override;
	void Draw() override;

private:
	float area;
};

