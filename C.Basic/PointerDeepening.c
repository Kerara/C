#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main_Pointer_Deepening()
{
	srand(time(0));

	//���� ������
	//*�� �������� ��츦 �ǹ��Ѵ�.
	//�ڷ��� ** ������     ===> 2������
	//�ڷ��� *** ������   ===>3������
	//�ּҺ����� �ڷ������� �ϴ� �ּҺ���
	//(�ڷ���*) * ������
	//(�ڷ���) * ������
	//((�ڷ���*)*) * ������
	//(�ڷ���)* ������
	//���� �������� ������ �ᱹ �ڷ��� * �ּҺ����� �̶�� �� �� �ִ�.

	/*int su = 1234;
	int* psu = &su;
	int** ppsu = &psu;
	printf(" su = %d , psu = %u , ppsu = %u\n", su, psu, ppsu);
	printf(" su = %d , psu = %u , *ppsu = %u\n", su, psu, *ppsu);*/
	//printf(" su size = %d, psu size = %d , ppsu size = %d\n", sizeof(su),sizeof(psu), sizeof(ppsu));


	int arr[2][4] = { { 11,22,33,44 },{ 55,66,77,88 } };
	int n, m;
	//int** pArr = arr;
	for (n = 0; n < 2; n++)
	{
		int* pArr = &arr + n;
		for (m = 0; m < 4; m++)
		{
			int* psu = &pArr + m;

			printf(" * psu = %d, arr[%d][%d] = %d\n", *psu, n, m, arr[n][m]);
		}
	}



	system("pause");
	return 0;

}