#include <stdio.h>
#include <Windows.h>
#include <time.h>
//�����
void CountDown(int count);
void PrintStringCount(const char* str, int cnt);

int main_Fuction_Application2()
{
	srand(time(0));

	//����Լ�
	//�Լ� �ü� �ڱ��ڽ��� ȣ���ϴ� �Լ�.
	// void aaa(int bbb)
	// {
	//           ��ɹ���....
	//         aaa(10);
	//}
	//����Լ��� �ݺ���ó�� ó���� �Ѵ�.

	//CountDown(5);
	int count = 0;
	char str[10] = { 0, };

	printf(" � ���ڿ��� ����ұ��? : ");
	scanf_s(" %s", str, sizeof(str));
	printf(" ��� ����ұ�� :");
	scanf_s("%d", &count);

	PrintStringCount(str, count);

	system("pause");
	return 0;

}
//����Լ��� �˰��� ó���� �Ҷ� ���� ���ȴ�.

//���Ǻ�
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
		printf("�߽�!!!!");
		return;
	}

	printf("ī��Ʈ�ٿ� %d��\n", count);
	CountDown(count - 1);
}