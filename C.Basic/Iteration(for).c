#include <stdio.h>
#include <Windows.h>

int main_lteration_for()
{
	//for ���� ��ȣ�ȿ� �� 3���� ���� �־���Ѵ�.
	//for (�ʱ�ȭ ; ���ǽ�; ������)
	// ��ɹ� ;

	/*int n, count = 5;
	for (n = 1; n <= count; n++)
	{
		printf("n = %d\n", n);
	}*/

	/*int start = 0, end = 0;
	int n;
	printf("ȭ�鿡 ���ۺ��� ������ ���ڸ� ����Ϸ��� �մϴ�.\n");
	printf(" ���� ���ڸ� �Է��ϼ��� :");
	scanf_s(" %d", &start);
	printf(" �� ���ڸ� �Է��ϼ��� : ");
	scanf_s(" %d", &end);
	for (n = start; n < end; n++)
	{
		printf(" %d", n);
	}
	printf("\n");*/

	// break���� continue���� �Ϲ������� �ݺ������� ���ȴ�.
	//break, continue
	// break Ű����� �ݺ����� ������ Ż���ϰ� ���� �� ����Ѵ�.

	//int n = 0;
	//for (; n < 10; n++)
	//{
	//	if (n == 6)
	//	{
	//		break;
	//	}
	//	printf("n = %d\n", n);
	//}

	//continue Ű���� �ݺ������� ���� �ݺ��� �ǳʵ� �� ����Ѵ�.

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