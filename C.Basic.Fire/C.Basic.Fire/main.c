#include <stdio.h>
#include<time.h>
#include <Windows.h>

int main()
{
	srand(time(0));

	//���� �����
	// FILE����ü�� �ּ��� ������ ����� ����.
	// fopen_s(&����������, ������ ��ġ�� �̸� ,Ű����"r"or"w"or"a");
	// fclose(����������);
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

	/*fputs("�ȳ��ϼ���~", pf);
	fputs("c��� ��̾���? ", pf);*/
	
	////fputs("\n�߰��߰�,pf);
	//fprintf(pf, "�� �̸��� %s!! ����������!\n ���̴� %d�̾�", "ȫ�浿", 19);
	////���� ��� ��� �Լ��� ���Ͽ� ������ ���� �Լ��̴�.
	//fclose(pf);
	//�޸��Ҵ�/���� ó�� forpen_s�� ������ �б� ���ؼ���
	//���� ���ؼ� �����ٸ� fclos�� �ش� ������ �ݾ���� �Ѵ�.
	system("pause");
	return 0;
}