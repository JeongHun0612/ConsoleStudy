#include "MainGame_05.h"

MainGame_05::MainGame_05()
{
	/*
	ㆍ STL 벡터에서 자주 사용하는 기능

	- push_back()
	 ㄴ 데이터를 뒤에서부터 추가한다. (값)

	- emplace_back()
	 ㄴ 데이터를 뒤에서부터 추가한다. (값)

	- pop_back()
	 ㄴ 데이터 뒤에서부터 값을 삭제

	- size()
	 ㄴ 벡터의 크기(갯수)

	- resize()
	 ㄴ 크기 재 연산

	- clear()
	 ㄴ 인덱스 전부 삭제

	- begin()
	 ㄴ 벡터의 0번째 인덱스

	- end()
	 ㄴ 벡터의 마지막 인덱스

	- insert(위치, 값)
	 ㄴ 삽입

	- insert(위치, 개수, 값)
	 ㄴ 삽입

	- erase(위치) - 반복자를 통한 erase는 벡터를 전부 날린다. (값이 아닌 할당된 메모리를) / 반복자를 사용하지 않으면 값을 지운다.
	 ㄴ 지운다.
	*/

	_vNumber.push_back(1);
	_vNumber.push_back(2);

	cout << _vNumber[0] << endl;
	cout << _vNumber[1] << endl;

	LinePrint();

	_vNumber.pop_back();
	_vNumber.pop_back();

	// 안전도 : 중
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

	// 안전도 : 상
	// ㄴ 직접 참조를 통한 출력
	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	LinePrint();

	// 안전도 : 최상
	// ㄴ 반복자를 통한 순회

	_viNumber = _vNumber.begin();
	for (_viNumber; _viNumber != _vNumber.end(); ++_viNumber)
	{
		cout << "iterator : " << *_viNumber << endl;
	}

	LinePrint();

	// 면접 문제 예상 - vector 와 list의 차이
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

	// 선행 : 조건을 체크 / 반복문 내부에서 지우는 습관을 들여야 한다. (안전성을 위해)
	_vNumber.pop_back();

	for (int i = 0; i < _vNumber.size(); i++)
	{
		cout << _vNumber[i] << endl;
	}

	/*
	▶ for each문

	- 주어진 범위의 모든 데이터를 하나씩 순회하며 동작하는 경우에 사용한다.
	 ㄴ for each는 컨테이너의 반복자 개념

	- for each는 vector의 컨테이너 요소가 아니고 알고리즘 함수

	- 모든 컨테이너는 반복자를 가지고 있으며 for each를 사용해서 컨테이너의 원소 접근이 가능하다.

	- 이게 가능한 이유는 for each문 역시 이터레이터와 동일하게 스마트 포인터이며
	  컨테이너를 순회하면서 원하는 요소에 접근이 가능하다.


	◈ auto - STL에서만 사용

	- 컴파일러가 컴파일시 자동으로 자료형을 추론한다.

	- 컴파일러가 자료형을 추론하기 위해서는 명시적인 조건이 주어져야 한다.

	C# -> var

	- C/C++ 언어는 기본적으로 변수를 선언할 때 해당 변수의 자료형을 명시해야 한다.

	- auto 키워드 자체가 C#의 var와 유사하며 자료형이 확정되는 시기는 컴파일 타임

	- auto 키워드에 의한 자료형이 결정되는 시점은 변수에 할당되는 초기값을 가지고 판단하기 때문에 auto를 통한 변수 선언은 특정값을 할당해야 한다.

	*/

	// 연산이 별도로 필요없는 로직에서만 제한적으로 사용한다.
	for each (auto p in _vNumber)
	{
		cout << "for each문" << p << endl;
	}

	LinePrint();

	cout << "erase()" << endl;

	// 단일
	//_vNumber.erase(_vNumber.begin() + index);
	// 범위
	//_vNumber.erase(_vNumber.begin() + s, vNumber.end() + e);

	//_vNumber.erase(_vNumber.begin() + 1);
	// 스타트 -> 엔드
	//_vNumber.erase(_vNumber.begin(), _vNumber.end() + 3); // vector의 좋은점 : 역순회를 지원한다.

	// 역순회
	for (_vriNumber = _vNumber.rbegin(); _vriNumber != _vNumber.rend(); ++_vriNumber)
	{
		cout << *_vriNumber << endl;
	}

	LinePrint();

	/*
	면접 문제
	ㄴ 차이점? -> 안정성
	at : 임의 위치의 원소를 참조하는 인터페이스
	at == [] 동일한 결과물을 보여준다.

	[] : 범위 점검을 하지 않기 때문에 속도면에서 유리하다.
	at() : 범위 점검을 하기 때문에 속도는 느리다. 단, 안정성면에서는 훨씬 유리하다.
	*/

	cout << "at()" << endl;

	cout << _vNumber.at(4) << endl;
	cout << _vNumber[4] << endl;

	LinePrint();

	// 첫번째 요소 참조
	// 방이 전부 안착이 되어있는지 확인이 가능하고
	cout << "front()" << endl;
	cout << _vNumber.front() << endl;

	LinePrint();

	// 마지막 원소
	// ㄴ 인덱스가 전부 안착이 되어있는지 확인한다.
	cout << "back()" << endl;
	cout << _vNumber.back() << endl;

	LinePrint();

	// 현재 벡터의 사이즈를 확인한다.
	cout << "size()" << endl;
	cout << _vNumber.size() << endl;

	_vNumber.clear();

	LinePrint();

	// empty() : 비어 있으면 true / 하나 이상 있는 경우 false
	if (_vNumber.empty())
	{
		cout << "텅텅 비었다" << endl << endl;

		// 비어 있다면 내부 로직을 실행할 필요가 없다.

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
	▶ 언어 개정의 따른 반복문의 변화

	- C++도 결국 언어이기 때문에 시간이 지남에 따라서 개정이 되고 크고 작은 변화가 생긴다.

	EX)
	for (STData stData : valueList)
	 ㄴ Range 기반 for / 컨테이너 기반 for


	▶ C != C++

	- printf 함수의 %s 서식 문자는 C언어 기반 스타일의 문자열을 대체하기 위한 기능으로
	  일반적인 방법으로는 C++ 언어의 문자열을 표현하는것이 불가능 하다.

	- 그렇기 때문에 C++ 언어의 문자열은 c_str() 함수를 통해서 C언어 스타일의 문자열을 표현하는 것이 가능하다.

	*/

	for (STData stData : ValueList)
	{
		printf("구조체 데이터 : %d, %s\n", stData.m_nValue, stData.m_oString.c_str());
	}

	for (auto oIterator = ValueList.begin(); oIterator != ValueList.end(); ++oIterator)
	{
		int nIndex = oIterator - ValueList.begin();

		printf("%d 번째 구조체 데이터 : %d, %s\n", nIndex + 1, oIterator->m_nValue, oIterator->m_oString.c_str());
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

	printf("====== int 벡터 ======\n");
	sampleVector(ValueListA);
	printf("====== STData 벡터 ======\n");
	sampleSTVector(ValueListB);

	int nNumStrings = 0;
	std::vector<std::string> oStringList;

	printf("정수 입력 : ");
	scanf_s("%d", &nNumStrings);

	printf("\n ===== 문자열 입력 =====\n");

	for (int i = 0; i < nNumStrings; ++i)
	{
		// MAX_PATH : OS -> Windows -> 최대 길이 250 ~ 270
		char szString[MAX_PATH] = "";

		printf("%d 번째 문자열 입력 : ", i + 1);
		//cin >> szString;
		scanf_s("%s", szString);

		//oStringList.push_back(szString);
	}

	cout << "===== 문자열 출력 =====" << endl;

	/*
	이터레이터는 반드시 begin() end()를 명시해야한다.
	 ㄴ 벡터 같은 경우는 선형적으로 데이터를 보관하기 때문에 데이터의 순서가 차례대로 보장되어 있는 반면
		맵과 같은 컨테이너는 데이터의 순서가 비선형이기 때문에 순서를 보장할 수 없다.
	*/

	for (auto oIterator = oStringList.begin(); oIterator != oStringList.end(); ++oIterator)
	{
		int nIndex = oIterator - oStringList.begin();
		printf("%d 번째 문자열 출력 : %s", nIndex + 1, oIterator->c_str());
	}
}

/*
과제 1. 벡터와 만나면...

- 샘플함수를 "효율성" 있고 "재생산성" 있게 본인의 생각을 반영하여 구현해 온다.

- 함수 원형은 건들지 않는다.


26일까지 -> 3일의 시간
과제 2. STL 벡터 상점

※ 포트폴리오 기능

- 대표 도트 1종씩 (무기 + 방어구 + 포션 (악세사리))

- 필수
 ㄴ 아이템 구매 및 판매 기능
 ㄴ 구매한 아이템은 착용이 가능해야 한다.
 ㄴ 아이템의 능력치에 따라 캐릭터의 능력치가 상승 - (겟터/셋터)
 ㄴ 아이템 이름, 가격, 능력치, 설명에 대한 출력 문구

- 상점에 입장하면 아이템 분류가 나온다. - (상속)
	ㄴ 1. 방어구		2. 무기		3. 포션 등등

- 각 메뉴별로 자유롭게 전환이 가능해야 한다.

*/