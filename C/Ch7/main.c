/*
*  작성일 : 2025-02-25
*  작성자 : 김동훈
*  주제  : 코드의 흐름 제어 - 반복문
*  - for 반복문, while 반복문
*/

/*
*  반복문
*  - 1+1+1+1+1 => 1x100
* 
*  for, while
* 
*  for(int i=0;i<10; i++) 
*  
*  // 조건에는 참, 거짓 (true, false)
*  // 조건이 참일 때만 반복문을 실행하고 거짓일 때는 반복문을 벗어난다.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	printf("for 반복문 예제1 \n");
	// A이름의 아이템을 획득 - 갯수 
	int ACount = 0;
	printf("A아이템의 수 : %d\n", ACount);

	// 아이템 1개 획득했다.

	for(int i = 0; i < 100; i++)
	{
		ACount = ACount + 1;
	}
	
	printf("A아이템의 수 : %d\n", ACount);

	printf("for 반복문 예제2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}

	printf("B아이템의 수 : %d\n", BCount);

	printf("for 반복문 예제3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("현재 I의 값 : %d\n", reverseI);
	}

	// 게임의 이야기를 입혀서 표현해보도록 합시다.

	// break

	for (;;)
	{
		// 무기 강화하는 Step

		// 1_무기의 Stat 표현해주는 단계
		// 무기의 이름
		printf("무기의 이름 : %s\n", "롱소드"); // %s, 이름을 변수로 바꾸는 방법을 안배워서 안한다. 		
		// 무기의 레벨
		int weaponLevel = 0;
		// 기본 공격력,  가중치
		int basePower = 10;
		int weight = 5;
		// 무기의 공격력 = 기본 공격력 + 레벨 * 가중치
		int attackPower = basePower + weaponLevel * weight;
		
		// 강화를 진행할 것인가? 강화를 그만 둘 것인가 
		// 2. 강화를 선택하는 단계 (74 ~ 107 : 강화 스탭) 
		printf("강화를 진행하시겠습니까?(Y/N)\n");
		char check = ' ';
		scanf_s("%c", &check,1);
		
		if (check == 'Y')
		{
			printf("강화를 진행합니다.\n");
		}
		else if (check == 'N')
		{
			printf("강화를 그만 두겠습니다.\n");
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");	 // 

			char another = ' ';
			scanf_s("%c", &another,1);
			while (getchar() != '\n');	    // 문자열 설명한 다음에 해당 내용을 재설명하겠습니다.

			if (another == 'Y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (another == 'N')
			{
				printf("강화를 그만 두겠습니다.\n");
			}
			else
			{
				printf("프로그램이 종료되었습니다.\n");
			}
		}

		break;
	}

    // 반복문을 사용한다.
	// for반복문 사용해서 
	// n번 반복하는 코드를 쉽게 표현하기 위해서
	// 몇번 반복해야 할지 잘 모르겠는 내용있습니다.
	// 예시) 잘못된 값을 입력했을 때 정확한 값을 요구하는 코드 

    // while 반복문
	// 무한 반복문

	int xi = 0;

	while (xi < 10) //   (  ) 조건식 : 조건이 true일 때 {} 실행, 조건이 false 반복문을 종료한다. 
	{
		xi++;  // while 탈출하기 위한 조건문

		printf("xi의 값 : %d\n", xi);
	}

	// for반복문을 쓰면 좋을까요 while반복문을 쓰면 좋을까요?

	// 반복 횟수가 정해져있으면 for반복문이 작성하기가 더 편하다.

	// 몇 번 반복해야할 지 잘모르겠을 때 -> while반복문

	// ???번 반복할 코드를 작성하고 싶습니다.

	// 2만큼 증가하는 정수형 변수 numA가 있습니다.
	// 이 numA가 10보다 크거나 같을 때 종료되기를 원합니다.
	// numA 숫자가 10보다 커지기 위해서 몇 번 반복했는지 알고 싶습니다.
	// 반복한 결과 정수형 CountA로 출력해주세요.

	int numA = 0;
	int CountA = 0;
	printf("numA의 값을 입력해주세요(단 10보다 작아야 합니다.)\n");
	scanf_s("%d", &numA);		// numA의 값이 정해진다.

	// 표현법
	//while (true)
	//{
	//	numA += 2;
	//	CountA++;
	//
	//	if (numA > 10)
	//	{
	//		printf("반복한 횟 수 : %d\n", CountA);
	//		printf("현재 값 : %d\n", numA);
	//		break;
	//	}
	//	
	//}

	// 쉽게 표현하는 방버

	while (numA <= 10)
	{
		numA += 2;
		CountA++;
	}
	printf("반복한 횟 수 : %d\n", CountA);
	printf("현재 값 : %d\n", numA);


	// for반복문 표현 <-> while반복문 표현하기

	// 실습예제
	// 1부터 10사이의 값을 짝수 print 출력을 해보세요
	// for반복문, while반복문	 홀수

	// 현재 값 : 2; 2 3 4....
	
	// Y, N , 다시 입력하세요 <- Y,N입력할 때 까지 무한히 반복되는 코드를 작성해보세요

	// while반복문을 사용해서 Y, N 입력할 때 까지 반복하는 코드를 작성해보세요.

	// scanf_s();
	// while (getchar() != '\n');
}