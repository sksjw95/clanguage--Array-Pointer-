// 포인터로 배열의 주소를 저장하여 사용하기
#include <stdio.h>
void main() {
	char data[5] = { 1,2,3,4,5 };
	int i, sum = 0, select = 2;
	char* p = data + select;
	// *p = data + 2;
	// *p = &(data + 2);
	// *p = &data[2];
	for (i = 0; i < 10; i++) {
		//sum = sum + data[select];
		//sum = sum + *(data + select);
		sum = sum + *p;
	}
	printf("%d", sum);
}