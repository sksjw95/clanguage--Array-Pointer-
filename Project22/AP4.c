#include<stdio.h>
void main() {
	char data[5];
	char* p = data;
	// 1. *p = &*(data + 0);
	// 2. *p = &data[0];
	*(data + 2) = 5;
	p = p + 1;
	data = data + 1;// �Ұ��� �迭�� �ڽſ��� ������ �ּҸ� ������ �� ����.
}