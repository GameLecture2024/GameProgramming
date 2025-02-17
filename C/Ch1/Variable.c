/*
작성일 : 2025-02-17
작성자 : 김동훈
주제	  :	 변수
*/

// 0 환경 설정
#include <stdio.h>

int main()
{
	// player : 닉네임(문자열)  - kk , oo
	// enemy  : 몬스터 이름(문자열)
	// player's attackpower : 플레이어의 공격력(숫자)
	// enemy's attackpower : 몬스터의 공격력(숫자)

	// 변수를 이용해서 - 한방에 player이름을 바꾸어 보자.
	// Hey Computer! player's attackpower change the value 8 값을 8로 해주세요.
	// 컴퓨터에게 전달해야 할 정보(변수의 이름, 어떠한 종류인가(★★), 값)

	int playerAttackPower = 5;
	int enemyAttackPower = 3;

	printf("%s와 %s가 어딘가에서 만났습니다.\n","KKK", "고블린");
	printf("%s는 아직 %s를 발견하지 못했습니다.\n", "고블린", "KKK");
	printf("%s가 %s를 공격하여 %d 만큼 데미지를 줬습니다.\n", "KKK", "고블린", playerAttackPower);
	printf("%s와 %s 서로 공격하여 %d와 %d\n", "KKK", "고블린", playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int  int1 = 10;
	float float1 = 0.8f;
	printf("문자 출력 : %c\n", char1);
	printf("정수 출력 : %d\n", int1);
	printf("실수 출력 : %f\n", float1);
	printf("문자열 출력 : 고블린\n");

    // 강화 시스템 스토리 짠다.
	// 아이템 이름%s 현재 레벨%d 강화 확률%f
	// 강화를 시도 합니다.
	// 성공했다면 -> 출력, 실패했다면 -> 출력



	printf("무기의 이름 : %s, 무기의 레벨 : %d, 무기 성공 확률 : %f  ", "롱소드", 1, 0.8);

}


// F5, 디버깅 버튼 클릭
// 콘솔 창에 "안녕 변수" 출력시켜보겠습니다.


// 1. 출력하고 싶은 내용을 작성했다.
// 2. 단어, 정수, 실수, 문자열 출력하세요