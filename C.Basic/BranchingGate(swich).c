#include <stdio.h>
#include <Windows.h>

int main_BranchingGate_swich()
{
	// �б⹮ 
	// swich ,case ,break

	// ������ ������ �޾Ƽ� ����� �˷��ִ� ���α׷� ����ϴ�.
	// 90 ~100 A
	// 80 ~ 89 B
	// 70 ~ 79 C
	// 60 ~ 69 D
	// 60�̸� F
	// swich(����)

	/*int score = 0;
	printf("����� ������ �Է��� �ּ��� :");
	scanf_s("%d", &score);*/

	/*if (score >= 90 && score <= 100)
	{
		printf("����� ���� %d ���� A����Դϴ�.\n", score);
	}
	else if (score >= 80 && score <= 89)
	{
		printf("����� ���� %d ���� B����Դϴ�.\n", score);
	}
	else if (score >= 70 && score <= 79)
	{
		printf("����� ���� %d ���� C����Դϴ�.\n", score);
	}
	else if (score >= 60&& score <= 69)
	{
		printf("����� ���� %d ���� D����Դϴ�.\n", score);
	}
	else
	{
		printf("����� ���� %d ���� F����Դϴ�.\n", score);
	}*/

	//�б⹮�� ������ �ƴ�, ������ ����� ���� ����� �����Ϸ� �� �� ����Ѵ�.

	/*switch (score / 10)
	{
	case 10:
	case 9:
		printf("����� ���� %d ���� A����Դϴ�.\n", score);
		break;
	case 8:
		printf("����� ���� %d ���� B����Դϴ�.\n", score);
		break;
	case 7:
		printf("����� ���� %d ���� C����Դϴ�.\n", score);
		break;
	case 6:
		printf("����� ���� %d ���� D����Դϴ�.\n", score);
		break;
	default:
		printf("����� ���� %d ���� F����Դϴ�.\n", score);
		break;
	}*/
	// ������ ��� �� ��ο� ���� case�� ���� �ʿ�� ����.
	// Ư�� ����� �Ͼ�� �� ����� ������ ���� �ִٸ�,
	// �� ����� case�� ������ �ȴ�.

	int number = 0;
	printf(" �ƹ� ������ �Է��ϼ��� :");
	scanf_s(" %d", &number);

	switch (number)
	{
	case 100:
		printf(" ���� ������ �ְ� �� �Դϴ�.\n");
		break;
	case 0:
		printf(" ���� ������ ���� �� �Դϴ�.\n");
		break;
	default:
		printf("�� �𸣴� �� �Դϴ�.\n");
		break;
	}
	// ������ ����Ѵٰ� �ؼ� �� ���� �־�� �ϴ� ���� �ƴϴ�.
	// ���� �����ϴ� �����̸� ��� ��� ����

	system("pause");
	return 0;
}