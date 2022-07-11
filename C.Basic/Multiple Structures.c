#include <stdio.h>
#include <time.h>
#include <Windows.h>

enum eJob
{
	전사 = 0,
	마법사,
	궁수,
	사제
};

typedef struct Basestat
{
	char name[20];
	int att;
	int def;
	int hp;
}_BASESTAT, * _LPBASESTAT;
typedef struct Monster
{
	_BASESTAT stat;
	int _isBoss;
}_MONSTER, * _LPMONSTER;

typedef struct Playse
{
	_BASESTAT stat;
	enum eJob myJob;
}_PLAYER, * _LPPLAYER;

typedef struct NPCCharc
{
	_LPBASESTAT stat;
	int type;
}_NPCCHARC, * _LPNPCCHARC;

int main_Multistructure()
{
	srand(time(0));
	//구조체
	// 다중 구조체 : 
	//다중 구초체란 구조체 안에서 다른 구조체를 사용하는 것을 말한다
	//_PLAYER player;
	//player.myJob = 전사;
	//strcpy_s(player.stat.name, sizeof(player.stat.name), "나는전설");
	//player.stat.att = 10;

	//_NPCCHARC npc = { 0, };
	//if(npc.stat ==0)
	//	npc.stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
	//printf("NPC %s의 공격력은 %d\n ", npc.stat->name, npc.stat->att);
	//printf("NPC %s의 방어력은 %d\n ", npc.stat->name, npc.stat->def);
	//printf("NPC %s의 HP는 %d\n ", npc.stat->name, npc.stat->hp);

	/*_NPCCHARC npc;
	npc.type = 1;
	npc.stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
	strcpy_s(npc.stat->name, sizeof(npc.stat->name), "전설의 상인");
	npc.stat->att = 10;
	npc.stat->def = 2;
	npc.stat->hp = 50;*/

	/*printf("NPC %s의 공격력은 %d\n ", npc.stat->name, npc.stat->att);
	printf("NPC %s의 방어력은 %d\n ", npc.stat->name, npc.stat->def);
	printf("NPC %s의 HP는 %d\n ", npc.stat->name, npc.stat->hp);*/

	//if(npc.stat != 0)
	//free(npc.stat);

	_LPNPCCHARC npc = 0;
	if (npc == 0)
	{
		npc = (_LPNPCCHARC)malloc(sizeof(_NPCCHARC));
		memset(npc, 0, sizeof(_NPCCHARC));
	}
	else
	{
		printf("npc가 0이 아닙니다.");
		system("pause");
		return 0;
	}

	{
		npc->type = 1;
		if (npc->stat == 0)
			npc->stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
		else
		{
			printf("npc ->stat가 0이 아닙니다.");
			system("pause");
			return 0;
		}

		//연산 ....
		if (npc->stat != 0)
			free(npc->stat);


	}

	if (npc != 0)
		free(npc);
	system("pause");
	return 0;
}