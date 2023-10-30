#include "MainGame_05.h"

MainGame_05::MainGame_05()
{
	/*
	�� STL ���Ϳ��� ���� ����ϴ� ���

	- push_back()
	 �� �����͸� �ڿ������� �߰��Ѵ�. (��)

	- emplace_back()
	 �� �����͸� �ڿ������� �߰��Ѵ�. (��)

	- pop_back()
	 �� ������ �ڿ������� ���� ����

	- size()
	 �� ������ ũ��(����)

	- resize()
	 �� ũ�� �� ����

	- clear()
	 �� �ε��� ���� ����

	- begin()
	 �� ������ 0��° �ε���

	- end()
	 �� ������ ������ �ε���

	- insert(��ġ, ��)
	 �� ����

	- insert(��ġ, ����, ��)
	 �� ����

	- erase(��ġ) - �ݺ��ڸ� ���� erase�� ���͸� ���� ������. (���� �ƴ� �Ҵ�� �޸𸮸�) / �ݺ��ڸ� ������� ������ ���� �����.
	 �� �����.
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	// ������ : ��
	for (int i = 0; i < 10; i++)
	{
		_vNumber.push_back(i + 1);
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	_vNumber.push_back(1);

	_vNumber.pop_back();

	_vNumber.clear();

	//_vNumber.insert(_vNumber.begin() + 5, 100);

	LinePrint();

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	_vNumber.insert(_vNumber.begin() + 1, 100);

	// ������ : ��
	// �� ���� ������ ���� ���
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	// ������ : �ֻ�
	// �� �ݺ��ڸ� ���� ��ȸ

	_viNumber = _vNumber.begin();
	for (_viNumber; _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << "iterator : " << *_viNumber << endl;
	}

	LinePrint();

	// ���� ���� ���� - vector �� list�� ����
}

MainGame_05::~MainGame_05()
{

}

void MainGame_05::printVector()
{
	LinePrint();
	LinePrint();
	LinePrint();

	cout << "push.back()" << endl;

	_vNumber.push_back(1);
	_vNumber.push_back(2);
	_vNumber.push_back(3);
	_vNumber.push_back(4);
	_vNumber.push_back(5);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "insert()" << endl;
	_vNumber.insert(_vNumber.begin() + 2, 10);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;
	cout << _vNumber[2] << endl;
	cout << _vNumber[3] << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	cout << "pop_back()" << endl;

	// ���� : ������ üũ / �ݺ��� ���ο��� ����� ������ �鿩�� �Ѵ�. (�������� ����)
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	�� for each��

	- �־��� ������ ��� �����͸� �ϳ��� ��ȸ�ϸ� �����ϴ� ��쿡 ����Ѵ�.
	 �� for each�� �����̳��� �ݺ��� ����

	- for each�� vector�� �����̳� ��Ұ� �ƴϰ� �˰��� �Լ�

	- ��� �����̳ʴ� �ݺ��ڸ� ������ ������ for each�� ����ؼ� �����̳��� ���� ������ �����ϴ�.

	- �̰� ������ ������ for each�� ���� ���ͷ����Ϳ� �����ϰ� ����Ʈ �������̸�
	  �����̳ʸ� ��ȸ�ϸ鼭 ���ϴ� ��ҿ� ������ �����ϴ�.


	�� auto - STL������ ���

	- �����Ϸ��� �����Ͻ� �ڵ����� �ڷ����� �߷��Ѵ�.

	- �����Ϸ��� �ڷ����� �߷��ϱ� ���ؼ��� ������� ������ �־����� �Ѵ�.

	C# -> var

	- C/C++ ���� �⺻������ ������ ������ �� �ش� ������ �ڷ����� ����ؾ� �Ѵ�.

	- auto Ű���� ��ü�� C#�� var�� �����ϸ� �ڷ����� Ȯ���Ǵ� �ñ�� ������ Ÿ��

	- auto Ű���忡 ���� �ڷ����� �����Ǵ� ������ ������ �Ҵ�Ǵ� �ʱⰪ�� ������ �Ǵ��ϱ� ������ auto�� ���� ���� ������ Ư������ �Ҵ��ؾ� �Ѵ�.

	*/

	// ������ ������ �ʿ���� ���������� ���������� ����Ѵ�.
	for each (auto p in _vNumber)
	{
		cout << "for each��" << p << endl;
	}

	LinePrint();

	cout << "erase()" << endl;

	// ����
	//_vNumber.erase(_vNumber.begin() + index);
	// ����
	//_vNumber.erase(_vNumber.begin() + s, vNumber.end() + e);

	//_vNumber.erase(_vNumber.begin() + 1);
	// ��ŸƮ -> ����
	//_vNumber.erase(_vNumber.begin(), _vNumber.end() + 3); // vector�� ������ : ����ȸ�� �����Ѵ�.

	// ����ȸ
	for (_vriNumber = _vNumber.rbegin(); _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	LinePrint();

	/*
	���� ����
	�� ������? -> ������
	at : ���� ��ġ�� ���Ҹ� �����ϴ� �������̽�
	at == [] ������ ������� �����ش�.

	[] : ���� ������ ���� �ʱ� ������ �ӵ��鿡�� �����ϴ�.
	at() : ���� ������ �ϱ� ������ �ӵ��� ������. ��, �������鿡���� �ξ� �����ϴ�.
	*/

	cout << "at()" << endl;

	cout << _vNumber.at(4) << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// ù��° ��� ����
	// ���� ���� ������ �Ǿ��ִ��� Ȯ���� �����ϰ�
	cout << "front()" << endl;
	cout << _vNumber.front() << endl;

	LinePrint();

	// ������ ����
	// �� �ε����� ���� ������ �Ǿ��ִ��� Ȯ���Ѵ�.
	cout << "back()" << endl;
	cout << _vNumber.back() << endl;

	LinePrint();

	// ���� ������ ����� Ȯ���Ѵ�.
	cout << "size()" << endl;
	cout << _vNumber.size() << endl;

	_vNumber.clear();

	LinePrint();

	// empty() : ��� ������ true / �ϳ� �̻� �ִ� ��� false
	if (_vNumber.empty())
	{
		cout << "���� �����" << endl << endl;

		// ��� �ִٸ� ���� ������ ������ �ʿ䰡 ����.

		return;
	}
}


void MainGame_05::sampleVector(std::vector<int> ValueList)
{
	//vector<int>::iterator _viNumber = ValueList.begin();

	cout << "size() : " << ValueList.size() << endl;

	for (int i = 0; i < ValueList.size(); ++i)
	{
		printf("ValueList[%d] : %d\n", i, ValueList[i]);
	}

	for (auto _viNumber = ValueList.begin(); _viNumber != ValueList.end(); ++_viNumber)
	{
		int index = _viNumber - ValueList.end();

		cout << "index : " << index << endl;
		printf("ValueList.begin() : %d\n", *ValueList.begin());
		printf("_viNumber : %d\n", *_viNumber);

		//cout << "iterator : " << *_viNumber << endl;
	}
}

void MainGame_05::sampleSTVector(std::vector<STData> ValueList)
{
	for (int i = 0; i < ValueList.size(); ++i)
	{
		cout << "ValueList.m_nValue : " << ValueList[i].m_nValue << endl;
		cout << "ValueList.m_oString : " << ValueList[i].m_oString.c_str() << endl;
	}

	/*
	�� ��� ������ ���� �ݺ����� ��ȭ

	- C++�� �ᱹ ����̱� ������ �ð��� ������ ���� ������ �ǰ� ũ�� ���� ��ȭ�� �����.

	EX)
	for (STData stData : valueList)
	 �� Range ��� for / �����̳� ��� for


	�� C != C++

	- printf �Լ��� %s ���� ���ڴ� C��� ��� ��Ÿ���� ���ڿ��� ��ü�ϱ� ���� �������
	  �Ϲ����� ������δ� C++ ����� ���ڿ��� ǥ���ϴ°��� �Ұ��� �ϴ�.

	- �׷��� ������ C++ ����� ���ڿ��� c_str() �Լ��� ���ؼ� C��� ��Ÿ���� ���ڿ��� ǥ���ϴ� ���� �����ϴ�.

	*/

	for (STData stData : ValueList)
	{
		printf("����ü ������ : %d, %s\n", stData.m_nValue, stData.m_oString.c_str());
	}

	for (auto oIterator = ValueList.begin(); oIterator != ValueList.end(); ++oIterator)
	{
		int nIndex = oIterator - ValueList.begin();

		printf("%d ��° ����ü ������ : %d, %s\n", nIndex + 1, oIterator->m_nValue, oIterator->m_oString.c_str());
	}
}

void MainGame_05::practiceVector(void)
{
	vector<int> ValueListA;
	vector<STData> ValueListB;

	for (int i = 0; i < 10; ++i)
	{
		ValueListA.push_back(i + 1);
	}

	for (int i = 0; i < 10; ++i)
	{
		STData stData;
		stData.m_nValue = i + 1;
		stData.m_oString = std::to_string(i * 0.5f);
		ValueListB.push_back(stData);
	}

	printf("====== int ���� ======\n");
	sampleVector(ValueListA);
	printf("====== STData ���� ======\n");
	sampleSTVector(ValueListB);

	int nNumStrings = 0;
	std::vector<std::string> oStringList;

	printf("���� �Է� : ");
	scanf_s("%d", &nNumStrings);

	printf("\n ===== ���ڿ� �Է� =====\n");

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows -> �ִ� ���� 250 ~ 270
		char szString[MAX_PATH] = "";

		printf("%d ��° ���ڿ� �Է� : ", i + 1);
		//cin >> szString;
		scanf_s("%s", szString);

		//oStringList.push_back(szString);
	}

	cout << "===== ���ڿ� ��� =====" << endl;

	/*
	���ͷ����ʹ� �ݵ�� begin() end()�� ����ؾ��Ѵ�.
	 �� ���� ���� ���� ���������� �����͸� �����ϱ� ������ �������� ������ ���ʴ�� ����Ǿ� �ִ� �ݸ�
		�ʰ� ���� �����̳ʴ� �������� ������ �����̱� ������ ������ ������ �� ����.
	*/

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d ��° ���ڿ� ��� : %s", nIndex + 1, oIterator->c_str());
	}
}

/*
���� 1. ���Ϳ� ������...

- �����Լ��� "ȿ����" �ְ� "����꼺" �ְ� ������ ������ �ݿ��Ͽ� ������ �´�.

- �Լ� ������ �ǵ��� �ʴ´�.


26�ϱ��� -> 3���� �ð�
���� 2. STL ���� ����

�� ��Ʈ������ ���

- ��ǥ ��Ʈ 1���� (���� + �� + ���� (�Ǽ��縮))

- �ʼ�
 �� ������ ���� �� �Ǹ� ���
 �� ������ �������� ������ �����ؾ� �Ѵ�.
 �� �������� �ɷ�ġ�� ���� ĳ������ �ɷ�ġ�� ��� - (����/����)
 �� ������ �̸�, ����, �ɷ�ġ, ���� ���� ��� ����

- ������ �����ϸ� ������ �з��� ���´�. - (���)
	�� 1. ��		2. ����		3. ���� ���

- �� �޴����� �����Ӱ� ��ȯ�� �����ؾ� �Ѵ�.

*/