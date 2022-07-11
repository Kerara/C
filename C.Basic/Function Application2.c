#include <stdio.h>
#include <Windows.h>
#include <time.h>
//선언부
void CountDown(int count);
void PrintStringCount(const char* str, int cnt);

int main_Fuction_Application2()
{
	srand(time(0));

	//재귀함수
	//함수 냉서 자기자신을 호출하는 함수.
	// void aaa(int bbb)
	// {
	//           명령문들....
	//         aaa(10);
	//}
	//재귀함수는 반복문처럼 처리를 한다.

	//CountDown(5);
	int count = 0;
	char str[10] = { 0, };

	printf(" 어떤 문자열을 출력할까요? : ");
	scanf_s(" %s", str, sizeof(str));
	printf(" 몇번 출력할까요 :");
	scanf_s("%d", &count);

	PrintStringCount(str, count);

	system("pause");
	return 0;

}
//재귀함수는 알고리즘 처리를 할때 많이 사용된다.

//정의부
void PrintStringCount(const char* str, int cnt)
{
	if (cnt <= 0)
	{
		return;
	}
	printf("%s\n", str);
	PrintStringCount(str, cnt - 1);

}
void CountDown(int count)
{
	if (count < 0)
	{
		printf("발싸!!!!");
		return;
	}

	printf("카운트다운 %d초\n", count);
	CountDown(count - 1);
}