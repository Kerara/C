#include <stdio.h>
#include <Windows.h>

int main_conditional_statement_if()
{
	// ���ǹ� : ������ ������ �� �Ǵ� ������ ���� ���� ����� �����ϵ��� �ϴ°�
	// if , else if , else
	// �������
	// if(���ǹ�)
	//       ��ɹ�;
	// else
	//       ��ɹ�;

	int number = 0;
	printf("������ �Է��ϼ���  :");
	scanf_s(" %d", &number);
	if (number % 2 == 1)
	{
		printf("�Է¼� %d��(��) Ȧ���Դϴ�.\n", number);
		printf(" ��� ~~Ȧ���� \n");
	}
	// �߰�ȣ�� �ѹ������� �ν��Ѵ�.
	else if (number == 0)
		printf("�Է¼� %d��(��) 0�Դϴ�.\n", number);
	//�߰�ȣ ���� ������ �ΰ� �̻� ���� ����.
	else
		printf("�Է¼� %d��(��) ¦���Դϴ�.\n", number);
	//[ ���ǹ��� ��뿡 �־ �����ؾ� �ϴ� ����]
	// ���ǹ��� ������ üũ�ϴ� ������ �ֱ� ������
	// ��� ������ ���� üũ�ؾ� �ϴ°��� �� �Ǵ��ؾ� �Ѵ�.

	system("pause");
	return 0;
}