// �����͸� ����Ͽ� �迭�� �� ��ҿ� ����� �� �ջ��ϱ�

#include<stdio.h>
void main() {
	char data[5] = { 1,2,3,4,5 };
	int result = 0; 
	char* p = data;
	for (int i = 0; i < 5; i++) {
		result = result + *p;
		p++;
	}
	printf("data �迭�� �� ����� ���� %d �Դϴ�.\n", result);
}