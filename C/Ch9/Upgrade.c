#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/*
*  ���׷��̵� �ý��� ����ϴ�.
*  ������ ������ ������ ���� ���ݷ��� ������Ų��.
*  ����, ���ݷ� ������ ����Ǿ�� �ϴ°�? �ƴѰ�? => �����ؾ��մϴ�.
*  ����, ���ݷ� ���� => ���� ���� ����. (C++ �ٸ� ���, C��� �ٸ� ���)
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int hightCost = 500;

	while (true)
	{
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_��� ���ü� �̿�\n");
		printf("3_��ȭ�� ����Ѵ�.\n");

		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			if (UseMoney(normalCost))
			{
				WeaponUpgrade();
			}		
		}
		else if (inputnumber == 2)
		{
			if (UseMoney(hightCost))
			{
				AdvancedWeaponUpgrade();
			}		
		}
		else if (inputnumber == 3)
		{
			printf("��ȭ�� ���\n");	  
			break;
		}
		else
		{
			printf("�߸��� �Է°� \n");
		}
	}

	
}

void WeaponUpgrade()
{

	int weight = 5;

	normalLV = normalLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade()
{
	int weight = 50;

	advancedLV = advancedLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;

	printf("���� ���� ���� : %d, ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}
