#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::Size(float a,float b)
{
	area= a * b;
}

void Rectangle::Draw()
{
	printf("Rectangle‚Ì–ÊÏ‚Í%f\n",area);
}
