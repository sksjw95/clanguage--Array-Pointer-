// 배열을 기준으로 포인터와 합체하기
#include<stdio.h>
void main() {
	char data1, data2, data3, data4, data5;
	char* p[5] = { &data1,&data2,&data3,&data4,&data5 };
	for (int i = 0; i < 5; i++) {
		*p[i] = 0;
		printf("%d", *p[i]);
	}
	// char *p[5] = char *p1,*p2,*p3,*p4,*p5;
	// *p[0] = data1, *p[1] = data2, *p[2] = data3, *p[3] = data4, *p[4] = data5;
	// p[0] = &data1, p[1] = &data2, p[2] = &data3, p[3] = &data4, p[4] = &data5;
}