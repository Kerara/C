#include <stdio.h>
#include <Windows.h>

//밖 = 전역변수
//enum 열거형 자료형명
//{
//	자료값1,
//	자료값2,
//	......
//	자료값n,
//};

enum e과목
{
	국어 = 10,
	영어,
	수학 = 100,
	과학,

};
// 국어 = 10, 영어 = 11, 수학== 100, 과학= 101,
//100을 제외시키면 10,11,12,13으로 된다.

int main_Datatypes()
{
	//안 = 지역변수
	// : 주석 = 프로그램머가 코딩의 편의를 위해 사용하는 메모장
	/* 주석 */

	// 자료형은 변수와 상수로 나누어진다.
	/*printf("1 +1 = %d\n", 1 + 1);*/
	// 변수는 값을 저장하는 공간
	// 자료형 키워드 변수명;
	// 정수형 , 문자형, 실수형 ,열거형
	// 정수형(int)
	// 문자형 (char)
	// 실수형 (float)
	// 열거혀 (enum)

	//int number = 10;	// 변수 선언.
	//int su = 10;	//변수 선언과 초기화

	//printf(" number = %d, su = %d\n", number, su);
	//지역변수의 경우, 변수에 값이 들어가는 행위가 일어나지 않으면 
	//메모리상에 변수의 장소가 만들어지지 않는다.



	/*
	char charac = 'a';
	printf("charac = %c\n", charac);*/

	//아스키코드 프로그램에서 초기에는 숫자만 인식했지만 아시스키 코드를 통해서 숫자 = 문자 되엇다.

	/*float fNum = 3.14f;
	printf("fNum = %1.2f\n", fNum);*/
	//값 뒤에 f를 붙이지 않으면 컴파일러는 해당 값이 double형 자료라고 생각한다.

	//char* name = "홍길동";
	//char buffer[] = "김철수";
	////* 문자형을 보관하는
	//printf("name = %s\nbuffer = %s\n", name,buffer);

	enum e과목 subject = 국어;
	printf(" subject = %d\n", subject);
	enum e과목 subject2 = 영어;
	printf(" subject2 = %d\n", subject2);
	enum e과목 subject3 = 수학;
	printf(" subject3 = %d\n ", subject3);
	enum e과목 subject4 = 과학;
	printf(" subject4 = %d\n", subject4);
	system("pause");

	return 0;
}