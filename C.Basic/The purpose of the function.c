#include <stdio.h>
#include <Windows.h>
#include <time.h>
//�����
int GetInputInteger(const char* dialog);
int main_the_purpose_of_the_function()
{
	srand(time(0));

	//printf("�ȳ� ���� ~\n");
	//int printf(const char* format[,arrgument]...);
	//��ȯ�� �Լ���(�Ű������ڷ��� �Ű� ������, ....)
	//�Լ��� �ڵ��� ������ ���ؼ� �Ǵ� �ڵ���  �������� ���ؼ� �����.
	//{
	//                  //��ɵ�...
	//            //return(�ڷ�);
	//}
	int num = 10;
	int su1, su2;

	const int* pNum = &num;
	int* const pn = &num;
	/*printf(" ù��° ������ �Է��ϼ��� :");
	scanf_s(" %d", &su1);
	printf(" �ι�° ������ �Է��ϼ��� :");
	scanf_s(" %d", &su2);*/
	su1 = GetInputInteger("ù ��° ������ �Է��ϼ��� :");
	su2 = GetInputInteger("�� ���� ������ �Է��ϼ��� :");

	printf(" su1 [%d] * su2[%d] = %d\n", su1, su2, su1 * su2);

	/*pNum = &su1;
	*pnum = 100;
	pn = &su1;
	*pn = 100;*/

	system("pause");
	return 0;
}
//���Ǻ�
int GetInputInteger(const char* dialog)
{
	int su = 0;

	printf(dialog);
	scanf_s(" %d", &su);
	return su;
}