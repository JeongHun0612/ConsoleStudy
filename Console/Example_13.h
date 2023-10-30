#pragma once
#include <iostream>
#include <string>

using namespace std;

using std::cout;
using std::cin;
using std::endl;


#pragma region ����� ���� �ڷ���
/*

�� ����� ���� �ڷ����̶�?

- ������ �ڷ����� ������� ���ο� �ڷ����� ������ ����� ���
 �� ����� ���� �ڷ����� Ȱ���ϸ� Ư�� �������� ������ ǥ���ϴ� ���� �����ϴ�.

�� C / C++ ����� ����� ���� �ڷ����� ����

- ������ (�ɺ��� ����� �����ϴ� �ڷ���)
- ����ü (Ư�� �������� ������ �����ϴ� �ڷ���) / ����ü�� Ŭ������ ����
- ����ü (Ư�� �������� ������ �����ϴ� �ڷ���) / Ư¡, �����, ����ü ����ü�� ����
- Ŭ���� (OOP���� Ư�� ��ü�� �����ϰ� �����ϴ� �ڷ���)

�� C : ����ü	/	C++ : Ŭ����

�� C / C++ ����� ������ ���� ���

EX) ǥ��� ���� -> �Ľ�Į
enum EUintType
{
	Unit_Type_A,
	Unit_Type_B,
	Unit_Type_C,
};


�� C / C++ ����� ����ü ���� ���

- �ϳ� �̻��� ������ ��� ���ο� �ڷ����� �����ϴ� ����
- C++������ Ŭ������ ���ԵǾ������� C������ ȣȯ�� ������ ����ü�� �״�� ����� �� �ִ�.
- C++ ����ü�� C����� ����ü�� ����� Ȯ���Ͽ� ������ Ŭ������ ������ ������ ����� ������.

EX)
struct STUnitData
{
	int m_nID;
	int m_nLevel;
};


�� C / C++ ����� ����ü ���� ���

EX)
union STUnitData
{
	int m_nID;
	int m_nLevel;
};

�� ����ü VS ����ü

- ����ü�� ����ü�� �����ϴ� ������ �ʵ尡 ���� ������ �޸𸮸� ����ϴ� �ݸ� ����ü�� �ϳ��� �޸𸮸� ������ ������ �ʵ尡 ���� �����ϴ� ������ ���Ѵ�.

- �׷��⶧���� ����ü������ �� �ʵ��� ���� �Ҵ� �� ��� ���������� �Ҵ��� �ʵ��� ���� ��ȿ�ϴ�.

*/
#pragma endregion


namespace EXAMPLE_3
{
	void Example();
}