// ���� �ּ� : �ڵ��� ������ ���� �ʰ� �޸� �����.
// ���� �Ǵ� Ÿ���� ���ؼ� \
�ּ� ó��

/*
�����ּ�
�����ּ�
�����ּ�
*/

// ���� : ���� ����, �� ����


/*
- ���� �Լ�(������)
�� C/C++ ���� �ۼ� �Ǿ� �ִ� ���α׷��� ó�� ����Ǵ� �κ�

�� C/C++ ���� ���α׷��� ó�� ����Ǳ� ���ؼ� �ݵ�� main �Լ��� �����ϰ� �־�� �Ѵ�.

�� main �Լ��� �����ϰ� ���� �ʴٸ� ���α׷� ���� ��ü�� �Ұ����ϴ�.


�� C/C++ �� ���α׷����� ��ȯ�Ǳ� ���ؼ� ��ġ�� ū �ܰ�

- ��ó����
- ������
- �����
- ��ũ
- ��
*/

#pragma region ���α׷��� ���
/*
-------------------------------------------------------------------------------------------------------------------------------------------------------------

�� ���α׷����̶�?
- Programmning. Program�� ing�� �پ����� ���� ���α׷��� �ϰ� �ִ� ��� ������ ������ �� �ִ�.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

�� ���α׷��� ����?
- ��ǻ�Ϳ� ��ȭ �Ǵ� ����� �� �� �ִ� �Ϸ��� ��ɹ��� �ۼ��� �� �ִ� �� �ǹ��Ѵ�.
�� ���α׷��� �� �̿��ϸ� ���α׷��� ����� ���� ����

- ���α׷��� ���� �پ��� �� ���������� ũ�� 2������ �з��� �� �ִ�.
�� 1. Ư�� ��� ������ ����ȭ �� ���
�� 2. ������ ���

-------------------------------------------------------------------------------------------------------------------------------------------------------------

�� ���α׷��� �� ��ǻ�Ϳ��� �����ϴ� ���
- C/C++ ���� �ۼ��Ǿ� �ִ� �ڵ�� ��ǻ�Ͱ� ������ �� ���� ��ɹ��̱� ������
  C/C++ ���� �߰����� �� �ؼ����ִ� ������ ������ �ϴ� �� ���𰡰� �ʿ��ϴ�.

�� �װ� �ٷ� "�����Ϸ�"
�� �����Ϸ��� �ش� �ڵ带 ��ǻ�Ͱ� ������ �� �ִ� ���� ��ȯ�ϴ� ������ �Ѵ�.

�� ��, �����Ϸ��� ���α׷��� ���� ��ǻ�� ���̿��� �뿪�� ������ ���ֱ� ������ ���α׷��� �� �ۼ��ϴ� �����
   ��ǻ���� �� �𸥴� �ϴ��� ��ǻ�Ϳ��� ����� �����°��� �����ϴ�.

�� �����Ϸ� != ����������

-------------------------------------------------------------------------------------------------------------------------------------------------------------

�� ���α׷��� ��� �� ���
- ���α׷��� ����� ���� ������ ������ �����ε� ��� ������ �������̴�. (��� ����...)
�� ������ ����� ũ�� 4������ �з��� �� �ִ�.

1. ������ ���α׷��� (�������� ���α׷���) -> C���
�� ���� �ʱ���� ���� ���
�� �ڵ��� �帧�� ���� ���α׷��� �Ѵ�.
�� �� ����� ���α׷��� �帧�� ���󰡱� ������ ���������� ���ϰ� �ڵ尡 �������� ����� �ֱ� ������ ���������� ���� �����.


2. ������ ���α׷��� (�Լ� ���α׷���)
�� ������ ���α׷����� ������ �����ϱ� ���� ���� ���
�� �ڵ��� ������ "���" ������ ���� ���
�� �Լ� ���� ���α׷����̶�� �θ��� ������ ���α׷��ֺ��� ���������� �����ϴٴ� ������ �����Ѵ�.
	�� ������ �������� �ش� ������ �߻��� ��ɸ� ���������� ���캸�� �Ǳ� ������.

�� �̷��� ��ɵ��� �ѵ� ���� ����̶�� ���·� ����� �̰� �ٷ� ���̺귯���� ������ �ؿԴ�.


3. ��ü���� ���α׷���
�� ���� �� ��İ��� �޸� �ڵ��� ������ "��ü" ������ ���� ���α׷��� �ϴ� ����� �ǹ��Ѵ�.
�� ��� ��󿡴� �Ӽ��� �޼��尡 �ְ� �̸� �ϳ��� ���� ��ü�� ����� ����� (���⼭ ���ϴ� ��󿡴� ���� ������ �ʴ°͵� ������ �ȴ�.)
�� ��ü���� ������� ����̳� ������ �� �پ��� ������ ���������� �װ� ���Ŀ� �ٷ���...


4. ������Ʈ ��� ���α׷���
�� ���� �ֱٿ� ������ ����
�� �ڵ��� ������ ��ü�� �ƴ� ������Ʈ ������ ���α׷��� �Ѵ�.
�� ��ü���� ���α׷����� ����̶�� ��ü�� ���α׷��� �ߴٸ� ������Ʈ ����� ����� ������ �ִ� ������Ʈ(�Ӹ�, ��, �ٸ� ���) ��ǰ���� ����ȭ�Ͽ� �ڵ��ϴ� �����
�� ������ ������Ʈ�� ���������� �����̴� ��ǰ�� �����Ƿ� �ٸ��� ���� �������� �ٿ��ָ� �Ȱų� �޸��� ���� �����ϸ� ������ ���Ե� �𸮾󿡼� �߱��ϴ� ���
�� ������ ���� ������Ʈ�� �����ϸ� �̰��� �߰��ϴ°����� ���ϴ� ����� �����ϰ� ������ �� �ִ�.

-------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#pragma endregion

// # : ���������
// ������� (C++ ���α׷��ֿ��� ���� �⺻���� �߿��� �������)
#include <iostream>

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


/*
�� iostream : ��, ����� ����ϴ� C++ ǥ�� ���̺귯��
- #include Ű����� �ش� ��ο� �ִ� ������ ������ �ܼ��ϰ� �����ϴ� ������ �Ѵ�.
- ǥ�� ���̺귯���� ���� <�������> �̷��� ����Ѵ�.
- ���α׷��� �� �ᱹ ����� ������� ������ �ͼ������ٸ� �뷫���� ���߰� �����ϴ�. (i -> input / o -> output)
- stream�� ���� ��ġ�� ����� �۾��� ����Ǵ°��� "�߻�ȭ" ��Ų��
- <iostream>�� ���ǵǾ� �ִ� cout, cin, endl
*/


// C++ �� ���� ������ �����Ѵ�.
// �� C++11 / ��� (C++ ������ ���� �߰� ����, ���� �� ����)
// �� .h ��������� ������
#include <Windows.h>

// ����� ���� ��� ����
// #include "NewActor.h" 

// ź���� ��� -> ��ȣ�� ����
// std ��� �̸��ȿ� ���ǵǾ� �ִ°��� �׳� ����ϰڴ�.
// �� �̸� ���� std�� ����Ȱ��� std��� �̸� ������ ���� ���� �����ϰڴٴ� ���� ����
// �⺻������ ���α׷��ֿ����� �̸� �浹�̶�°��� ����ϰ� �߻��Ѵ�.
// �� ���� �̸��� ��� �翬�� ������ ������ �߻��Ѵ�.
// �� �̸� �����ϱ� ���� namespace(�̸� ����)�̶�� ������ ������ �����Ѵ�.
using namespace std;

void TextColor(int font, int backGround);

void main()
{

	/*
	�� �ڵ� �ۼ��� �⺻
	�� ������ ������ ���� �ȴٸ�..

	1. ��Ÿ üũ
	2. ��, �ڸ� üũ�Ұ�
	3. ; �� �������� Ȯ��
	4. �� üũ

	- �����ݷ��� �ڵ��� ��ħǥ�� ����.
	�� Ư������ �����ϰ�� �ݵ�� ����ؾ� �Ѵ�.
	*/

	/*
	cout : ����ض� (C���� printf())
	�� console output

	cin : �Է��ض�
	�� console input (C���� scanf())

	endl : ���� �ٲ۴�. (����)


	<< : ��� ������
	>> : �Է� ������
	:: : �ȿ� �ִ�

	*/

	cout << "������ �°� ȯ���Ѵ�. ����" << endl;
	cout << "������ �°� ȯ���Ѵ�. ����" << endl;
	cout << "������ �°� ȯ���Ѵ�. ����" << endl;
	cout << "������ �°� ȯ���Ѵ�. ����" << endl;

	cout << "���� ��� : " << "�ֵ���ǥ�ȿ� ������ �ȴ�." << endl;
	cout << "���� ��� : " << 12345 << "�׳� ������ �ȴ�" << endl;


	/*
	�ڱ� �Ұ� ��� -> ������ ����
	�� �̸�, ����, ����ó, �ּ�, �̸���, ����, ���� ���� ȸ��, ����� ���� ����, ���
	*/

	cout << "---------------------------------------------------" << endl;
	cout << "�̸� : " << "������" << endl;
	cout << "���� : " << 28 << endl;
	cout << "����ó : " << "010-2610-3442" << endl;
	cout << "�ּ� : " << "���� ������ õ�߷� 23�� 43 ��������" << endl;
	cout << "�̸��� : " << "sjh960612@gmail.com" << endl;
	cout << "���� : " << "��� �ο� ������ ����ؼ� ���ϴ� ��ǥ �̷��" << endl;
	cout << "���� ���� ȸ�� : " << "���� �� �� �ִ� �ּ��� ȸ��" << endl;
	cout << "����� ���� ���� : " << "rpg" << endl;
	cout << "��� : " << "����, �뷡" << endl;
	cout << "---------------------------------------------------" << endl;

	printf("������ �°� ȯ���Ѵ�!\n");

	/*
	�� printf / scanf �Լ����� �̿�Ǵ� ���� ���ڶ�?

	- ���� ���ڴ� ���ڿ��� ��� �Ǵ� �Է��� ������ �ش� ���� ������ �ڸ��� �ٸ� ���� ��ü�ϱ� ���� �ڸ� �ű� ������ �ϴ� ���ڸ� �ǹ�
	���Ĺ��ڸ� �̿��ϸ� �����Ǿ� ���� �ʴ� ���ڿ��� ����� �� �ִ�.

	�� ���� ���� ����

	- %d : ��Ʈ�� ������ ��ü�ϴ� �뵵
	- %ld : ���� ������ ��ü�ϴ� �뵵
	- %c : char�� ��ü�ϴ� �뵵
	- %s : ���ڿ� �Է�
	- %f : float���� ��ü�ϴ� �뵵


	�� printf Ư������
	- \n : ���� ���� ���� / �ٹٲ�
	- \t : ������
	- \v : ������
	- \\ : \
	- \? : ?
	- \' : '
	- \" : "
	*/

	printf("������ ������ \"����\" ����!\n");

	//TextColor(BLACK, DARK_BLUE);
	//cout << "������������������������" << endl;
	

#pragma region ���� Ŀ��
	printf("------------------------------------------------------\n");
	printf("���� 1. �����ϴ� ĳ���� ��� I\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("------------------------------------------------------\n");
	
#pragma endregion

#pragma region ����Ĵ�
	printf("\n\n");
	printf("���� 1. �����ϴ� ĳ���� ��� I\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
	printf("�������������������������������\n");
#pragma endregion

#pragma region īī��
	printf("\n\n");
	printf("���� 2. �����ϴ� ĳ���� ��� II\n");
	TextColor(DARK_BLUE, BLACK); printf("������������");
	TextColor(GRAY, BLACK); printf("�������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("������");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("�����������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("��������������");
	TextColor(GRAY, BLACK); printf("��������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("��������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("�����������������");
	TextColor(GRAY, BLACK); printf("�������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("�������");
	TextColor(GRAY, BLACK); printf("�����������������������������");
	TextColor(DARK_BLUE, BLACK); printf("���������������");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("���������������������");
	TextColor(GRAY, BLACK); printf("���������������������������������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("�������������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_BLUE, BLACK); printf("�����������������������");
	TextColor(GRAY, BLACK); printf("�������������������������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("����������������������");
	TextColor(WHITE, BLACK); printf("��");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_BLUE, BLACK); printf("��������������������������");
	TextColor(GRAY, BLACK); printf("�������������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("��������������������������");
	TextColor(WHITE, BLACK); printf("����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_BLUE, BLACK); printf("�����������������������������������������������������������������������������������������");
	TextColor(WHITE, BLACK); printf("������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����������");
	TextColor(DARK_BLUE, BLACK); printf("�����������������������������������������������������������������������������������");
	TextColor(WHITE, BLACK); printf("���������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("��������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_BLUE, BLACK); printf("���������������������������������������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_BLUE, BLACK); printf("�����������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������������");
	TextColor(DARK_BLUE, BLACK); printf("���������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("�������");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("��������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���������������������������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��������������������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(YELLOW, BLACK); printf("����");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("������������");
	TextColor(WHITE, BLACK); printf("�������������");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("������������");
	TextColor(WHITE, BLACK); printf("���");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("������������������");
	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("������������������");
	TextColor(WHITE, BLACK); printf("���");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("������");
	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(DARK_RED, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("������");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(DARK_RED, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(DARK_RED, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(DARK_RED, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("�����");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(DARK_RED, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	printf("\n");

	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("������");
	TextColor(WHITE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������");
	printf("\n");


	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(DARK_RED, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(DARK_RED, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("������");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("����������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("�����������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��");
	TextColor(GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("���������");
	TextColor(DARK_GRAY, BLACK); printf("������");
	TextColor(WHITE, BLACK); printf("������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("��������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("�����������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("��������������");
	TextColor(DARK_GRAY, BLACK); printf("����������������");
	TextColor(WHITE, BLACK); printf("��������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("��������������������������");
	TextColor(DARK_GRAY, BLACK); printf("�����������������");
	TextColor(WHITE, BLACK); printf("������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������������������������������");
	TextColor(YELLOW, BLACK); printf("����");
	TextColor(WHITE, BLACK); printf("���������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("��");
	TextColor(WHITE, BLACK); printf("������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������������������������������������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("����");
	TextColor(DARK_BLUE, BLACK); printf("��������");
	TextColor(WHITE, BLACK); printf("����������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("��������������������������������������������");
	TextColor(DARK_GRAY, BLACK); printf("�������");
	TextColor(DARK_BLUE, BLACK); printf("�����������");
	TextColor(WHITE, BLACK); printf("�������������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("���");
	TextColor(DARK_GRAY, BLACK); printf("��������");
	TextColor(DARK_BLUE, BLACK); printf("��������������");
	TextColor(WHITE, BLACK); printf("����������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("�����");
	TextColor(DARK_GRAY, BLACK); printf("��������");
	TextColor(DARK_BLUE, BLACK); printf("����������������");
	TextColor(WHITE, BLACK); printf("��������������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("������������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("��������");
	TextColor(DARK_GRAY, BLACK); printf("��������");
	TextColor(DARK_BLUE, BLACK); printf("�������������������");
	TextColor(WHITE, BLACK); printf("�����������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("���������������������������������");
	TextColor(DARK_BLUE, BLACK); printf("����������");
	TextColor(DARK_GRAY, BLACK); printf("���������");
	TextColor(DARK_BLUE, BLACK); printf("����������������������");
	TextColor(WHITE, BLACK); printf("��������������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�����������������������������");
	TextColor(DARK_BLUE, BLACK); printf("��������������");
	TextColor(DARK_GRAY, BLACK); printf("���������");
	TextColor(DARK_BLUE, BLACK); printf("��������������������������");
	TextColor(WHITE, BLACK); printf("����������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(WHITE, BLACK); printf("�������������������������");
	TextColor(DARK_BLUE, BLACK); printf("������������������");
	TextColor(DARK_GRAY, BLACK); printf("���������");
	TextColor(DARK_BLUE, BLACK); printf("������������������������������");
	TextColor(WHITE, BLACK); printf("������");
	TextColor(YELLOW, BLACK); printf("���");
	TextColor(WHITE, BLACK); printf("����������������");
	printf("\n");

	TextColor(DARK_GRAY, BLACK); printf("�����������������������������������������������������������������������������������������������������");
	printf("\n");
#pragma endregion
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

/*
�� ���� ��� ������ �ݵ�� ����

����1. �����ϴ� ĳ���� ���

- ĳ���� ����� ����

- �ּ� ������� 30 x 30

����2. �����ϴ� ĳ���� ��� II

- 1���� ���������� �÷�Ǯ�ϰ� �����.

- �ּ� ������ 50 x 50

�� �� ���� ��� �ּ� ����� �Ű��� ��´�.

����3. ����Ÿ�ڿ��� ���(����)

- 150Ÿ �̻� ������

���� ����. C++ ���� + �������� ���� ����

- ��Ʈ�� ����´�.

*/

