#include <stdio.h>
#include <time.h>
#include <Windows.h>

enum eJob
{
	���� = 0,
	������,
	�ü�,
	����
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
	//����ü
	// ���� ����ü : 
	//���� ����ü�� ����ü �ȿ��� �ٸ� ����ü�� ����ϴ� ���� ���Ѵ�
	//_PLAYER player;
	//player.myJob = ����;
	//strcpy_s(player.stat.name, sizeof(player.stat.name), "��������");
	//player.stat.att = 10;

	//_NPCCHARC npc = { 0, };
	//if(npc.stat ==0)
	//	npc.stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
	//printf("NPC %s�� ���ݷ��� %d\n ", npc.stat->name, npc.stat->att);
	//printf("NPC %s�� ������ %d\n ", npc.stat->name, npc.stat->def);
	//printf("NPC %s�� HP�� %d\n ", npc.stat->name, npc.stat->hp);

	/*_NPCCHARC npc;
	npc.type = 1;
	npc.stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
	strcpy_s(npc.stat->name, sizeof(npc.stat->name), "������ ����");
	npc.stat->att = 10;
	npc.stat->def = 2;
	npc.stat->hp = 50;*/

	/*printf("NPC %s�� ���ݷ��� %d\n ", npc.stat->name, npc.stat->att);
	printf("NPC %s�� ������ %d\n ", npc.stat->name, npc.stat->def);
	printf("NPC %s�� HP�� %d\n ", npc.stat->name, npc.stat->hp);*/

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
		printf("npc�� 0�� �ƴմϴ�.");
		system("pause");
		return 0;
	}

	{
		npc->type = 1;
		if (npc->stat == 0)
			npc->stat = (_LPBASESTAT)malloc(sizeof(_BASESTAT));
		else
		{
			printf("npc ->stat�� 0�� �ƴմϴ�.");
			system("pause");
			return 0;
		}

		//���� ....
		if (npc->stat != 0)
			free(npc->stat);


	}

	if (npc != 0)
		free(npc);
	system("pause");
	return 0;
}