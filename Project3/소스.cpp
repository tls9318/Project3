#include <stdio.h>
#define convert(x) ((9.0/5.0)*x)+32

int main() {
	float a, b, c;

	printf("�����µ� 3�� �Է�: ");
	scanf_s("%f %f %f", &a, &b, &c);

	a = convert(a);
	b = convert(b);
	c = convert(c);

	printf("%,4f, %,4f %,4f\n", a, b, c);

	return 0;
}