#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define s(a,b,c) {s=(a+b+c)/2;}
#define A(a,b,c,s) sqrt(s*(s-a)*(s-b)*(s-c))

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float area = 0;
	float s = 0;
	scanf("%f %f %f", &a, &b, &c);
	s(a, b, c);
	A(a, b, c, s);
	printf("%.3f", A(a, b, c, s));
	return 0;
}