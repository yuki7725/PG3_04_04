#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include <math.h>

int main() {

	IShape* iShape[2];
	float a = 4.00f;//���a
	float b = 5.00f;//�ӂ̒���
	float pi = 3.14f;//�~����

	//����
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			iShape[i] = new Rectangle;
		}
		if (i == 1) {
			iShape[i] = new Circle;
		}
	}

	//�o��
	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			iShape[i]->Size(a, b);
			iShape[i]->Draw();
		}
		else if (i == 1) {
			iShape[i]->Size(a, pi);
			iShape[i]->Draw();
		}
	}

	//�j��
	for (int i = 0; i < 2; i++) {
			delete iShape[i];
	}

	return 0;
}