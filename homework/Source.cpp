#include<stdio.h>

int main()
{
	int sum = 0;//�z��̒��g�𑫂�������
	int a;//sum�ɔC�ӂ̐�������T�������̂�������
	int b;//�C�ӂ̐����T�Ŋ����ďo���]����������

	int array[5] = { 2, 8, 9, 23, 1 };
	for (int i = 0; i < 5; i++)
	{
		sum += array[i];
	}
	int player = 0;
	scanf_s("%d", &player);

	a = sum*(player / 5);
	b = player % 5;

	for (int j = 0; j < b ; j++)
	{
		a+=array[j] ;
	}

	printf("%d", a);

	return 0;
}