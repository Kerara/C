//프로그래밍 언어란?
//사실 프로그래밍 언어는 일반적으로 '언어를 배운다' 

//C언어란?
//언어들 중에서도 OS를 개발하기 위해서 만들어진 언어

//OS? => windows,ios ,안드로이드 ,리눅스 , 유닉스 운영체제
//컴퓨터를 구동시키기 위한 프로그래밍 

//세미콜론 -> ;
//세미콜론 : 마지막 문장을 멈춘다 끝냈겠다.

#include <stdio.h> //include = 포함한다. // stdio.h : 기본 함수의 pritf, scanf_s 등의 포함 되어 있다.
#include <Windows.h> //include = 포함한다. 
// Windows .h :  //콘솔화면 초기화 <windows.h> 헤더파일의 system ()함수를 이용하면 윈도우의 명령프롬프트 (cmd) 명령어를 사용 할 수 있습니다

int main()
{
	printf(" 안녕 하십니까?");

	system("pause");//pause = 멈춘다.
	return 0;
}