/*
*  �ۼ��� : 2025-02-27
*  �ۼ��� : �赿��
*  ����   : ���� ����, ���� ����
*/

/*
*  ���׷��̵� �ý���
*  - menu // 1��  , 2��,  ��ȭ ����
*/


#include "lecture.h"
#include "Upgrade.h"
#include "Currency.h"
#include "main.h"
int number = 1; // ���� ����

int CurrentMoney = 1000;

// ���� ���� ���� ������ ������

void ShowInfo()
{
	printf("ĳ������ Ŭ���� %s\n", "���谡");
	printf("���� ���� �� : %d\n", CurrentMoney);

	WaitInputAnyKey();
}

void WaitInputAnyKey()
{
	printf("â�� �������� �ƹ� Ű�� �Է����ּ���.");
	_getch();
}

int main()
{
	ShowInfo();
	system("cls");

	//ShowExample();
	ShowUpgradeMenu();
}