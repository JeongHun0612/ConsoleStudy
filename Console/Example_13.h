#pragma once
#include <iostream>
#include <string>

using namespace std;

using std::cout;
using std::cin;
using std::endl;


#pragma region 사용자 정의 자료형
/*

▶ 사용자 정의 자료형이란?

- 기존의 자료형을 기반으로 새로운 자료형의 조합을 만드는 기능
 ㄴ 사용자 정의 자료형을 활용하면 특정 데이터의 집합을 표현하는 것이 가능하다.

ㆍ C / C++ 언어의 사용자 정의 자료형의 종류

- 열거형 (심볼릭 상수를 정의하는 자료형)
- 구조체 (특정 데이터의 집합을 정의하는 자료형) / 구조체와 클래스의 차이
- 공용체 (특정 데이터의 집합을 정의하는 자료형) / 특징, 장단점, 구조체 공용체의 차이
- 클래스 (OOP에서 특정 객체를 생성하고 관리하는 자료형)

※ C : 구조체	/	C++ : 클래스

▷ C / C++ 언어의 열거형 선언 방법

EX) 표기법 주의 -> 파스칼
enum EUintType
{
	Unit_Type_A,
	Unit_Type_B,
	Unit_Type_C,
};


▷ C / C++ 언어의 구조체 선언 방법

- 하나 이상의 변수를 묶어서 새로운 자료형을 정의하는 도구
- C++에서는 클래스가 도입되어있지만 C언어와의 호환성 때문에 구조체를 그대로 사용할 수 있다.
- C++ 구조체는 C언어의 구조체의 기능을 확장하여 기존의 클래스와 동일한 구조와 기능을 가진다.

EX)
struct STUnitData
{
	int m_nID;
	int m_nLevel;
};


▷ C / C++ 언어의 공용체 선언 방법

EX)
union STUnitData
{
	int m_nID;
	int m_nLevel;
};

ㆍ 구조체 VS 공용체

- 구조체는 구조체를 구성하는 각각의 필드가 서로 별개의 메모리를 사용하는 반면 공용체는 하나의 메모리를 가지고 각각의 필드가 서로 공용하는 구조를 지닌다.

- 그렇기때문에 공용체에서는 각 필드의 값이 할당 될 경우 마지막으로 할당한 필드의 값이 유효하다.

*/
#pragma endregion


namespace EXAMPLE_3
{
	void Example();
}