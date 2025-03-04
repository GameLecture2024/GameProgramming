#pragma once

/*
*  #include <stdlib.h>
*  #include <time.h>
*  srand(time(NULL))	// rand seed를 지정하는 함수
*  rand()
*/

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 랜덤하게 출력 (정수) - A
// 30% 성공 ( 1 ~ 100 ) 70크거나 같으면 성공한다. [ 1 ~ 100]

// A   이름(B)
// A : 반환값
// B : 매개변수

int ReturnRandomValue();   // 1 ~ 100
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max);	//  20 ~ 40
