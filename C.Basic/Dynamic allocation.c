#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main_Dynmic_allocaton()
{
	srand(time(0));

	// 동적할당 ,해지
	// 할당 malloc , calloc
	// 해지 free
	// 사용 형식
	// 주소 변수 = (자료형 *) malloc(크키)
	// 주소 변수 = (자료형*) calloc(개수 , 크기)
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
	// 동적 할당을 했다면 꼭 해지를 해줘야 한다.
	// 까먹지 않게 할당과 해지 코드를 만든후 다른 코드를 만들자.
	// 일반적으로 calloc과 malloc을 구분해서 쓰는 경우 보다 
	// malloc으로 전체 크기를 할당해서 사용하는 경우가 많다.
	system("pause");
	return 0;
}
