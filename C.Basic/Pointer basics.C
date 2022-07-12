#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main_pPointer_basics()
{
	srand(time(0));

	//포인터(주소)
	// 자료형* 변수명 ==> 포인터 변수
	// 자료형뒤에*이 붙으면 무조건 포인터 변수가 된다.

	int* pInt = 0;
	char* pchar = 0;
	float* pFlaot = 0;
	int number = 100;
	char ch = 'z';
	pInt = &number;
	pchar = &ch;

	//printf(" pInt = %u, number addr = %u\n", pInt, &number);
	//printf(" *pInt = %u, number addr = %u\n", *pInt, number); //주소 변수 앞에*을 붙이면 해당 주소 자체를 의미한다.
	//printf(" pInt add = %u\n", &pInt);
	// // *pInt == number
	//*pInt = 33;   //number =33;
	//printf(" number = %d\n", number);

	printf("pInt = %u, pInt +1 = %u, pInt +2 = %u", pInt, pInt + 1, pInt + 2);
	printf("pchar = %u, pchar +1 = %u, pchar +2 = %u", pchar, pchar + 1, pchar + 2);

	/*printf("int size = %u, int point size = %u\n", sizeof(int), sizeof(int*));
	printf("char size = %u, char point size = %u\n", sizeof(char), sizeof(char*));
	printf("float size = %u, float point size = %u\n", sizeof(float), sizeof(float*));*/
	//주소 변수는 메모리 주소를 저장하도록 만드는 것이다.

	system("pause");
	return 0;
}
