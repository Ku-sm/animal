#include <stdio.h>

int main() {

	char animal[5][80] = {0};
	int i;
	float sum = 0, result =0;

	for (i = 0; i < 5; i++) {
		printf("input: ");
		gets_s(animal[i], sizeof(animal[i]));
	}


	for (i = 0; i < 5; i++) {
		sum += sizeof(animal[i]);
	}
	result = sum / 4;

	for (i = 0; i < 5; i++) {
		printf("����: %s\n", animal[i]);
	}
	printf("��ü ����Ʈ:400, ���� ����Ʈ: %f, ������: %f", &sum, &result);

}