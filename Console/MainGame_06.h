#pragma once
#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>
#include <list>
#include <Windows.h>

// �ð� ���� ����� �ִ� ������� (ctime�� ���е��� ���� �ö� �������)
// C : time.h / C++ : ctime
#include <ctime>

// - C++11���� �߰��ƴ�.
//	�� pair Ȯ�� ���� -> ��ȯ���� N�� �̻� ������ �� �ִ�.
//	�� ���� ����ϴ� �Լ� or ���� ����ϴ� ���
//	�� EX : make_tuple (Ʃ�� ����) / get (������ Ʃ���� ��������) / swap (Ʃ�� ���� �ٸ� ������ ����) / tie (Ʃ�� �� �з�)
#include <tuple>

using namespace std;

#pragma region STL ��
/*
�� ���̶�?

- ���Ϳ� ���������� �����͸� �����ϴ� �÷��� Ŭ���� �� �ϳ��ν� �����Ǿ� �ִ� �����͸� key/value �������� �����ϴ� Ŭ������ �ǹ��Ѵ�.

EX)
std::map<int, int> ValueListA;			-> key : int��		value : int�� -> �� ����
std::map<std::string, int> ValueListB	-> key : string��	value : int�� -> �� ����


�� ���� Ư¡

- �ΰ��� ¦�� �̷�� ������ ���� �����̳� (�ڷ� ����)

- ���� �ڷᱸ���� BinarySearchTree -> ���� �� Ʈ���� �����Ǿ� �ִ�.
 �� ���� �� Ʈ���� �ڰ� ���� ���� Ž�� Ʈ���� ���� / ���� ���� �����Ǿ� ������,
    �ڰ� ������ �����̱� ������ ���� ���� ��Ģ�� ������.


�� ���� �� Ʈ��

- ��Ʈ ���� ���������� �����ϸ� ���� ��� ���� �������̴�. (���� : �ֻ��� ��� / ���� : ������ ���)
	�� NUL (nullLeaf) : �����Ͱ� ���� ���� ��� -> ���� ���

- ������ ���� �������� ���� �� ���� ������ ����� �ڽ��� �������̿��� �Ѵ�.
	�� �ݴ��� ���� ���� ��Ģ ���� (EX : ������ ����� �ڽ��� �ݵ�� �������� �ʿ䰡 ����.)

- ���� ��忡�� ��Ʈ ������ ���� ��ο� �ִ� ������ ����� ������ ���ƾ� �Ѵ�.
	�� ���� ���ԵǴ� ���� ���� ��尡 �Ǹ� �̶� �� ��带 �߽����� ���� �ڽĿ� ���� ��带 �����ϴ� �۾��� �Ѵ�.

- ���� �� Ʈ���� ���� �����߿� ���� ������ ���� ȸ���� �Ѵ�. (�� / ��)
	�� ��ȸ�� �� ���� �ڽ� ����� ������ �ڽ� ��带 �θ� ����� ���� �ڽ����� ����
	�� ��ȸ�� �� ������ �ڽ� ����� ���� �ڽ� ��带 �θ� ����� ������ �ڽ����� ����

- �뷮�� �˻��� Ưȭ�� STL

- �������� ����� ����/���� ��Ȳ������ ���� ���� ������ �ƴϴ�.

- �ʰ� ������ ����� �ϴ� STL ���� �����ϸ� ��Ȳ�� �°� ��� �����̳ʸ� ������� ����� �غ��� �Ѵ�. + ����
  �� EX : set, multiset, multimap, tuple ���...


�� STL ���� �ٽ�

- 1. key�� value�� ���� ����.
 �� ù��° ���� : first : Ű
 �� �ι�° ���� : second : ��

- 2. �߰��ϴ� ����� insert()�� ����ϸ� key, value �� ���� ���ÿ� �߰��ؾ� �ϴ� pair / make_pair()�� ����ؾ� �Ѵ�.

�� pair
�� �ΰ��� �ڷ����� �ϳ��� �����ִ� ����ü
	�� ���ø� ����ü�̱� ������ � �ڷ��� ������ OK

�� make_pair
�� �� �״�� pair�� ������ִ� �Լ�
	�� EX) p.first = x, p.second = y;	=>	p = make_pair(x, y);
*/

#pragma endregion

class MainGame_06
{
private:
	map<string, int> _mData;
	map<string, int>::iterator _miData;
	multimap<map<vector<MainGame_06*>, set<vector<float>>>, map<list<vector<int>>, vector<double>>> _muData;

	// set
	set <vector<int>> _svDat;
	// tuple
	tuple<int, string, char> _tupleValue;

public:
	std::pair<std::pair<int, int>, std::pair<int, int>> getMinMaxValue(std::vector<int> a_oValueList);
	void printMap(std::map<std::string, int> a_oValueList);

	MainGame_06();
	~MainGame_06();
};

