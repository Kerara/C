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

	//����ü
	// �����ڷ��� ����.
	// �Լ� �ۿ��� ������ �Ѵ�.
	// struct  ����ü �ڷ�����
	// {
	//            �ڷ��� �ڷ�����; <=�ʵ�.
	//			�ڷ��� �ڷ�����;
	//			....
	// };
	//struct ����ü �ڷ����� ������;

	/*struct Monster mon1,mon2;
	strcpy_s(mon1.name,sizeof(mon1.name),"������");
	mon1.att = 10;
	mon1.def = 2;
	mon1.hp = 100;
	showMonster(mon1);
	mon2 = mon1;
	printf(" ==============================\n");
	showMonster(mon2);
	printf(" ==============================\n");
	strcpy_s(mon2.name, sizeof(mon2.name), "�����");
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
		printf("%d��° ������ �̸��� �Է��ϼ��� :", n + 1);
		scanf_s(" %s", pmon->name, sizeof(pmon->name)); //����ü �ּҺ����� ���� �ڷ��� ���� '->'���� �����Ѵ�.
		pmon->att = GetInputInt("%d��° ������ ���ݷ����� �Է��ϼ��� :", n + 1);
		pmon->def = GetInputInt("%d��° ������ �������� �Է��ϼ��� :", n + 1);
		pmon->hp = GetInputInt("%d��° ������ ��������� �Է��ϼ��� :", n + 1);
	}

	for (n = 0; n < 3; n++)
	{
		showMonster(mon[n]);
	}
	//����ü ������ ���� �ڷ��� ������ "."���� ���Ѵ�.
	system("pause");
	return 0;

}
//����ü�� �ڷ��� ���¸� ���� ���� ����� �� �ֵ��� �ϴ� �ڷ��� �̴�.

int GetInputInt(const char* dialog, int no)
{
	int input;
	printf(dialog, no);
	scanf_s(" %d", &input);
	return input;
}
void showMonster(struct Monster m)
{
	printf("[(%s)���� ����]\n", m.name);
	printf("�̸� : %s\n", m.name);
	printf("����� : %d\n", m.att);
	printf("���� : %d\n", m.def);
	printf("����� : %d\n", m.hp);

}