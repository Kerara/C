#include <stdio.h>
#include <Windows.h>

int main_lteration_for()
{
	//for 문은 괄호안에 꼭 3개의 식을 넣어야한다.
	//for (초기화 ; 조건식; 증감식)
	// 명령문 ;

	/*int n, count = 5;
	for (n = 1; n <= count; n++)
	{
		printf("n = %d\n", n);
	}*/

	/*int start = 0, end = 0;
	int n;
	printf("화면에 시작부터 끝까지 숫자를 출력하려고 합니다.\n");
	printf(" 시작 숫자를 입력하세요 :");
	scanf_s(" %d", &start);
	printf(" 끝 숫자를 입력하세요 : ");
	scanf_s(" %d", &end);
	for (n = start; n < end; n++)
	{
		printf(" %d", n);
	}
	printf("\n");*/

	// break문과 continue문은 일반적으로 반복문에서 사용된다.
	//break, continue
	// break 키워드는 반복문을 강제로 탈출하고 싶을 때 사용한다.

	//int n = 0;
	//for (; n < 10; n++)
	//{
	//	if (n == 6)
	//	{
	//		break;
	//	}
	//	printf("n = %d\n", n);
	//}

	//continue 키워드 반복문에서 현재 반복을 건너뒬 때 사용한다.

	/*int n = 0;
	for (; n < 10; n++)
	{
		if (n % 2 == 1)
		{
			continue;
		}
		printf("n = %d\n", n);
	}*/

	int left = 2;
	int right = 1;

	while (left < 10)
	{
		/*right = 1;
		while (right < 10)*/
		for (right = 1; right < 10; right++)
		{
			printf("%d * %d = %d\n", left, right, left * right);
			//right++;
		}
		printf("\n");
		left++;
	}
	system("pause");
	return 0;
}