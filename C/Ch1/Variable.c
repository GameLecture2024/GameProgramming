/*
�ۼ��� : 2025-02-17
�ۼ��� : �赿��
����	  :	 ����
*/

// 0 ȯ�� ����
#include <stdio.h>

int main()
{
	// player : �г���(���ڿ�)  - kk , oo
	// enemy  : ���� �̸�(���ڿ�)
	// player's attackpower : �÷��̾��� ���ݷ�(����)
	// enemy's attackpower : ������ ���ݷ�(����)

	// ������ �̿��ؼ� - �ѹ濡 player�̸��� �ٲپ� ����.
	// Hey Computer! player's attackpower change the value 8 ���� 8�� ���ּ���.
	// ��ǻ�Ϳ��� �����ؾ� �� ����(������ �̸�, ��� �����ΰ�(�ڡ�), ��)

	int playerAttackPower = 5;
	int enemyAttackPower = 3;

	printf("%s�� %s�� ��򰡿��� �������ϴ�.\n","KKK", "���");
	printf("%s�� ���� %s�� �߰����� ���߽��ϴ�.\n", "���", "KKK");
	printf("%s�� %s�� �����Ͽ� %d ��ŭ �������� ����ϴ�.\n", "KKK", "���", playerAttackPower);
	printf("%s�� %s ���� �����Ͽ� %d�� %d\n", "KKK", "���", playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int  int1 = 10;
	float float1 = 0.8f;
	printf("���� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %f\n", float1);
	printf("���ڿ� ��� : ���\n");

    // ��ȭ �ý��� ���丮 §��.
	// ������ �̸�%s ���� ����%d ��ȭ Ȯ��%f
	// ��ȭ�� �õ� �մϴ�.
	// �����ߴٸ� -> ���, �����ߴٸ� -> ���



	printf("������ �̸� : %s, ������ ���� : %d, ���� ���� Ȯ�� : %f  ", "�ռҵ�", 1, 0.8);

}


// F5, ����� ��ư Ŭ��
// �ܼ� â�� "�ȳ� ����" ��½��Ѻ��ڽ��ϴ�.


// 1. ����ϰ� ���� ������ �ۼ��ߴ�.
// 2. �ܾ�, ����, �Ǽ�, ���ڿ� ����ϼ���