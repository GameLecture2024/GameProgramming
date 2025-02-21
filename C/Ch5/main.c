/*
*  작성일 : 2025-02-21
*  작성자 : 김동훈
*  주제   : 문자를 표현하는 방법, 데이터의 타입 변환
*/

/*
*  정수, 실수							 
*  정수를 표현하는 방법 - 부호비트 MSB - 5 - 2의 보수 - unsigned
*  실수를 표현하는 방법 - MSB/가수/지수 - 10 = (0.1)
*/

/*
*  많은 데이터형을 사용해야 합니다.
*  int, char, short, long
*  float, double
* 
*  왜 미리 타입을 만들어 뒀을까요?
*  - 편하게 사용할려고 합니다.
* 
*  int : 정수(그 긴거) + 4바이트 : 
   각각의 비트는 0,1저장하고 마지막 비트 부호 저장 비트의 갯수 8개다
*/

/*
*  	문자를 저장했다. 비트값을 저장했습니다.  00000000
*   character 측면 해석 -> 'a'
*   정수 측면 해석 -> 97
*   
*    숫자의 값 단어 매핑 - 
*    97 a, 98 b 99 c 
*    ASCII ( American Standard Code for information insitute)
*/

/*
*   정수형 데이터 4바이트 이름을 'num' 선언을 하세요. 값을 10 초기화하세요
* 	int num;
*   num = 10;
*   num(int)     10 정수
*/

/*
*  literal 상수 
*  컴퓨터 입장에서 가장 보편적으로 많이 사용하는 타입 변환
*  10 <- int형
*  11.5 <- double형
* 
*  상수 -   10
*  int num;
*  num = 40;
*  num = 10;  
*  10 = 30;
* 
*  심볼릭 상수 - 이름을 지정을 해줄 수 잇다.
* 
*  int PI = 3.14 
*/

/*
*  형변환
*  자동  -  묵시적 변환
*  수동  -  명시적 변환
* 
*  명시적 변환하는 방법
*  float fnum10 = 0.1f;
*  int tempInt = (int)fnum10;
*/

#include <stdio.h>

int main()
{
	int num1 = 10;
	char num2 = 0;
	short num3 = 5;
	printf("정수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num1));
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num2));
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.2;
	printf("실수 데이터의 크기 비교\n");
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(fnum1));
	printf("데이터의 바이트 크기 : %d 바이트\n", sizeof(fnum2));

	printf("문자를 출력한다.\n");

	char c1 = 'Z';	// c1 변수 char // 'Z' 90
	printf("값 : %c\n", c1);		// 0000 0000
	printf("값 : %d\n", c1);

	// 128숫자 a~z, A~Z 
	wchar_t charNum = L'가';

	printf("유니코드 값 : %d\n", charNum);

	printf("심볼릭 상수 예시\n");

	const double PI = 3.14;

	printf("값 출력 : %.4lf\n", PI);
	
	printf("예제 문제\n");

	// 원의 넓이를 구하는 공식 
	// 원의 넓이 = Pi * 반지름 * 반지름;
	// PI 무엇으로 해야할지 토론 3.14 고정
	// 다른 사람이 원의 넓이 PI 접근을 하지 못하도록 코드를 작성해보세요.

	double radius = 5;
	double extent = radius * radius * PI;
	printf("원의 넓이 : %lf ", extent);

	// 플레이어 요소
	// 체력, 공격력
	// 사망 (체력 <= 0) -> 원래 체력 부활
	// 기본 체력으로 부활했다.
	// hp = 5; 

	const int REVIVEHP = 10;
	int currentHP = REVIVEHP;

	currentHP <= 0;
	printf("플레이어가 사망했습니다/\n");
	printf("부활하시겠습니까? Y / N \n");
	currentHP = REVIVEHP;
	printf("플레이어가 부활했습니다.\n");

	//명시적 변환하는 방법
    float fnum10 = 0.1f;
	int tempInt = (int)fnum10;		// 0000 0000

	printf("값 : %d\n", tempInt);
	printf("값 : %f\n", (float)tempInt);

	//묵시적 변환 
	// case1. 대입 연산자를 사용할 때 두 변수의 타입이 다르면 발생.

	float fnum11 = 0.1f;
	int tempInt2 = fnum10;	 // 데이터 선언 및 초기화
	printf("값 : %d\n", tempInt2);
	printf("값 : %f\n", (float)tempInt2);

	// case2. 정수의 승격에 의한 자동 형변환
	// char, short -> int변환
	
	short ex1 = 15;   // 15 -> int
	short ex2 = 25;	  // 25 -> int
	short ex3 = ex1 + ex2; // 15 + 25 int -> short 

	// case3. 연산자의 자료 불일치

	// 공격력 = 기본 공격력 + 레벨 * 가중치

	int baseAttack = 10;
	int level = 1;
	double weight = 0.5;
	int AP = baseAttack + level * weight; // 10 + (1 * 0.5)
	// (double)1 * 0.5   - 자료형 일치하지 않는다.
	// 0.5
	// 정수 * 실수 - 실수  
	// 10 + 0.5
	// 10.5
	// (int)AP = (int)(double) 10.5;

	// case 3-2 자료형 불일치 (정수,실수) (정수, 정수)
	int abc = 129;	     //   10000001  //   011111111 + =  000000000  = 000 
	char ccc = abc; // -127

	printf("값 : %d", ccc);

	// [] x4  <-  []x1 :  [] [] [] []x1
	// [] x4 ->   []x1 : // [1010] [010101] [101010] // []

	// 자료형을 변환할 때 데이터의 손실이 가장 적은 방향으로 변환이 된다.

	// [char -> short ->] int -> long -> float -> double


	return 0;
}