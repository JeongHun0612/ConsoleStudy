#include "MainGame_06.h"

MainGame_06::MainGame_06()
{
	/*
	�� STL �ʿ��� ���� ����ϴ� ���

	- STL������ �����̳ʿ� ���� �ణ�� ����� ���̸� ������ ������ �̸��� �ɹ��Լ��� �ټ� �����Ѵ�.

	- begin()

	- end()

	- clear()

	- empty()

	- erase()

	- insert()

	- size()

	��
	- find()
	�� ���ڷ� �� ���� ã�´�.
	*/

	map<std::string, int> ValueList;
	map<std::string, int>::iterator iValueList;

	int num = 0;

	decltype(num);
	

	for (int i = 0; i < 10; i++)
	{
		char szKey[MAX_PATH] = "";

		sprintf_s(szKey, "key_%d", i + 1);

		ValueList.insert(std::make_pair(szKey, i + 1));
		//ValueList.insert(decltype(ValueList)::value_type(szKey, i + 1));
		//ValueList.insert(std::map<std::string, int>::value_type(szKey, i + 1));
	}

	for (iValueList = ValueList.begin(); iValueList != ValueList.end(); ++iValueList)
	{
		printf("%s, %d\n", iValueList->first.c_str(), iValueList->second);
	}

	cout << '\n';

	_mData.insert(pair<string, int>("���α׷���", 50));
	_mData.insert(pair<string, int>("���ΰ�", 50));
	_mData.insert(pair<string, int>("����", 50));
	_mData.insert(pair<string, int>("������", 50));

	_mData.insert(make_pair("�л�A", 10));
	_mData.insert(make_pair("�л�B", 20));
	_mData.insert(make_pair("�л�C", 30));
	_mData.insert(make_pair("�л�D", 40));
	_mData.insert(make_pair("�л�E", 50));
	_mData.insert(make_pair("�л�F", 60));

	pair<string, int> pr1("�л�G", 100);
	_mData.insert(pr1);

	//if (_mData["���ĥ�己"]) // map�� �ִ� �����͸� ã���� ���ÿ� insert�� �������ش�.
	//{
	//	cout << "�ִ�" << endl;
	//}
	//else
	//{
	//	cout << "����" << endl;
	//}

	if (_mData.find("KGA") != _mData.end())
	{
		cout << "�ִ�" << endl;
	}
	else
	{
		cout << "����" << endl;
	}

	_mData.erase("�л�C");

	for (_miData = _mData.begin(); _miData != _mData.end(); ++_miData)
	{
		cout << _miData->first << ", " << _miData->second << endl;
	}

	cout << endl;

	string name;

	cout << "������ ã�� �ִ°���..?" << endl;

	while (cin >> name)
	{
		if (_mData.find(name) != _mData.end())
		{
			cout << name << "�� ���̴�" << "[" << _mData[name] << "]" << endl;
		}
		else
		{
			cout << "�׷� ����� �츮�ݿ� ����..?" << endl << endl;
			break;
		}
	}

	cout << '\n';

	// ���� ����. decltype




}

MainGame_06::~MainGame_06()
{

}

std::pair<std::pair<int, int>, std::pair<int, int>> MainGame_06::getMinMaxValue(std::vector<int> a_oValueList)
{

	return std::pair<std::pair<int, int>, std::pair<int, int>>();
}

void MainGame_06::printMap(std::map<std::string, int> a_oValueList)
{

}

