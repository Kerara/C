#include <stdio.h>
#include <Windows.h>

int main_conditional_statement_if()
{
	// 조건문 : 조건의 내용이 참 또는 거짓에 따라 지정 명령을 수행하도록 하는것
	// if , else if , else
	// 사용형식
	// if(조건문)
	//       명령문;
	// else
	//       명령문;

	int number = 0;
	printf("정수를 입력하세요  :");
	scanf_s(" %d", &number);
	if (number % 2 == 1)
	{
		printf("입력수 %d은(는) 홀수입니다.\n", number);
		printf(" 우와 ~~홀수다 \n");
	}
	// 중괄호는 한묶음으로 인식한다.
	else if (number == 0)
		printf("입력수 %d은(는) 0입니다.\n", number);
	//중괄호 쓰지 않으면 두개 이상 쓸수 없다.
	else
		printf("입력수 %d은(는) 짝수입니다.\n", number);
	//[ 조건문의 사용에 있어서 유의해야 하는 상항]
	// 조건문은 조건을 체크하는 순서가 있기 때문에
	// 어는 조건을 먼저 체크해야 하는가를 잘 판단해야 한다.

	system("pause");
	return 0;
}