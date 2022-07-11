#include <stdio.h>
#include <Windows.h>
#include <time.h>
//선언부
int GetInputInteger(const char* dialog);
int main_the_purpose_of_the_function()
{
	srand(time(0));

	//printf("안녕 세상 ~\n");
	//int printf(const char* format[,arrgument]...);
	//반환형 함수명(매개변수자료형 매개 변수명, ....)
	//함수는 코드의 재사용을 위해서 또는 코드의  가독성을 위해서 만든다.
	//{
	//                  //명령들...
	//            //return(자료);
	//}
	int num = 10;
	int su1, su2;

	const int* pNum = &num;
	int* const pn = &num;
	/*printf(" 첫번째 정수를 입력하세요 :");
	scanf_s(" %d", &su1);
	printf(" 두번째 정수를 입력하세요 :");
	scanf_s(" %d", &su2);*/
	su1 = GetInputInteger("첫 번째 정수를 입력하세요 :");
	su2 = GetInputInteger("두 번재 정수를 입력하세요 :");

	printf(" su1 [%d] * su2[%d] = %d\n", su1, su2, su1 * su2);

	/*pNum = &su1;
	*pnum = 100;
	pn = &su1;
	*pn = 100;*/

	system("pause");
	return 0;
}
//정의부
int GetInputInteger(const char* dialog)
{
	int su = 0;

	printf(dialog);
	scanf_s(" %d", &su);
	return su;
}