#include <stdio.h>
#include <Windows.h>

//�� = ��������
//enum ������ �ڷ�����
//{
//	�ڷᰪ1,
//	�ڷᰪ2,
//	......
//	�ڷᰪn,
//};

enum e����
{
	���� = 10,
	����,
	���� = 100,
	����,

};
// ���� = 10, ���� = 11, ����== 100, ����= 101,
//100�� ���ܽ�Ű�� 10,11,12,13���� �ȴ�.

int main_Datatypes()
{
	//�� = ��������
	// : �ּ� = ���α׷��Ӱ� �ڵ��� ���Ǹ� ���� ����ϴ� �޸���
	/* �ּ� */

	// �ڷ����� ������ ����� ����������.
	/*printf("1 +1 = %d\n", 1 + 1);*/
	// ������ ���� �����ϴ� ����
	// �ڷ��� Ű���� ������;
	// ������ , ������, �Ǽ��� ,������
	// ������(int)
	// ������ (char)
	// �Ǽ��� (float)
	// ������ (enum)

	//int number = 10;	// ���� ����.
	//int su = 10;	//���� ����� �ʱ�ȭ

	//printf(" number = %d, su = %d\n", number, su);
	//���������� ���, ������ ���� ���� ������ �Ͼ�� ������ 
	//�޸𸮻� ������ ��Ұ� ��������� �ʴ´�.



	/*
	char charac = 'a';
	printf("charac = %c\n", charac);*/

	//�ƽ�Ű�ڵ� ���α׷����� �ʱ⿡�� ���ڸ� �ν������� �ƽý�Ű �ڵ带 ���ؼ� ���� = ���� �Ǿ���.

	/*float fNum = 3.14f;
	printf("fNum = %1.2f\n", fNum);*/
	//�� �ڿ� f�� ������ ������ �����Ϸ��� �ش� ���� double�� �ڷ��� �����Ѵ�.

	//char* name = "ȫ�浿";
	//char buffer[] = "��ö��";
	////* �������� �����ϴ�
	//printf("name = %s\nbuffer = %s\n", name,buffer);

	enum e���� subject = ����;
	printf(" subject = %d\n", subject);
	enum e���� subject2 = ����;
	printf(" subject2 = %d\n", subject2);
	enum e���� subject3 = ����;
	printf(" subject3 = %d\n ", subject3);
	enum e���� subject4 = ����;
	printf(" subject4 = %d\n", subject4);
	system("pause");

	return 0;
}