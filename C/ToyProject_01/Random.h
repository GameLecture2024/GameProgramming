#pragma once

/*
*  #include <stdlib.h>
*  #include <time.h>
*  srand(time(NULL))	// rand seed�� �����ϴ� �Լ�
*  rand()
*/

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 �����ϰ� ��� (����) - A
// 30% ���� ( 1 ~ 100 ) 70ũ�ų� ������ �����Ѵ�. [ 1 ~ 100]

// A   �̸�(B)
// A : ��ȯ��
// B : �Ű�����

int ReturnRandomValue();   // 1 ~ 100
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max);	//  20 ~ 40
