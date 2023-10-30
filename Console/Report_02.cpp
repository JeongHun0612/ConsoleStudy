#include <iostream>
#include <time.h>
#include <Windows.h>

/*
���� 1. ������ �����

- ������ ������, ������ �ٸ� ���� �� �� + �Ǽ��縮����..
 �� 5������ ����� ȭ�鿡 ���

- ��µ� ȭ�鿡�� ������ ������ ���� ���� + Ư���� �Բ� �����ȴ�.

- �ʼ� : ���� 1�� + �� 1�� + �Ǽ��縮 1��
 �� �÷� ��Ʈ
 �� ���� ���� ������ �� �������� �߰��Ѵ�.


���� 2. ���� ���� ���

- 1 ~ 5������ �������� -> int
- 6 ~ 19������ �������� -> int
- 23 ~ 189 ������ �������� -> int
 �� ��, ���� ������ �����Ͷ�

 ���� ����. �ݺ���

 - �ݺ����� ������ ���ҿ� ���ؼ� ����

 - ��Ʈ�� ����´�.
*/

// �÷��� ��� ����
#define BLACK		  0
#define DARK_BLUE	  1
#define DARK_GREEN	  2
#define DARK_SKYBLUE  3
#define DARK_RED	  4
#define DARK_PURPLE	  5
#define DARK_YELLOW	  6
#define GRAY		  7
#define DARK_GRAY	  8
#define BLUE		  9
#define GREEN		  10
#define SKYBLUE		  11
#define RED			  12
#define PURPLE		  13
#define YELLOW		  14
#define WHITE		  15

using namespace std;
using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

void main()
{
#pragma region ���� 1. ������ �����
	printf("���� 1. ������ �����\n\n");

	int weaponPrice1, weaponDamage1;
	int weaponPrice2, weaponDamage2;
	int weaponPrice3, weaponDamage3;
	int weaponPrice4, weaponDamage4;
	int weaponPrice5, weaponDamage5;

	int armorPrice1, armorDefense1;
	int armorPrice2, armorDefense2;
	int armorPrice3, armorDefense3;
	int armorPrice4, armorDefense4;
	int armorPrice5, armorDefense5;

	int accePrice1, acceStat1;
	int accePrice2, acceStat2;
	int accePrice3, acceStat3;
	int accePrice4, acceStat4;
	int accePrice5, acceStat5;

	weaponPrice1 = 1414, weaponDamage1 = 30500;
	weaponPrice2 = 1290, weaponDamage2 = 30400;
	weaponPrice3 = 1252, weaponDamage3 = 29800;
	weaponPrice4 = 1375, weaponDamage4 = 33900;
	weaponPrice5 = 1143, weaponDamage5 = 33700;

	armorPrice1 = 34500, armorDefense1 = 7656;
	armorPrice2 = 28900, armorDefense2 = 6380;
	armorPrice3 = 24200, armorDefense3 = 5104;
	armorPrice4 = 32300, armorDefense4 = 2552;
	armorPrice5 = 27500, armorDefense5 = 3828;

	accePrice1 = 26800, acceStat1 = 169;
	accePrice2 = 27200, acceStat2 = 172;
	accePrice3 = 25400, acceStat3 = 185;
	accePrice4 = 31500, acceStat4 = 153;
	accePrice5 = 33000, acceStat5 = 163;


	// ���� ���� ----------------------------------------------
	printf("���� ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : �ų��� ¡ǥ : Į����\n");
	printf("���� : �Ұ�\n");
	printf("���� : %dG\n", weaponPrice1);
	printf("������ : %d\n", weaponDamage1);
	printf("Ư�� : ���� �� 5% Ȯ���� HP MAX + 1000 ���� (�ִ� ��ø 5ȸ)\n");
	printf("----------------------------------------------------------------\n");
	
	printf("�̸� : �±�õ����\n");
	printf("���� : ��\n");
	printf("���� : %dG\n", weaponPrice2);
	printf("������ : %d\n", weaponDamage2);
	printf("Ư�� : ���� �� ���� ����� �߻��Ͽ� ��� �ӵ� 25% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : �ǵ���Ͼ� �÷���\n");
	printf("���� : �б�\n");
	printf("���� : %dG\n", weaponPrice3);
	printf("������ : %d\n", weaponDamage3);
	printf("Ư�� : ���� �� �ǵ���Ͼ��� �Ҳ� ���� (�ִ� 10ȸ)\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ���콺 �̹�����\n");
	printf("���� : ���\n");
	printf("���� : %dG\n", weaponPrice4);
	printf("������ : %d\n", weaponDamage4);
	printf("Ư�� : ���� �� ������ ������ 35% �߰� ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ���� �ٴ� : �ٵ峪��\n");
	printf("���� : ����\n");
	printf("���� : %dG\n", weaponPrice5);
	printf("������ : %d\n", weaponDamage5);
	printf("Ư�� : ���� �� 10% ���Ӽ� �߰� ������\n");
	printf("----------------------------------------------------------------\n");

	// �� ���� ----------------------------------------------
	cout << endl;
	printf("�� ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ���ǽ��� ����\n");
	printf("���� : ����\n");
	printf("���� : %dG\n", armorPrice1);
	printf("���� : %d\n", armorDefense1);
	printf("Ư�� : HP�� 30% ������ ��� �޴� ���� 15% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ���� ����\n");
	printf("���� : ����\n");
	printf("���� : %dG\n", armorPrice2);
	printf("���� : %d\n", armorDefense2);
	printf("Ư�� : ���� ���� �� 30�� ���� ��� �ӵ� 25% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ������ ����\n");
	printf("���� : �Ӹ����\n");
	printf("���� : %dG\n", armorPrice3);
	printf("���� : %d\n", armorDefense3);
	printf("Ư�� : ��ų ���ݷ� 32% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : �ո��� ����\n");
	printf("���� : ��Ʈ\n");
	printf("���� : %dG\n", armorPrice4);
	printf("���� : %d\n", armorDefense4);
	printf("Ư�� : �κ��丮 ���� �ѵ� +3kg\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : Ż������ ����\n");
	printf("���� : �Ź�\n");
	printf("���� : %dG\n", armorPrice5);
	printf("���� : %d\n", armorDefense5);
	printf("Ư�� : �̵��ӵ� 22% ����\n");
	printf("----------------------------------------------------------------\n");

	// �Ǽ��縮 ���� ----------------------------------------------
	cout << endl;
	printf("�Ǽ��縮 ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ��並 �ӱ��� �̽�\n");
	printf("���� : ����\n");
	printf("���� : %dG\n", accePrice1);
	printf("�ɷ�ġ : ���ŷ� +%d\n", acceStat1);
	printf("Ư�� : ��ų ���ݷ� 10% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : �޺��� ���δ� ����\n");
	printf("���� : �����\n");
	printf("���� : %dG\n", accePrice2);
	printf("�ɷ�ġ : ü�� +%d\n", acceStat2);
	printf("Ư�� : ��� �Ӽ� ��ȭ + 28\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ������ ���δ� ������\n");
	printf("���� : ����\n");
	printf("���� : %dG\n", accePrice3);
	printf("�ɷ�ġ : ���� +%d\n", acceStat3);
	printf("Ư�� : ��� ���� 15~30���� ��� ��ų ��Ÿ�� ȸ�� �ӵ� 30% ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ������ ���� ����\n");
	printf("���� : ������\n");
	printf("���� : %dG\n", accePrice4);
	printf("�ɷ�ġ : �� +%d\n", acceStat4);
	printf("Ư�� : ������ ���� 10% ��ȣ�� ����\n");
	printf("----------------------------------------------------------------\n");

	printf("�̸� : ������ ���� �ٴ�\n");
	printf("���� : �Ͱ���\n");
	printf("���� : %dG\n", accePrice5);
	printf("�ɷ�ġ : ���� +%d\n", acceStat5);
	printf("Ư�� : ��ų ���� �� 30�� ���� ��� �ӵ� 5% ����\n");
	printf("----------------------------------------------------------------\n");
#pragma endregion

#pragma region ���� �÷� ��Ʈ
	TextColor(WHITE, WHITE); printf("��������������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("������������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("����������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("���������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");

	TextColor(WHITE, WHITE); printf("��������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����"); printf("\n");
	TextColor(WHITE, WHITE); printf("������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������"); printf("\n");
	TextColor(WHITE, WHITE); printf("����������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������"); printf("\n");

	TextColor(WHITE, WHITE); printf("���������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������"); printf("\n");
	TextColor(WHITE, WHITE); printf("��������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���������"); printf("\n");
	TextColor(WHITE, WHITE); printf("������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����������"); printf("\n");

	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(YELLOW, YELLOW); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(DARK_SKYBLUE , DARK_SKYBLUE); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("��������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(YELLOW, YELLOW); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("��"); TextColor(WHITE, WHITE); printf("��������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(YELLOW, YELLOW); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(YELLOW, YELLOW); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("�����"); TextColor(WHITE, WHITE); printf("��������������"); printf("\n");

	TextColor(WHITE, WHITE); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(YELLOW, YELLOW); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(WHITE, WHITE); printf("������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���");TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("�����"); TextColor(WHITE, WHITE); printf("��������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("��������������������������"); printf("\n");
#pragma endregion

#pragma region �� �÷� ��Ʈ
	TextColor(WHITE, WHITE); printf("�����������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("���������������������"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("�������������������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");

	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("���������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("���������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");

	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("���������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("���������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("���");	printf("\n");
	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("��������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����");	printf("\n");
	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����");	printf("\n");
	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����");	printf("\n");

	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�������������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����");	printf("\n");
	TextColor(WHITE, WHITE); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�����������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����");	printf("\n");
	TextColor(WHITE, WHITE); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("���������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������");	printf("\n");
	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������");	printf("\n");

	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_RED, DARK_RED); printf("�������"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������"); printf("\n");
	TextColor(WHITE, WHITE); printf("��������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(WHITE, WHITE); printf("��������"); printf("\n");
	TextColor(WHITE, WHITE); printf("���������"); TextColor(DARK_GRAY, DARK_GRAY); printf("�������"); TextColor(WHITE, WHITE); printf("���������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����������������������"); printf("\n");
#pragma endregion

#pragma region �Ǽ��縮 �÷� ��Ʈ
	TextColor(WHITE, WHITE); printf("�������������������"); printf("\n");
	TextColor(WHITE, WHITE); printf("����������"); TextColor(DARK_BLUE, DARK_BLUE); printf("�������"); TextColor(WHITE, WHITE); printf("�����"); printf("\n");
	TextColor(WHITE, WHITE); printf("����������"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(BLUE, BLUE); printf("��"); TextColor(WHITE, WHITE); printf("��"); TextColor(BLUE, BLUE); printf("���"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("����"); printf("\n");
	TextColor(WHITE, WHITE); printf("��������"); TextColor(DARK_BLUE, DARK_BLUE); printf("����"); TextColor(BLUE, BLUE); printf("���"); TextColor(WHITE, WHITE); printf("��"); TextColor(BLUE, BLUE); printf("���"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("��"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(BLUE, BLUE); printf("�������"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("���"); printf("\n");

	TextColor(WHITE, WHITE); printf("�������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(BLUE, BLUE); printf("�������");  TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("����"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(BLUE, BLUE); printf("������");  TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(BLUE, BLUE); printf("�����"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("����"); TextColor(GRAY, GRAY); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(DARK_BLUE, DARK_BLUE); printf("�����"); TextColor(WHITE, WHITE); printf("��"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("���"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("��"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("����"); printf("\n");

	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(DARK_BLUE, DARK_BLUE); printf("��"); TextColor(WHITE, WHITE); printf("����"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("����"); TextColor(WHITE, WHITE); printf("����"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�����"); printf("\n");
	TextColor(WHITE, WHITE); printf("��"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������"); printf("\n");
	TextColor(WHITE, WHITE); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("����"); TextColor(GRAY, GRAY); printf("���"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("�������"); printf("\n");

	TextColor(WHITE, WHITE); printf("����"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(GRAY, GRAY); printf("������"); TextColor(DARK_GRAY, DARK_GRAY); printf("��"); TextColor(WHITE, WHITE); printf("��������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�����"); TextColor(DARK_GRAY, DARK_GRAY); printf("������"); TextColor(WHITE, WHITE); printf("���������"); printf("\n");
	TextColor(WHITE, WHITE); printf("�������������������");
#pragma endregion

	TextColor(WHITE, BLACK);
	cout << endl;
	cout << endl;


#pragma region ���� 2. ���� ���� ���
	printf("���� 2. ���� ���� ���\n");
	printf("-----------------------------------------\n");

	srand(time(NULL));

	int randNum;

	// rand() % (���� �ִ밪 - ���� �ּҰ� + 1) + ���� ���۰�
	// + 1�� �ϴ� ���� : ������ ���� 0���� ������ ����

	randNum = rand() % (5 - 1 + 1) + 1;
	printf("1 ~ 5������ ���� ���� : %d\n", randNum);
	cout << endl;

	randNum = rand() % (19 - 6 + 1) + 6;
	printf("6 ~ 19������ ���� ���� : %d\n", randNum);
	cout << endl;

	randNum = rand() % (189 - 23 + 1) + 23;
	printf("23 ~ 189������ ���� ���� : %d\n", randNum);
	cout << endl;
#pragma endregion
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
