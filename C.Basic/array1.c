#include <stdio.h>
#include <Windows.h>
#include <time.h>
enum eType
{
	전사 = 0,
	마법사,
	사제,
	사냥꾼,

	최대직업수,
};
int main_arry1()
{
	srand(time(0));
	// 배열 : 배열을 사용하는 이유는 일괄처리를 할 수 있기 때문이다.
	// 같은 자료형의 집합
	// 자료형 배열명[개수];

	//int cnt = 5;
	//int su[cnt]; // 불가능
	//int su[5];//대괄호 안에 변수는 들어갈 수 없고 상수만 가능한다.

	//int su[최대직업수] = { 1 ,2  ,3 ,4 };//열거형은 가능하다.
	////int su[] = { 1 ,2  ,3 ,4,5,6 };
	//int n = 0;
	//int cnt = sizeof(su) / sizeof(int);
	//for (n = 0; n < cnt; n++)
	//	printf("su[%d] = %d\n", n, su[n]);


	/*int n = 0;
	for (n = 0; n < 10; n++)
	{
		printf("value = %d\n", rand());
	}*/
	system("pause");
	return 0;
}