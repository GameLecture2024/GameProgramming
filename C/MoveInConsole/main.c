// border.h .c
// ShowBorder();
#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// 커서 : output결과를 출력하는 위치를 안내해주는 안내 기호.

// (x,y)좌표로 커서를 옮긴다.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*
*  도전 과제
*  플레이어의 시작 위치를 설정해주세요.
*  좌표에 대한 감각을 익혀보세요.
*  setCursorPos <<이용해서 여러분이 원하는 위치에 플레이어를 배치해보세요.
*  int posX posY << 플레이어의 현재 위치
*/


bool GameOver = false;


int main()
{
	ShowBorder();


	// 플레이어의 현재 좌표 설명해주는 변수를 선언

	int playerX = 10;  // x의 값 +2 (오른쪽 1칸)
	int playerY = 1;   // y의 값 +1 아래로 1칸 내려간다

	// 플레이어가 시작할 때 등장한다.
	// 플레이어를 경계선 안에 그리고 싶다.
	setCursorPos(playerX, playerY);
	printf("□"); // 현재 커서위치에 "" 문자를 출력한다.

	// 게임이 바로 종료되지 않도록 Loop만든다
	// 반복적으로 실행되는 부분
	while (1)
	{
		if (_kbhit())
		{
			// 화살표 입력 인식
			
			if (GetAsyncKeyState(VK_UP) & 0x8000)  // 위
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)  // 아래
			{
				playerY += 1;
				if (playerY >= 17)
				{
					playerY = 16;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)  // 좌
			{
				playerX -= 2;
				if (playerX < 2)
				{
					playerX = 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)  // 우
			{
				playerX += 2;
				if (playerX > 36)
				{
					playerX = 36;
				}
			}
			else
			{
				// x,y 그 자리 그대로
			}
		}

		//printf("현재 좌표 : (%d,%d)", playerX, playerY); // 테스트 코드
		
		system("cls");
		ShowBorder();
		setCursorPos(playerX, playerY);
		printf("□");

		Sleep(50);

		// 1.wait inputkey (특정 키를 눌렀을 때)

		// 2.playerX, playerY값을 변화시킨다.

		// 3.해당 좌표로 커서를 위치를 바꾸고 printf

		// 4. 

		//if (종료 조건)
		//	break;
		//break;

		// 캐릭터가 특정 위치에 도달하면 gameover true 종료가 되도록 만들어보세요

		//if( playerX와 playerY 특정 위치일 때 &&  게임 종료)

		if (playerY == 1 && playerX == 36)
		{
			GameOver = true;
		}


		if (GameOver)
		{
			break;
		}

	}

	// 게임 종료
}