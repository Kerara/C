#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main_Pointer_Deepening()
{
	srand(time(0));

	//다중 포인터
	//*이 여러개인 경우를 의미한다.
	//자료형 ** 변수명     ===> 2포인터
	//자료형 *** 변수명   ===>3포인터
	//주소변수를 자료형으로 하는 주소변수
	//(자료형*) * 변수명
	//(자료형) * 변수명
	//((자료형*)*) * 변수명
	//(자료형)* 변수명
	//다중 포인터의 선언은 결국 자료형 * 주소변수명 이라고 할 수 있다.

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