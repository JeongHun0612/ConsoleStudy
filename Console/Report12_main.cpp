#include "Report12_MainGame.h"

/*
���� 1. ���� + ���� ����

- �ڵ� ���� ������ �����.

- Ŭ������ 5�� �̻�

- �÷��̾� �ɷ�ġ�� 7�� (�ʼ� �ɷ�ġ : ��)
�� �� �ɷ�ġ�� ���� ũ��Ƽ�� �߻�

- ������ ���� 3����
�� ��з� : ����, ��, �Ǽ��縮, ����)
�� �ߺз� : ��з��� �ش��ϴ� �׸�� ������ 2����
�� ���� : ���� �ð��� ������ �ǽ� ����� �������� �����.

- �÷��̾� ��ų 2�� �̻� / �� ��ų�� 1�� �̻�
�� ��ų�� ��Ÿ�� ���� ��Ų��.

- ��Ʈ�� ������ ����� �� ��Ʈ�� Ȱ���Ѵ�.
*/

void main()
{
	int suriken[16 * 16] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,8,8,8,0,0,0,0,
	0,0,0,0,0,0,0,0,8,15,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,0,0,0,0,0,0,
	0,8,0,0,0,0,0,8,15,0,0,0,0,0,0,0,
	0,8,15,0,0,0,0,8,15,0,0,0,0,0,0,0,
	0,8,15,15,0,0,15,15,15,15,0,0,0,0,0,0,
	0,0,8,15,15,15,15,15,15,15,8,8,0,0,0,0,
	0,0,0,0,8,8,15,15,0,15,15,15,15,8,0,0,
	0,0,0,0,0,0,15,15,15,15,0,0,15,15,8,0,
	0,0,0,0,0,0,0,15,8,0,0,0,0,15,8,0,
	0,0,0,0,0,0,0,15,8,0,0,0,0,0,8,0,
	0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,15,8,0,0,0,0,0,0,0,0,
	0,0,0,0,8,8,8,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};

	Report12_MainGame* mg = new Report12_MainGame;
}