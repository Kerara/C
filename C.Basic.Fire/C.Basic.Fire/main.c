#include <stdio.h>
#include<time.h>
#include <Windows.h>

int main()
{
	srand(time(0));

	//파일 입출력
	// FILE구조체의 주소형 변수를 만들어 쓴다.
	// fopen_s(&파일포인터, 파일의 위치와 이름 ,키워드"r"or"w"or"a");
	// fclose(파일포인터);
	// fputc, fput ,fprintf
	// fgetc, fgets_s, fscanf_s
	// SEEK_SET, SEEK_CUR, SEEK_END
	FILE* pf = 0;
	char szBuffer[260] = { 0, };
	int age = 0;
	int isAgain = 1;
	int cnt = 0;

	fopen_s(&pf, "test.txt", "rt+");
	if (pf !=0)
	{
		while (feof(pf==0))
		{
		/*	putchar(fgetc(pf));
			fgets(szBuffer, sizeof(szBuffer), pf);
			printf(szBuffer);*/
			fscanf_s(pf, "%s, %d", szBuffer, sizeof(szBuffer), &age);
			printf("%s %d\n", szBuffer, age);
			cnt++;
			if (cnt == 3)
			{
				if (isAgain)
				{
					fseek(pf, 0, SEEK_SET);
					isAgain = 0;
					cnt = 0;

				}
			}
			
		}
			fclose(pf);
	}
	//fopen_s(&pf, "test.txt", "wt");

	
	/*fputc('h', pf);
	fputc('e', pf);
	fputc('l', pf);
	fputc('l', pf);
	fputc('o', pf);
	fputc('\n', pf);
	fputc('b', pf);
	fputc('y', pf);
	fputc('e', pf);*/

	/*fputs("안녕하세요~", pf);
	fputs("c언어 재미없죠? ", pf);*/
	
	////fputs("\n추가추가,pf);
	//fprintf(pf, "내 이름은 %s!! 정말멋지지!\n 나이는 %d이야", "홍길동", 19);
	////파일 출력 명령 함수는 파일에 정보를 쓰는 함수이다.
	//fclose(pf);
	//메모리할당/해지 처럼 forpen_s로 파일을 읽기 위해서나
	//쓰기 위해서 열었다면 fclos로 해당 파일을 닫아줘야 한다.
	system("pause");
	return 0;
}