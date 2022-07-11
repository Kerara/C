#include <stdio.h>
#include <Windows.h>
#include <time.h>

typedef struct Monster
{
	char name[20];
	int att;
	int def;
	int hp;

}_MONSTER, * _LPMONSTER;
void showMonster(struct Monster m);
int GetInputInt(const char* dialog, int no);

int main_Purpose_of_usingthe_structure()
{
	srand(time(0));

	//구조체
	// 복합자료형 구조.
	// 함수 밖에서 만들어야 한다.
	// struct  구조체 자료형명
	// {
	//            자료형 자료형명; <=필드.
	//			자료형 자료형명;
	//			....
	// };
	//struct 구조체 자료형명 변수명;

	/*struct Monster mon1,mon2;
	strcpy_s(mon1.name,sizeof(mon1.name),"못난이");
	mon1.att = 10;
	mon1.def = 2;
	mon1.hp = 100;
	showMonster(mon1);
	mon2 = mon1;
	printf(" ==============================\n");
	showMonster(mon2);
	printf(" ==============================\n");
	strcpy_s(mon2.name, sizeof(mon2.name), "기모찌");
	showMonster(mon1);
	showMonster(mon2);*/

	_MONSTER mon[3];
	_LPMONSTER pmon = 0;
	int n;
	char name[20] = { 0, };
	int input;
	for (n = 0; n < 3; n++)
	{
		pmon = &mon[n];
		printf("%d번째 몬스터의 이름을 입력하세요 :", n + 1);
		scanf_s(" %s", pmon->name, sizeof(pmon->name)); //구조체 주소변수의 내부 자료의 접은 '->'으로 접근한다.
		pmon->att = GetInputInt("%d번째 몬스터의 공격력을을 입력하세요 :", n + 1);
		pmon->def = GetInputInt("%d번째 몬스터의 방어력을을 입력하세요 :", n + 1);
		pmon->hp = GetInputInt("%d번째 몬스터의 생명력을을 입력하세요 :", n + 1);
	}

	for (n = 0; n < 3; n++)
	{
		showMonster(mon[n]);
	}
	//구조체 변수의 내부 자료의 접근은 "."으로 접한다.
	system("pause");
	return 0;

}
//구조체는 자료의 형태를 직접 만들어서 사용할 수 있도록 하는 자료형 이다.

int GetInputInt(const char* dialog, int no)
{
	int input;
	printf(dialog, no);
	scanf_s(" %d", &input);
	return input;
}
void showMonster(struct Monster m)
{
	printf("[(%s)몬스터 정보]\n", m.name);
	printf("이름 : %s\n", m.name);
	printf("공경력 : %d\n", m.att);
	printf("방어력 : %d\n", m.def);
	printf("생명력 : %d\n", m.hp);

}