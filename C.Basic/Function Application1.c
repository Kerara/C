#include <stdio.h>
#include <Windows.h>
#include <time.h>

//선언부
void ChangeNumber(int* num);
void SwapInt(int* num1, int* num2);
void PrintArrayElements(int* arr, int count);

int main_Function_Application1()
{
	srand(time(0));

	//주소변수를 매개 변수로 사용하는 함수,
	//반환형 함수명 (매개 변수자료형* 매개변수명...);

	/*int number = 10;
	printf("number = %d\n", number);
	ChangeNumber(&number);
	printf("number = %d\n", number);*/

	//int su1 = 9;
	//int su2 = 14;
	//int temp = 0;
	//printf("su1 = %d, su2 = %d\n", su1, su2);
	///*temp = su1;
	//su1 = su2;
	//su2 = temp;*/
	//SwapInt(&su1, &su2);
	//printf(" su1 = %d, su2 = %d\n", su1, su2);

	int arr[5] = { 11,22,33,44,55, };
	PrintArrayElements(arr, 5);

	system("pause");
	return 0;

}

//정의부
void PrintArrayElements(int* arr, int count)
{
	int n = 0;
	for (; n < count; n++)
	{
		printf("arr[%d] = %d\n", n, arr[n]);
	}
}
void SwapInt(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}
void ChangeNumber(int* num)
{
	printf(" num = %d\n", *num);
	*num = 100;
	printf(" num = %d\n", *num);
}
//매개 변수의 주솔변수 사용은 보통 외부의 값을 제외하기  위해서 사용한다.