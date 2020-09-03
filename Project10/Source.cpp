#include<stdio.h>
int main()
{
	int a, b, c, max;
	printf("input length of side A : ");
	scanf_s("%d", &a);
	printf("input length of side B : ");
	scanf_s("%d", &b);
	printf("input length of side C : ");
	scanf_s("%d", &c);
	if (a > b) max = a; else max = b;
	if (c > max) max = c;
	if (max+max<a+b+c) printf("A,B,C are sides of triangle.\n");
	else printf("A,B,C are not sides of triangle.\n");
	return 0;
}