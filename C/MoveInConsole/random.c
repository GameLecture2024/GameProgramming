#include "random.h"
#pragma once

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 0 ~ 40

	// 랜덤값 + 짝수를 반환해야 한다.
	// 1. 랜덤한 숫자를 뽑는다 - rand() A범위 B범위
	// 2. 1 ~ 20 x2 (짝수) 
    // 구현하기 쉬운 것으로 구현한다.
	// 두 코드 중에 더 효율적인 코드를 사용한다.	( 보기에 좋은 것, 메모리 최적화)
	int randValue = rand() % 36 + 1 ; // 1 ~  40
	
	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 16 + 1;
	return randValue;
}
