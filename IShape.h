#pragma once
class IShape
{
public:
	IShape();
	~IShape();

	virtual void Size(float a,float pi)=0;
	virtual void Draw() = 0;

private:
	
};

