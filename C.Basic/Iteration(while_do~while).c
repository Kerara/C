#include <stdio.h>
#include <Windows.h>

int main_Iteration_while_do_while()
{
	// 반복문 : 일반적으로 반복문은 조건이 참인 동안에 명령을 수행하는 명령이다.
	// while , do while,for,goto
	// while(조건식)
	//  명령문;

	//int count = 5;
	//while (count-- > 0)
	//{
	//	//count--;
	//	printf("카운트 다운 %d!!\n", count);
	//	//count--;
	//}
	//printf(" 발~~사 ~~ !! \n");
	//while문에서 조건의 변화를 주는 연산이 어디에 있는가에 따라 
	//결과와 반복 횟수가 달라질 수 있으니 염두해 두고 코드를 만들어야 한다.

	/*int count = 0 , total = 0;
	int number = 0;
	printf(" 몇개의 수를 입력하시겠습니까 :");
	scanf_s(" %d\n", &count);
	while (count-- > 0)
	{
		printf("정수를 입력하세요 :");
		scanf_s(" %d", &number);
		total += number;
	}
	printf(" 입력하신 정수들의 합은 %d입니다. \n", total);
*/

//do
//{
//     명령문 ;
//}while(조건식);

/*int count = 5;
do
{
	printf("카운트 다운 %d!!!\n",count );
	--count;
} while (count > 0);
printf("발~사!!!");*/
//do while문은 명령을 한번은 꼭 수행한다.

	system("pause");
	return 0;
}