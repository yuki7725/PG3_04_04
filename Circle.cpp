#include "Circle.h"
#include <stdio.h>

Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::Size(float a,float b)
{
	/*float result;
	result = a * a * pi;
	return  result;*/
	area=a * a * b;
}

void Circle::Draw()
{
	printf("CircleÇÃñ êœÇÕ%f\n",area);
}
