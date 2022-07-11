#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main_arrays_pointer()
{
	srand(time(0));


	//int arr[5] = { 11, 22 ,33 ,44, 55 };
	//printf("arr[0] addr = %u\n", &arr[0]);
	//printf(" arr = %u\n", arr);


	/*char* name = "my name is will";
	int count = 0;
	printf(" name = %u\n", name);
	while (name[count] != '\0')
	{
		char ch = name[count];
		putchar(ch);
		count++;
	}
	printf("\count = %d\n", count);
	printf("\ncount = %d\n", strlen(name));*/


	//문자열은 결국 문자의 집합체이다만 배열의 마지막 구분을 
	//'\0'(널)문자로 구별한다는 점을 기억하자

	/*int* arr[3] = { 0, };
	int cnt[3] = { 4,6,3 };
	int n, m;
	for (n = 0; n < 3; n++)
		arr[n] = (int*)malloc(cnt[n] * sizeof(int));
	for (n = 0; n < 3; n++)
		for (m = 0; m < cnt[n]; m++)
			arr[n][m] = rand() % 51 + 50;
	for (n = 0; n < 3; n++)
	{
		for (m = 0; m < cnt[n]; m++)
			printf(" arr[%d][%d]= %d\n", n, m, arr[n][m]);
		printf(" ======================\n");
	}
	for (n = 0; n < 3; n++)
		free(arr[n]);*/

		// 몬스터들이 있습니다.
		// 몇마리를 생성할까요?
		//int* monster = 0;
		//int n, count = 0;
		//printf(" 몇 마리의 몬스터를 만드시겠습니까? : ");
		//scanf(" %d", &count);
		////monster = (int*)malloc(count * sizeof(int));
		//free(monster);

		/*int** arrSecond = 0;
		int n;
		if (arrSecond == 0)
		{
			arrSecond = (int**)malloc(2 * sizeof(int*));
			for (n = 0; n < 2; n++)
				arrSecond[n] = (int*)malloc(4 * sizeof(int));
		}
		if (arrSecond != 0)
		{
			for (n = 0; n < 2; n++)
				free(arrSecond[n]);
			free(arrSecond);
		}*/
		//동적 할당을 하기 위한 주소변수는 꼭 0 으로 초기화를 해주는 버릇을 가지자

	int arr[3] = { 1,2,3 };
	int* pArr = (int*)malloc(3 * sizeof(int));

	printf(" arr = %u , arr addr = %u\n", arr, &arr);
	printf(" ================================\n");
	printf(" pArr = %u , pArr addr = %u\n", pArr, &pArr);
	system("pause");
	return 0;
}