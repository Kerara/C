#include <stdio.h>
#include <windows.h>
#include<time.h>

typedef struct Train
{
	int number;
	int inwon;
	struct Train* forword;
	struct Train* backword;
}_TRAIN, * _LPTRAIN;


int main_self()
{
	srand(time(0));
	//����ü
	// �ڱ� �ڽ��� ����ü�� �����͸� ������ ����ü
	// struct ����ü �ڷ���
	//{
	//		�ʵ��;
	//		struct ����ü�ڷ���* ������;
	//};
	// �ڱ� ���� ����ü�� Linked Listó�� �ڷ��� ������ ����� ���¿� ���� ���δ�.

	int cnt = 0;
	_LPTRAIN pTrain = 0;

	_TRAIN train1, train2, train3;
	train1.number = 1;
	train1.inwon = 10;

	train2.number = 2;
	train2.inwon = 30;

	train3.number = 3;
	train3.inwon = 7;

	//3->1->2->3
	train3.forword = &train2;
	train3.backword = &train1;
	train1.forword = &train3;
	train1.backword = &train2;
	train2.forword = &train1;
	train2.backword = &train3;

	//printf("%d�� ������ ��ĭ�� %d�� ��â�̴�,\n", train1.number, train1.backword->number);
	//2�� �������� �ڷ� 5������ ����� ���ϱ��?

	cnt = 5;
	pTrain = &train2;
	while (cnt-- > 0)
	{
		pTrain = pTrain->backword;
	}
	printf("2�� �������� �ڷ� 5������ %d�������̴�.\n", pTrain->number);





	system("pause");
	return 0;
}