#pragma once

#include <stdio.h>
#include <stdbool.h>

// extern : 외부에 CurrentMoney 이름이 같은 변수가 있으니 그것을 사용하세요.
extern int CurrentMoney;

bool IsEnoughMoney(int amount);

bool UseMoney(int price);