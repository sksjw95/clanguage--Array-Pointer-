// 포인터를 사용하여 배열의 각 요소에 저장된 값 합산하기

#include<stdio.h>
void main() {
	char data[5] = { 1,2,3,4,5 };
	int result = 0; 
	char* p = data;
	for (int i = 0; i < 5; i++) {
		result = result + *p;
		p++;
	}
	printf("data 배열의 각 요소의 합은 %d 입니다.\n", result);
}