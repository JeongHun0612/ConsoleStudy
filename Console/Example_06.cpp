 #include <iostream>

// STL -> string
//  �� �޸� ����̳� ���ڿ��� �ٷ� �� �ִ� �Լ����� �����Ѵ�.
#include <string>

// wchar -> �����ڵ� ���ڿ��� �ٷ궧 ����Ѵ�.
#include <wchar.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

#pragma region �Լ�
/*
�� �Լ�

- ����� ���Ǳ� (������ ������ ����.)

�� ����ϴ� ����

- �ߺ� ���� ����
- ���� ������
- ������ ���
- ����

�� ���� ���
��ȯ �ڷ��� �Լ��̸� (�Է� �ڷ���(����(��))
{	<- �Լ� ����

	�Լ� ����

}	<- �Լ� ��

- �Լ� �̸� : �� �״�� �Լ��� �̸� (�Լ��� ����(ȣ��)�� �� ���)
- �μ�(����) : �Լ��� �ؾ� �� ���� ���λ����� �����ϸ� �Լ��� �۾��Ÿ�
- ��ȯ�ڷ��� : �Լ��� ����(��ȯ)�ϴ� ���� ������ ���̸� �Լ��� �۾� ���
- �Լ� ���� : {} �ȿ� �Լ��� ���� �ڵ尡 �����Ѵ�.

�� �Լ��� �̸��� �⺻������ �����ؾ� �Ѵ�.
 �� ������ �̸��� �Լ��� N�� �̻� �����ϴ°��� �Ұ����ϴ�.

�� void�� �Լ���?

- ����(��ȯ) �� ���� ���� �Լ�
- �Լ��� �Է� �Ǵ� ����� ���� ��� void Ű���带 ���ؼ� �ش� ��/����� ���ٶ�� ���� ����Ѵ�.

�� �츮�� �˰� �𸣰� ����� �Լ���
 �� rand() : �������� �̴� "�Լ�"
 �� sleep(1000) : 1�ʰ� ���߰� ���ִ� "�Լ�"

�� �Լ� ������ �⺻������ �����Լ� ���ʿ� �Ѵ�.

�� C / C++ ����� �Լ� ������ �ʿ��� ����

- C / C++ ����� �����Ϸ��� �⺻������ ������ ������ ������ �Ʒ��� �ؼ��Ѵ�.

- �̶� �����Ϸ��� �̹� ����ģ ���ο��� ���ԵǾ� ���� ���� �Լ��� ȣ���� ��� �����Ϸ��� �̿� ���� ������ �𸣱� ������ ������ �߻��Ѵ�.

- �׷��� ������ �Լ��� ������ ���ؼ� �����Ϸ����� �ش� �Լ��� ���� ��򰡿� �����Ѵٴ� ���θ� �˷���� �Ѵ�.

- ��, �Լ��� ����� ���ǰ� �ݵ�� ������ ���Ͽ� �������� �ʾƵ� �ȴٴ°��� �ǹ�

- �Լ��� ������ �ߺ����� ����ϴ°��� ���������� �Լ��� ���Ǵ� �ݵ�� �����ؾ� �Ѵ�.

*/
#pragma endregion

// �Լ� ����
void OutputValueA();

// ��Ʈ���� ������ ��ȯ X
void OutputValueB(int numA);
void OutputValueB(int numA, int numB);

// ���ڿ�
void OutputSring(string str);
string GetStringFunc(string strA, string strB);
int CheckingString(string strA, string strB);

// ��Ģ ����
int GetAddValue(int numA, int numB);

int GetSubValue(int numA, int numB);
int GetMultipleValue(int numA, int numB);
int GetDivideValue(int numA, int numB);

// ������ ������ �Լ��� �̸��� �⺻������ �ߺ��� ���� �ʾƾ� �Ѵ�.
//  �� �̰� ���� �ذ��� �� ������?

namespace NS_FUNC_A
{
	void Sample()
	{
		cout << "���� �ٷ� SampleA �Լ�" << endl;
	}
}

namespace NS_FUNC_B
{
	void Sample()
	{
		cout << "���� �ٷ� SampleB �Լ�" << endl;
	}
}

void main()
{
	NS_FUNC_A::Sample();
	NS_FUNC_B::Sample();

	cout << '\n';

	OutputValueA();
	OutputValueB(5);
	OutputValueB(1, 9);

	OutputSring("������ �ʹ� ��մ�.");

	// =============================================

	int nResultA = GetAddValue(18, 25);
	OutputValueB(nResultA);

	string sResultB = GetStringFunc("��մ�", "��վ�");
	OutputSring(sResultB);

	nResultA = CheckingString("���� �� ���ּ���", "���� �� ���ּ���");

	OutputValueB(nResultA);

	cout << '\n';

	int numL = 0;
	int numR = 0;

	cout << "���� (2��) �Է� : " << endl;
	cin >> numL >> numR;

	printf("%d + %d = %d\n", numL, numR, GetAddValue(numL, numR));
	printf("%d - %d = %d\n", numL, numR, GetSubValue(numL, numR));
	printf("%d * %d = %d\n", numL, numR, GetMultipleValue(numL, numR));
	printf("%d / %d = %d\n", numL, numR, GetDivideValue(numL, numR));

	/*
	- ��ó�� �Լ��� �پ��� ������ ���� �� �ִ�.

	�� C / C++ ����� �Լ� ����

	- �Է� O, ��� O
	- �Է� O, ��� X
	- �Է� X, ��� O
	- �Է� X, ��� X

	EX)
	void ShowInfo(int nAge, char* psName);
	 �� �Է� O / ��� X
	int GetRandomValue(void);
	 �� �Է� X / ��� O
	void SomeFunction(void);
	 �� �Է� X / ��� X
	*/
}


/*
- ������ �Է� �����Ϳ� ��� �����Ͱ� ������ �ش� ������ �Լ���� ��Ī�Ѵ�.
  ���� C / C++ ���� �Լ� ������ ������ �Ǳ� ������ ��ǻ���� ��ɹ��� �ۼ��ϱ� ���ؼ��� �ݵ�� �ش� ������ �Լ� �ȿ� �ۼ��� ��� �Ѵ�.
*/

// {} �������� ���
void OutputValueA()
{
	cout << "���� �ٷ� �Լ���!" << endl;
}

void OutputValueB(int numA)
{
	cout << numA << endl;
}

void OutputValueB(int numA, int numB)
{
	cout << numA << numB << endl;
}

void OutputSring(string str)
{
	cout << str << endl;
}

string GetStringFunc(string strA, string strB)
{
	// ��Ģ ���� ���� X
	return strA + strB;
	// �⺻������ string�� ���ڿ��� �ٷ� �� �ִ� �پ��� ����� �����Ѵ�.
	// append() : n ���ڿ� �ڿ� n2 ���ڿ��� �ٿ� ���´�.
	//strA.append(strB);

	// ���� -> ������ -> �޸�
}

int CheckingString(string strA, string strB)
{
	//�Լ��� return Ű���带 ���ؼ� �Լ��� ���� �Ǵ� ������� ��ȯ�ϴ°��� �����ϸ� �Լ��� ��� ���� �Է°��� �޸� �ϳ��� ������� ��ȯ�� �� �ִ�.

	// ���� 1 / �ٸ��� 0 ��ȯ
	return strA == strB;
}

int GetAddValue(int numA, int numB)
{
	return numA + numB;
}

int GetSubValue(int numA, int numB)
{
	return numA - numB;
}

int GetMultipleValue(int numA, int numB)
{
	return numA * numB;
}

int GetDivideValue(int numA, int numB)
{
	return numA / numB;
}
