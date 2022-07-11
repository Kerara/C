#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main_arry2()
{
	srand(time(0));
	// 다차원 배열.
	// 1차원 배열을 제외한 2,3.... 차원 배열을 말합니다.
	// 2차원 배열은
	// 자료형 배열명[행(세로방향:y)] [열(가로방향:x)]
	// 3차원 배열은
	// 자료형 배열명[면(깊이방향:z)][행(세로방향:y] [열(가로방향:x)]

	// 논리적으로 다차원 배열을 면, 행, 열등의 형태로 생각하고 있지만,
	// 물리적으로는 일렬로 정보는 메모리상에 존재하고 있다.


	//int num[3];
	//// ㅁ ㅁ ㅁ
	//int num[3][5];
	//// ㅁㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁㅁ

	//int num[2][3][4];
	//// ㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁ

	//// ㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁ
	//// ㅁㅁㅁㅁ


	/*int arr[5][5];
	int value = 1,x,y;
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			arr[y][x] = value++;
		}
	}
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			printf("arr[%d][%d] = %d", y, x, arr[y][x]);
		}
		printf("\n");
	}*/

	//1학년에는 4개의 반이 있고, 한반에 10명의 학생들이 있다.
	// 각 반의 학생들의 점수를 임의로 저장하고(45~100) 각 반의 평균을 출력하라.
	//int n, m, total =0;
	//int studentScore[4][10] = { 0, };
	//float classAverage[4] = { 0 };  //각 반의 평균을 저장할 변수.
	//
	//for (n = 0; n < 4; n++)
	//{
	//	total = 0;
	//	for (m = 0; m < 10; m++)
	//	{
	//		int score = rand() % 56 +45;
	//		studentScore[n][m] = score;
	//		total += score;
	//	}
	//	classAverage[n] = (float)total / 10; //정수끼리의 연산은 정수가 나온다.(실수가 결과로 나오도록 바꾼다.)
	//}

	//for (n = 0; n < 4; n++)
	//{
	//	printf("%d반의 평균은 %1.1f점입니다.\n", n + 1, classAverage[n]);
	//}


	system("pause");
	return 0;
}