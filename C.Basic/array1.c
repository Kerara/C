#include <stdio.h>
#include <Windows.h>
#include <time.h>
enum eType
{
	���� = 0,
	������,
	����,
	��ɲ�,

	�ִ�������,
};
int main_arry1()
{
	srand(time(0));
	// �迭 : �迭�� ����ϴ� ������ �ϰ�ó���� �� �� �ֱ� �����̴�.
	// ���� �ڷ����� ����
	// �ڷ��� �迭��[����];

	//int cnt = 5;
	//int su[cnt]; // �Ұ���
	//int su[5];//���ȣ �ȿ� ������ �� �� ���� ����� �����Ѵ�.

	//int su[�ִ�������] = { 1 ,2  ,3 ,4 };//�������� �����ϴ�.
	////int su[] = { 1 ,2  ,3 ,4,5,6 };
	//int n = 0;
	//int cnt = sizeof(su) / sizeof(int);
	//for (n = 0; n < cnt; n++)
	//	printf("su[%d] = %d\n", n, su[n]);


	/*int n = 0;
	for (n = 0; n < 10; n++)
	{
		printf("value = %d\n", rand());
	}*/
	system("pause");
	return 0;
}