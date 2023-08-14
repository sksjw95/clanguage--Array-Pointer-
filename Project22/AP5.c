#include<stdio.h>
void main() {
	char data[3][5];
	char(*p)[5] = data;
	data[0][1] = 5;
	(*(p + 1))[4] = 6;
	(*p)[2] = 7;
	*p[2] = 8;
}