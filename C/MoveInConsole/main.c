// border.h .c
// ShowBorder();
#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// Ŀ�� : output����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ.

// (x,y)��ǥ�� Ŀ���� �ű��.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*
*  ���� ����
*  �÷��̾��� ���� ��ġ�� �������ּ���.
*  ��ǥ�� ���� ������ ����������.
*  setCursorPos <<�̿��ؼ� �������� ���ϴ� ��ġ�� �÷��̾ ��ġ�غ�����.
*  int posX posY << �÷��̾��� ���� ��ġ
*/


bool GameOver = false;


int main()
{
	ShowBorder();


	// �÷��̾��� ���� ��ǥ �������ִ� ������ ����

	int playerX = 10;  // x�� �� +2 (������ 1ĭ)
	int playerY = 1;   // y�� �� +1 �Ʒ��� 1ĭ ��������

	// �÷��̾ ������ �� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.
	setCursorPos(playerX, playerY);
	printf("��"); // ���� Ŀ����ġ�� "" ���ڸ� ����Ѵ�.

	// ������ �ٷ� ������� �ʵ��� Loop�����
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		if (_kbhit())
		{
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
		
		system("cls");
		ShowBorder();
		setCursorPos(playerX, playerY);
		printf("��");

		Sleep(50);

		// 1.wait inputkey (Ư�� Ű�� ������ ��)

		// 2.playerX, playerY���� ��ȭ��Ų��.

		// 3.�ش� ��ǥ�� Ŀ���� ��ġ�� �ٲٰ� printf

		// 4. 

		//if (���� ����)
		//	break;
		//break;

		// ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� gameover true ���ᰡ �ǵ��� ��������

		//if( playerX�� playerY Ư�� ��ġ�� �� &&  ���� ����)

		if (playerY == 1 && playerX == 36)
		{
			GameOver = true;
		}


		if (GameOver)
		{
			break;
		}

	}

	// ���� ����
}