#pragma once
#include <iostream>

using namespace std;

using std::cout;
using std::cin;
using std::endl;

#pragma region ���� ������ + ���ڿ�
/*
�� ���� ������

- ��쿡 ���� if ~ else���� �Ϻ� ��ü�� �� �ִ�.
    �� ������ ������ Ȱ���� �Ѵٸ� �ڵ� ����ȭ�� ���� �� �ִ�.

EX) 
(���ǽ�) ? true : false;
(numA > numB) ? dataA : dataB;

- ���ǽ��� ���̸� dataA ��ȯ / �����̸� dataB�� ��ȯ�ȴ�.

�� ���ڿ�

- ���ڿ��̶� ������ ������ �ǹ��ϸ� ���ڿ��� Ȱ���� ��� ���ڰ� ���յ� �ܾ� �Ǵ� ���ڸ� ǥ���ϴ� ���� �����ϴ�.

- ���ڿ��� Ȱ���ϸ� ȭ�� �� ���ڷ� �� ������ ����ϴ� �۾��� �����ϴ�.


�� �޸� ����

- char�� 1byte
- 1byte�� 8bit
    �� 1bit : 0�� 1�� ǥ�� �� �� �ִ� ���� ���� ����

- ���ڸ� ǥ���Կ� �־� �޸� ȿ�� ������ int���� char���� ��︰��.
- int������ ���� ��� ������ ������. -> ���� ������ ���� ���� ���� ǥ���� �޸� ���� �� ������ ���� ����.

�� BIT -> BYTE -> KB -> MB -> GB -> TB -> PB -> EB -> ZB
*/
#pragma endregion

namespace EXAMPLE_2
{
	void Example();
}