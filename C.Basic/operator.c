#include <stdio.h>
#include <Windows.h>

int main_operator()
{
	////연산자는 산술,증감,관계,논리 ,조건,비트 대입 연산들이있다.
	//// 산술연산자. : 두개의 값을 산술적 연산을 하는것
	//// + , - , *, / , %
	//int su1 = 1;
	//int su2 = 4;
	//printf(" %d + %d =%d\n", su1, su2, su1 + su2);
	//printf(" %d - %d =%d\n", su1, su2, su1 - su2);
	//printf(" %d * %d =%d\n", su1, su2, su1 * su2);
	//printf(" %d / %d =%d\n", su1, su2, su1 / su2); 
	//// 모든 산술 연산에서 정수형끼리의 연사은 정수로 답이 나온다.
	//// 그리고, 정수와 실수 , 실수와 실수의 연산은 실수가 답으로 나온다.
	//printf(" %d %% %d = %d\n", su1, su2, su1 % su2);// %하나를 쓰면 서식문자로 입력해 , %%로 두개로 쓴다.
	////[%연산의 특징 : 결과값이 0부터(우항의 값-1)안에서 나온다.]

	// 증감연산자.
	// ++, --
	//int su = 10;
	//printf("su = %d\n", su);
	////su++;
	//printf("su = %d\n", ++su);//++ 먼저 실행 11됨
	////++su;
	//printf("su = %d\n", su++);//su가 먼저 실행 ++ 다음에
	//printf("su = %d\n", su);
	// [증감 연산자 : 연산자가 값의 앞과 뒤 중 어디에 붙는가에 따라 연산 순서가 달라진다.]


	// 관계연산자.: 관계 연산의 결과는 참(1), 거짓(0)으로 나온다.
	// <,>,<=,>=, == ,!=
	//// 참은 1이고 거짓은 0이다.
	//int num1 = 15;
	//int num2 = 7;
	//printf(" %d > %d = %d\n", num1, num2, num1 > num2);

	// 논리연산자.: 논리 연산은 연산하는 값이 논리값(참,거짓값)이어야 한다.
	//&&,||,!
	//and, or, not
	//[논리 연산자 : and(&&)논리곱, or(||)논리합, nor(!)부정 3가지]
	// 1 not = 0;
	// 0 not = 1;
	//printf(" !1 = %d\n",!1);

	//일반적으로 논리 연산은 관계연산 함꼐 사용하는 경우가 많다.

	int num = 13;
	printf(" %d는 10이 넘고 짝수인가 = %d\n", num, (num >= 10 && (num % 2 == 0)));

	system("pause");
	return 0;
}