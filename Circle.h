#pragma once
#include "IShape.h"

class Circle:public IShape
{
public:
	Circle();
	~Circle();

	void Size(float a,float b) override;
	void Draw() override;

private:
};

