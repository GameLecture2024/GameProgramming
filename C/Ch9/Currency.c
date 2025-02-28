#include "Currency.h"


// 돈이 충분하면 true : false;
bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	// if(조건)
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		ShowInfo();
		return true;
	}
	else
	{
		printf("돈이 부족합니다.\n");
		return false;
	}
}
