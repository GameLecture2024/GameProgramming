/*
*  menu.h �ڵ带 ctrl c + v;
*/

#include "menu.h"

int weaponLv = 1;
int baseAttackPower = 10;
int weight = 5;
int currentAttackPower = 0;


void SelectMenu()
{
	while (true)
	{
		system("cls");
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_����Ѵ�.\n");
		printf("3_�����Ѵ�.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber); // '\n'
		while (getchar() != '\n');	 // character �Է� ����

		if (inputNumber == 1)
		{
			// Alt Ű���� ȭ��ǥ ��,�Ʒ�
			printf("��ȭ�� �����մϴ�.\n");

			// ������ ����
			// ������ �⺻ ���ݷ�
			// ����ġ
			// ���� ���ݷ�

			// ��ȭ�� ������ �����ϴ� case

			// ������ ������ 1��� ��ŵ�ϴ�.
			weaponLv = weaponLv + 1;
			// ���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
			currentAttackPower = baseAttackPower + weaponLv * weight;
			// printf(���� ���ݷ�, ����)
			printf("���� ���ݷ� : %d, ������ ���� %d \n", currentAttackPower, weaponLv);

		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}

		// �÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� �ϰ� �ʹ�.

		printf("������ �Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
		_getch(); // �Է� ���� �޾ƿ��� ��ɾ�
	}
}
