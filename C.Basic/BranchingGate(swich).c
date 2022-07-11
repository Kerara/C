#include <stdio.h>
#include <Windows.h>

int main_BranchingGate_swich()
{
	// 분기문 
	// swich ,case ,break

	// 본인의 점수를 받아서 등급을 알려주는 프로그램 만듭니다.
	// 90 ~100 A
	// 80 ~ 89 B
	// 70 ~ 79 C
	// 60 ~ 69 D
	// 60미만 F
	// swich(수식)

	/*int score = 0;
	printf("당신의 점수를 입력해 주세요 :");
	scanf_s("%d", &score);*/

	/*if (score >= 90 && score <= 100)
	{
		printf("당신의 점수 %d 점은 A등급입니다.\n", score);
	}
	else if (score >= 80 && score <= 89)
	{
		printf("당신의 점수 %d 점은 B등급입니다.\n", score);
	}
	else if (score >= 70 && score <= 79)
	{
		printf("당신의 점수 %d 점은 C등급입니다.\n", score);
	}
	else if (score >= 60&& score <= 69)
	{
		printf("당신의 점수 %d 점은 D등급입니다.\n", score);
	}
	else
	{
		printf("당신의 점수 %d 점은 F등급입니다.\n", score);
	}*/

	//분기문은 조건이 아닌, 수식의 결과에 따라 명령을 수행하려 할 때 사용한다.

	/*switch (score / 10)
	{
	case 10:
	case 9:
		printf("당신의 점수 %d 점은 A등급입니다.\n", score);
		break;
	case 8:
		printf("당신의 점수 %d 점은 B등급입니다.\n", score);
		break;
	case 7:
		printf("당신의 점수 %d 점은 C등급입니다.\n", score);
		break;
	case 6:
		printf("당신의 점수 %d 점은 D등급입니다.\n", score);
		break;
	default:
		printf("당신의 점수 %d 점은 F등급입니다.\n", score);
		break;
	}*/
	// 수식의 결과 값 모두에 대해 case를 만들 필요는 없다.
	// 특정 결과가 일어났을 때 명령을 수행할 것이 있다면,
	// 그 결과의 case만 있으면 된다.

	int number = 0;
	printf(" 아무 정수를 입력하세요 :");
	scanf_s(" %d", &number);

	switch (number)
	{
	case 100:
		printf(" 내가 생각한 최고 수 입니다.\n");
		break;
	case 0:
		printf(" 내가 생각한 최저 수 입니다.\n");
		break;
	default:
		printf("잘 모르는 수 입니다.\n");
		break;
	}
	// 수식을 사용한다고 해서 꼭 식이 있어야 하는 것은 아니다.
	// 값이 존재하는 형태이면 모두 사용 가능

	system("pause");
	return 0;
}