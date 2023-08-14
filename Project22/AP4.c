#include<stdio.h>
void main() {
	char data[5];
	char* p = data;
	// 1. *p = &*(data + 0);
	// 2. *p = &data[0];
	*(data + 2) = 5;
	p = p + 1;
	data = data + 1;// 불가능 배열은 자신에게 배정된 주소를 변경할 수 없다.
}