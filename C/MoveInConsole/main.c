// border.h .c
// ShowBorder();
#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

// Ŀ�� : output����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ.

// (x,y)��ǥ�� Ŀ���� �ű��.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// Ŀ���� ����� �ͽ��ϴ�. true : Ŀ���� ���δ�, false : Ŀ���� ������ �ʴ´�.
void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

/*
*  ���� ����
*  �÷��̾��� ���� ��ġ�� �������ּ���.
*  ��ǥ�� ���� ������ ����������.
*  setCursorPos <<�̿��ؼ� �������� ���ϴ� ��ġ�� �÷��̾ ��ġ�غ�����.
*  int posX posY << �÷��̾��� ���� ��ġ
*/


// ���� ����
bool GameOver = false;
int  CurrentScore = 0;
int randomX = 14;
int randomY = 1;
int playTime = 0;

int questItemPosX = 34;
int questItemPosY = 5;
bool IsQuest = false;

int main()
{
	ShowBorder();
	CreateRandomSeed();
	setCursorPos(randomX, randomY);	 // 
	printf("��");
	setCursorPos(questItemPosX, questItemPosY);	 // 
	printf("��");

	// �÷��̾��� ���� ��ǥ �������ִ� ������ ����

	int playerX = 10;  // x�� �� +2 (������ 1ĭ)
	int playerY = 1;   // y�� �� +1 �Ʒ��� 1ĭ ��������

	// �÷��̾ ������ �� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.
	setCursorPos(playerX, playerY);
	printf("��"); // ���� Ŀ����ġ�� "" ���ڸ� ����Ѵ�.
	setCursorVisible(false);
	// ������ �ٷ� ������� �ʵ��� Loop�����
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		if (_kbhit())
		{
			setCursorPos(playerX, playerY);
			printf("  ");
			// ȭ��ǥ �Է� �ν�
			
			if (GetAsyncKeyState(VK_UP) & 0x8000)  // ��
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)  // �Ʒ�
			{
				playerY += 1;
				if (playerY >= 17)
				{
					playerY = 16;
				}
			}

			if (GetAsyncKeyState(VK_LEFT) & 0x8000)  // ��
			{
				playerX -= 2;
				if (playerX < 2)
				{
					playerX = 2;
				}
			}

			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)  // ��
			{
				playerX += 2;
				if (playerX > 36)
				{
					playerX = 36;
				}
			}
			else
			{
				// x,y �� �ڸ� �״��
			}
		}

		//printf("���� ��ǥ : (%d,%d)", playerX, playerY); // �׽�Ʈ �ڵ�
		//system("cls") -> ��ü�� ��������.
		setCursorPos(playerX, playerY);
		printf("��");

		// UI �ڵ� 
		setCursorPos(60, 0);
		printf("Score");
		setCursorPos(60, 1);
		printf("���� ���� : %d", CurrentScore);

		// �ð��� �����ϴ� �ڵ�
		playTime++;
		
		//int hour = playTime / 360;
		int minute = playTime / 60;
		int second = playTime % 60;
								   
		setCursorPos(60, 2);
		printf("�÷��� �ð� : %02d : %02d", minute, second);

		if (IsQuest)
		{
			setCursorPos(60, 3);
			printf("����Ʈ�� Ȱ��ȭ�Ǿ����ϴ�.");
		}
		


		Sleep(50);

		// 1.wait inputkey (Ư�� Ű�� ������ ��)
		// 2.playerX, playerY���� ��ȭ��Ų��.
		// 3.�ش� ��ǥ�� Ŀ���� ��ġ�� �ٲٰ� printf

		
		//if( playerX�� playerY Ư�� ��ġ�� �� &&  ���� ����)
		if (playerX == randomX && playerY == randomY)  // �����۰� �÷��̾��� ��ġ�� ���� ��Ȳ
		{
			CurrentScore++; // 1.������ ������.
			// 2.�������� ��ġ�� ����Ǿ�� �Ѵ�. ��ǥ�� �ٲ۴�.
			randomX = ReturnPosX();
			randomY = ReturnPosY();
			setCursorPos(randomX, randomY);
			printf("��");
		}


		if (playerX == questItemPosX && playerY == questItemPosY)
		{
			IsQuest = true;
		}

		if (CurrentScore == 10)
		{
			break;
		}

	}

	// ���� ����
}