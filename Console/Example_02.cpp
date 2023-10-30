#include <iostream>
// C��� �������
#include <time.h>

#pragma region �ڷ��� + ���� ����
/*
�� �ڷ���

- ������ ������ �ǹ��ϸ� ���� �ڷ���(Data Type)�̶�� �����ϸ� �ȴ�.

��������?

- ���� �� �ִ� ���ڳ� �����͸� �ǹ�
- ��ǻ�ͷ� �Ͽ��� ���� ������ �� �ִ� �޸𸮰����� �ٴ� �̸�
- ������ �̿��ϸ� Ư�� ���� ���� �� �ش� ���� �̿��� �������� ������ ó���ϴ°��� �����ϴ�.

�� C / C++ ���� �����ϴ� �ڷ��� ����

- ������
�� �Ҽ��� ���� ���� ǥ���ϱ� ���� �ڷ���

- �Ǽ���
�� �Ҽ����� �����ϴ� ���� ǥ���ϱ� ���� �ڷ���

- ������
�� ���ڸ� ǥ���ϱ� ���� �ڷ���

- ����
�� �� / ������ �Ǻ��ϴ� �ڷ���

	��C / C++ ��� ������ �ڷ����� ����
	- short		(2byte)
	- int		(4byte)
	- long		(4byte ~ 8byte)
	- long long	(8byte)

	��C / C++ ��� �Ǽ��� �ڷ����� ����
	- float		(4byte)
	- double	(8byte)

	��C / C++ ��� ������ �ڷ����� ����
	- char		(1byte)

	��C / C++ ��� ���� �ڷ����� ����
	- bool		(1byte -> ��(1) / ����(0)�� ��Ÿ���� �ڷ���)

- C ���� ������ �ش��ϴ� �� �Ǵ� �����̶�� �ڷ����� ������ �������� �ʾҴ�. (������ C���� bool �ڷ����� �ִ�.  -> C99	��)

- �Ϲ������� ���� 0�� ����, 0�� �����ϴ� ������ ������ ������ ���״�.

- ������ C++ ���� �� �Ǵ� ������ ��Ÿ���� Ű���� true / false�� ���ؼ� �� �Ǵ� ������ ǥ���ϴ°��� ����

- C/C++ �ڷ����� �⺻������ ������ ǥ���ϴ°��� ���������� ��쿡 ���� ������ ǥ������ �ʴ� ��ſ� ����� �� �� ũ�� ǥ���ϴ� ����� �ִ�.
	�� Ű���� : signed / unsigend

EX)
1, 10, 100, 2453 -> ������ -> int
123.45678 / 3.141592 -> �Ǽ��� -> float
�� / ���� -> ���� -> bool
 �� true : ���� �ǹ��ϴ� 1byte ������
 �� flase : ������ �ǹ��ϴ� 1byte ������

 �� bool �ڷ����� ������ �;� �� ��ġ�� ���� �Ǹ� ���� 1�� 0���� ��ȯ�� �ɻ� ���� ���� 0�� 1�� �ƴϴ�.

 �� C / C++ �ڷ����� ũ��
 
 �ڷ��� Ÿ��		ũ��						����
 short			2byte		-32767 ~ 32768(7) -> ��� �������� �ٸ�
 int			4byte		�� -21�� ~ 21������� ���� ��´�.
 unsigned int	4byte		�� 0 ~ 43������� ���� ��´�.

 flaot			4byte		�Ҽ��� 6�ڸ����� (����ϴ� OS�� ���� ���� ���� -1 ~ +1 ����)
 double			8byte		�Ҽ��� 15�ڸ����� (����ϴ� OS�� ���� ���� ���� +1 ����)

 char			1byte		������ ��´�. (����)
 unsigned char	1byte		���� ������ ��´�. (����)

 bool			1byte		0(����) / 1(��)
 

 �� ���� ����?

 - ���� �����̶�?
  �� ���� ������ �� �ִ� �޸� ������ �̸��� �����ϴ°� ���Ѵ�.

 �⺻���� : ���� ����(����) ������

 EX)
 - int Num;
 - int Num = 10;

 - ������ �������� ���ؼ� Num �̶�� �̸����� �޸� ������ �Ҵ�
 - int Num = 10; �� �༮�� �ܼ��� Num�� 10�� �����ϴ°� �ƴ϶� Num�� �ǹ��ϴ� �޸� ������ 10�� �־��� �ǹ̶�� �� �� �ִ�.



*/
#pragma endregion

// ���� : �ӵ� ������.
// ���� : �޸� ��뷮�� �þ��.

// using ������ : ������ ���ӽ����̽��� ��� ��Ī�� �� ������ �ִ� �������� ������ �Ҽ� �������� ��û�� �ٷ� ����� �� �ִ�.

// std: C++ ǥ�ؿ��� �����ϰ� �ִ� �����͵��� std�ȿ� ���� �ִ�.
using namespace std;

using std::cin;
using std::cout;
using std::endl;

namespace A
{
	namespace B
	{
		namespace C
		{
			int Player;
			//int Num;
		}
		
	}
}

namespace ABC = A::B::C;

void main()
{
	//int Player;

	//A::B::C::Player;
	//ABC::Player;

	int TestNumA = true;
	int TestNumB = false;
	int TestNumResult = TestNumA + TestNumB;

	cout << "boolean : " << TestNumResult << endl;

	cout << endl;

	// ���� �ʱ�ȭ ���
	//  �� �پ��� ����� ���������� �Ϲ������δ� 2������ ����Ѵ�.

	// int�� ���� ����
	int Num0;
	// ���� ���� �� ���� (�Ҵ�)
	Num0 = 10;

	// ������ ����� ���ÿ� �ʱ�ȭ�� ����
	int Num1 = 3;
	int Num2 = 6;
	int Total;

	int Num3;
	int Num4;
	int Num5;
	int Num6, Num7, Num8;
	Num6 = Num7 = 100;

	// ���� C / C++ ������ sizeof Ű���带 �̿��ϸ� ���� + �ڷ����� ũ�⸦ ����ϴ� ���� �����ϴ�.
	cout << "���� 2�� ������ : " << sizeof(2) << endl;
	cout << "���� 1�� ������ : " << sizeof(1) << endl;
	cout << "true�� ������ : " << sizeof(true) << endl;
	cout << "false�� ������ : " << sizeof(false) << endl;

	cout << endl;

	// ���� �ڷ����� �˾����� �پ��Ѱ��� �� �غ� �� �ִ�.
	int nValue = 0;

	// C++
	cout << "���ڸ� �Է��ϼ��� : " << endl;
	//cin >> nValue;

	cout << "���� �Է��� ���� : " << nValue << endl;

	cout << endl;

	// C
	printf("���� �Է� : ");
	//scanf_s("%d", &nValue);

	cout << endl;

	short ValueA = 10;
	int ValueB = 20;
	long ValueC = 30;
	long long ValueD = 40;
	float fValueA = 3.14f;
	double fValueB = 3.14;

	// C
	printf("C��� short : %d ������ : %d\n", ValueA, sizeof(ValueA));
	printf("C��� int : %d ������ : %d\n", ValueB, sizeof(ValueB));
	printf("C��� long : %d ������ : %d\n", ValueC, sizeof(ValueC));
	printf("C��� long long : %d ������ : %d\n", ValueD, sizeof(ValueD));
	printf("C��� float : %f ������ : %d\n", fValueA, sizeof(fValueA));
	printf("C��� double : %f ������ : %d\n", fValueB, sizeof(fValueB));
	cout << endl;

	// C++
	cout << "C++ short : " << ValueA << ", " << "������ : " << sizeof(ValueA) << endl;
	cout << "C++ int : " << ValueB << ", " << "������ : " << sizeof(ValueB) << endl;
	cout << "C++ long : " << ValueC << ", " << "������ : " << sizeof(ValueC) << endl;
	cout << "C++ long long : " << ValueD << ", " << "������ : " << sizeof(ValueD) << endl;
	cout << "C++ float : " << fValueA << ", " << "������ : " << sizeof(fValueA) << endl;
	cout << "C++ double : " << fValueB << ", " << "������ : " << sizeof(fValueB) << endl;
	cout << endl;


	/*
	�� ���� ǥ���

	1. �밡����

	- ���� ������������ ������� �ڵ��Ҷ� �� ������ � �������� �˱� ���� ���� ����ϵ��� �� �������°� ���ϴ� ���ڸ� �����տ� �ٿ���.

	EX)
	int num			<=>		nNum;
	float ValueA	<=>		fValueA;

	- ���� ����Ƽ�� ��Ŀ����� ���� ����� ���� �ʴ´�.
	 �� ź�� ����� ��ü������� ���� �ʱ� ������ (��������)
		�� ������ ���������� �ٽ� ����� �ǰ� �ִ� �߼�
	

	2. ī���

	- ��ü�������� ����� �ڵ����� ��ȯ�� �Ǹ鼭 �������� ���� �� �ܾ��� �ձ��ڸ� ǥ���ϴ� ���

	EX)
	int playerselectnumber
	int playerSelectNumber

	
	3. �Ľ�Į ���̽�

	- �ձ��ڸ� �빮�ڷ�
	int PlayerSelectNumber

	4. ������ũ

	- �ܾ ���ٷ� ��� ǥ���ϴ� ���
	 �� C/C++���� �����ϴ� ���
	
	int player_select_number
	int Player_Select_Number
	*/

	// �� ���� �õ�

	// ���� �õ� �ʱ�ȭ
	srand(time(NULL));

	int numR;

	// % : ������ ������
	// �� ������ �������� �����ش�.
	// �� �� -> �����⸦ ���ؼ�


	numR = rand() % 5; // 0, 1, 2, 3, 4

	// () / {} / []
	// ?
	// �����Ⱚ ���
	cout << numR << endl;

	int weaponA = 0;

	// ?
	
	// 20 ~ 25
	weaponA = rand() % 5 + 20;
	cout << "���� �������� �� : " << weaponA << endl;
}


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