#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main_Dynmic_allocaton()
{
	srand(time(0));

	// �����Ҵ� ,����
	// �Ҵ� malloc , calloc
	// ���� free
	// ��� ����
	// �ּ� ���� = (�ڷ��� *) malloc(ũŰ)
	// �ּ� ���� = (�ڷ���*) callco(���� , ũ��)
	//int num = 10;
	//int* psu = (int*)malloc(sizeof(int));
	//*psu = 100;

	//int* psu = (int*)calloc(4, sizeof(int));
	//int n;
	//for (n = 0; n < 4; n++)
	//	psu[n] = n + 11;
	//for (n = 0; n < 4; n++)
	//	printf(" psu[%d] = %d\n", n, psu[n]);


	//printf(" num = %d, *psu = %d\n", num, *psu);
	int* psu = (int*)malloc(4 * sizeof(int));
	int n;
	for (n = 0; n < 4; n++)
		*(psu + n) = n + 11;
	//psu[n] = n + 11;
	for (n = 0; n < 4; n++)
		printf(" psu[%d] = %d\n", n, psu[n]);
	free(psu);
	// ���� �Ҵ��� �ߴٸ� �� ������ ����� �Ѵ�.
	// ����� �ʰ� �Ҵ�� ���� �ڵ带 ������ �ٸ� �ڵ带 ������.
	// �Ϲ������� calloc�� malloc�� �����ؼ� ���� ��� ���� 
	// malloc���� ��ü ũ�⸦ �Ҵ��ؼ� ����ϴ� ��찡 ����.
	system("pause");
	return 0;
}