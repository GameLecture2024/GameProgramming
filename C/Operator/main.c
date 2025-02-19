/*
*  작성일 : 2025-02-19 
*  작성자 : 김동훈
*  주제   : 연산자 실습
*/

/*
*  사칙 연산 : +,-, *, /, %
* 
*  단항 연산자			 
*  부호 : +,-  음수 양수   -10, +10
* 
*  이항 연산자
*  num1 + num2
* 
*  삼항 연산자
*  ? 1항 = 2항 : 3항
*/

/*
*  연산자의 쓰임새
*  산술 연산자 +,-,*,/,%
*  비교 연산자 > , < , == 
*  비트 연산자 ( data type )
*  관계 연산자 ( or, and  ||, && )
*/

/*
*  비교 연산자 결과 : 참(true) 1, 거짓(false) 0
*  1, 0 :  1 + 0 = 1;
*/


/*
*  	  시스템 파일
*  "" 커스텀 파일
* 
*  #include <>
*  #include ""
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	// 사칙 연산 + 나머지

	printf("연산자 실습1\n");

	// 변수의 선언 초기화

	int num1 = 10;
	int num2 = 3;

	// 덧셈
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d 나머지 %d = %d\n", num1, num2, num1 % num2);

	printf("실습 2 \n");
	printf("비교 결과 num1 > num2 : %d\n", num1 > num2); // 참 
	printf("비교 결과 num1 < num2 : %d\n", num1 < num2); // 거짓


	printf("실습 3 : 삼항 연산자 \n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("삼항 연산자 결과 출력 : %s \n", result1 ? "true" : "false");
	printf("삼항 연산자 결과 출력 : %d \n", result1 ? 1 : 0);

	printf("실습 4 : 관계 연산자 \n");

	// !num2 : num2가 아니다. false -> true // true -> false

	printf("관계 연산자 : %d  \n", (num1 == num2) || (num1 < num2)); // num1 != num2 두 수가 다를 때 
	printf("관계 연산자 : %d  \n", (num1 != num2) && (num1 < num2)); // num1 != num2 두 수가 다를 때    


	printf("실습 5 : 복합 연산자 \n");

	int num3 = 2;
	int num4 = 5;
	num3 != num4;	//  num3 <- 2 + 5 = 7 

	// 1 -> 2 -> 3 -> 4 -> 반복 싶은 숫자

	// T += A;  
	printf("num3 + num4의 값 : %d\n", num3);

	printf("실습 6 : 후위 연산자, 전위 연산자\n");

	// 전위 연산자 : 문장을 먼저 처리한 후에 연산을 한다.
	// num3의 값 : 2 출력 -> num3++ : num3 += 1;
	// 후위 연산자 : 연산된 결과를 문장에 대입한다.
	// num4 += 1; -> printf 문장을 처리합니다.

	printf("num3의 값 : %d\n", num3++);
	printf("num3의 값 : %d\n", num3);
	printf("num4의 값 : %d\n", ++num4);
	printf("num4의 값 : %d\n", num4);

	// |, &, << , >> '비트' 

	// 게임의 스토리1.

	// 무기를 강화하는데
	// n강일 때의 무기,  n+1 무기의 정보를 화면에 출력하는 스토리를 작성해보세요.
	
	// 게임의 스토리2.

	// 아이템 인벤토리.  Slot. 기타 아이템 수집. Stack x 갯수.
	// Slot 최대 갯수 : 변수
	// Stack 최대 갯수 : 변수
	// A 아이템을 n개 획득, B 아이템 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안찼는지 표현하는 결과를 표현해보세요.

	// 3항 연산자 

	// 게임의 스토리3. 작성을 해보세요.
}