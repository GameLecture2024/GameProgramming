// 콘솔 배경 및 글자 색 바꾸는 방법
							
// 17:00 강의 시작
// 1. 콘솔 속성에서 직접 변경하기
// 2. 코드를 이용해서 변경하기

// 조건문 - 특정 텍스트만 색을 변경 (강조)


#include <stdio.h>
#include "Console.h"

int main()
{
	printf("☆");
	SetColor(0, 5);
	printf("☆");

}