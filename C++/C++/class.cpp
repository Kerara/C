//Ŭ������?
// ��ü�� ����, ���赵

#include "����Ŭ����.h"

int main_Class()
{
	����Ŭ���� mClass;


	cout << "name?";
	cin >> mClass.m_Name;

	cout << "score?";
	cin >> mClass.m_Score;

	cout << endl << "------" << mClass.m_Name << "���� �����?" << "-----" << endl;
	mClass.PrintRank();

	return 0;
}