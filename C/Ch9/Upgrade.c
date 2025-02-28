#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;

int baseAP = 10;
int currentAP = 0;

/*
*  업그레이드 시스템 만듭니다.
*  무기의 레벨과 레벨에 따른 공격력을 증가시킨다.
*  레벨, 공격력 정보가 저장되어야 하는가? 아닌가? => 저장해야합니다.
*  레벨, 공격력 정보 => 전역 변수 선언. (C++ 다른 방식, C언어 다른 방식)
*/

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int hightCost = 500;

	while (true)
	{
		printf("1_강화한다.\n");
		printf("2_고급 제련소 이용\n");
		printf("3_강화를 취소한다.\n");

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
			printf("강화를 취소\n");	  
			break;
		}
		else
		{
			printf("잘못된 입력값 \n");
		}
	}

	
}

void WeaponUpgrade()
{

	int weight = 5;

	normalLV = normalLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}

void AdvancedWeaponUpgrade()
{
	int weight = 50;

	advancedLV = advancedLV + 1;
	currentAP = currentAP + baseAP + weight * weaponLV;

	weaponLV = normalLV + advancedLV;

	printf("현재 무기 레벨 : %d, 현재 무기 공격력 : %d\n", weaponLV, currentAP);
}
