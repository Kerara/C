#include <stdio.h>
#include <Windows.h>

int main_output_input()
{
	//출력문 3가지
	//puchar, puts , printf
	//puchar : 하나의 문자를 화면에 출력한다.
	//putchar('1'); //하나의 숫자, 하나의 문자 가능 하다.

	//puts : 문자열을 화면에 출력하고 줄바꿈을 시키는 명령
	//puts("안녕하세요~");

	//printf :사용자가 만든 형식에 맞춰서 화면에 출력하는 명령
	//printf("형식(포멧)", 적용값1, 적용값2...적용값n);
	//printf("안녕하세요~저는 %s 입니다,나이는 %d세입니다", "홍기동", 20);

	//[입력 서식 : %d , %s , %f, %c , %u]
	// %d = 정수를 입력 받을때
	// %s = 문자열을 입력 받을때
	// %f = 실수를 입력 받을때
	// %c = 문자를 입력 받을때
	// %u = 부호가  없는 정수를 입력 받을때
	//printf(" -19= %d, -19= %u\n", -19, -19);
	//\n = 줄바꿈

	//printf("원주율 %.2f 입니다.", 3.1415);//%f = 기본 소수점 6번째 짜리까지 나온다.
	//%1.2f = 소수점 2자리 이런 식이다.
	//%.2f = %1.2f 같다.
	// printf(" 실수형 테스트 %1.3f ", 3.1416f);
	//1.15 = 반올림이 안되고 6부터 된다고 함

	//입력문 3가지
	// getchar, gets_s ,scanf_s

	//getchar : 입력 문자들주에 맨 하나의 문자를 입력받는 명령
	char buffer[255] = { 0, };
	int num = 0;
	printf(" 입력하세요");
	//putchar(getchar());
	//gets_s : 입력 문자들 전체를 입력받는 명령
	//gets_s(buffer, sizeof(buffer));
	//puts(buffer);

	//scanf_s : 상용자가 만든 형식에 맞춰서 입력문자를 입력받는 명령
	scanf_s(" %s ,%d", buffer, sizeof(buffer), &num);
	printf(" %s ,%d", buffer, num);

	system("pause");
	return 0;
}