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
	//구조체
	// 자기 자신의 구조체의 포인터를 가지는 구조체
	// struct 구조체 자료형
	//{
	//		필드들;
	//		struct 구조체자료형* 변수명;
	//};
	// 자기 참조 구조체는 Linked List처럼 자료의 구조를 만드는 형태에 많이 쓰인다.

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

	//printf("%d번 열차의 뒤칸은 %d번 열창이다,\n", train1.number, train1.backword->number);
	//2번 열차에서 뒤로 5번가면 몇번열 차일까요?

	cnt = 5;
	pTrain = &train2;
	while (cnt-- > 0)
	{
		pTrain = pTrain->backword;
	}
	printf("2번 열차에서 뒤로 5번가면 %d번열차이다.\n", pTrain->number);





	system("pause");
	return 0;
}