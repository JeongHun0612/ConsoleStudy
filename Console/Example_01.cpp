// 한줄 주석 : 코드의 영향을 주지 않고 메모를 남긴다.
// 내가 또는 타인을 위해서 \
주석 처리

/*
단위주석
단위주석
단위주석
*/

// 오류 : 문법 오류, 논리 오류


/*
- 메인 함수(진입점)
ㄴ C/C++ 언어로 작성 되어 있는 프로그램이 처음 실행되는 부분

ㄴ C/C++ 언어는 프로그램이 처음 실행되기 위해서 반드시 main 함수를 포함하고 있어야 한다.

ㄴ main 함수를 포함하고 있지 않다면 프로그램 구동 자체가 불가능하다.


▶ C/C++ 언어가 프로그램으로 변환되기 위해서 거치는 큰 단계

- 전처리기
- 컴파일
- 어셈블리
- 링크
- 런
*/

#pragma region 프로그래밍 언어
/*
-------------------------------------------------------------------------------------------------------------------------------------------------------------

▶ 프로그래밍이란?
- Programmning. Program에 ing가 붙었으니 지금 프로그램을 하고 있다 라는 뜻으로 직역할 수 있다.

-------------------------------------------------------------------------------------------------------------------------------------------------------------

▶ 프로그래밍 언어란?
- 컴퓨터와 대화 또는 명령을 할 수 있는 일련의 명령문을 작성할 수 있는 언어를 의미한다.
ㄴ 프로그래밍 언어를 이용하면 프로그램을 만드는 것이 가능

- 프로그래밍 언어에는 다양한 언어가 존재하지만 크게 2가지로 분류할 수 있다.
ㄴ 1. 특정 기능 구현에 최적화 된 언어
ㄴ 2. 범용적 언어

-------------------------------------------------------------------------------------------------------------------------------------------------------------

▶ 프로그래밍 언어를 컴퓨터에서 이해하는 방법
- C/C++ 언어로 작성되어 있는 코드는 컴퓨터가 이해할 수 없는 명령문이기 때문에
  C/C++ 언어는 중간에서 언어를 해석해주는 번역가 역할을 하는 그 무언가가 필요하다.

★ 그게 바로 "컴파일러"
ㄴ 컴파일러는 해당 코드를 컴퓨터가 이해할 수 있는 언어로 변환하는 역할을 한다.

※ 즉, 컴파일러가 프로그래밍 언어와 컴퓨터 사이에서 통역사 역할을 해주기 때문에 프로그래밍 언어를 작성하는 사람은
   컴퓨터의 언어를 모른다 하더라도 컴퓨터에게 명령을 내리는것이 가능하다.

★ 컴파일러 != 인터프리터

-------------------------------------------------------------------------------------------------------------------------------------------------------------

▶ 프로그래밍 기술 및 기법
- 프로그래밍 기술은 점차 발전해 왔으며 앞으로도 계속 발전해 나갈것이다. (평생 공부...)
ㄴ 하지만 현재는 크게 4가지로 분류할 수 있다.

1. 순차적 프로그래밍 (절차지향 프로그래밍) -> C언어
ㄴ 가장 초기부터 사용된 기법
ㄴ 코드의 흐름에 따라 프로그래밍 한다.
ㄴ 이 방식은 프로그램의 흐름을 따라가기 때문에 구조적이지 못하고 코드가 여기저기 흩어져 있기 때문에 유지보수가 아주 힘들다.


2. 구조적 프로그래밍 (함수 프로그래밍)
ㄴ 순차적 프로그래밍의 단점을 보완하기 위해 나온 방식
ㄴ 코드의 구조를 "기능" 단위로 묶는 방식
ㄴ 함수 지향 프로그래밍이라고 부르며 순차적 프로그래밍보다 유지보수가 용이하다는 장점이 존재한다.
	ㄴ 문제가 생겼을때 해당 문제가 발생한 기능만 중점적으로 살펴보면 되기 때문에.

※ 이러한 기능들을 한데 묶어 모듈이라는 형태로 만들고 이게 바로 라이브러리로 발전을 해왔다.


3. 객체지향 프로그래밍
ㄴ 위의 두 방식과는 달리 코드의 기준을 "객체" 단위로 묶어 프로그래밍 하는 방식을 의미한다.
ㄴ 모든 대상에는 속성과 메서드가 있고 이를 하나로 묶어 객체로 만드는 방법론 (여기서 말하는 대상에는 눈에 보이지 않는것도 포함이 된다.)
ㄴ 객체지향 기법에는 상속이나 다형성 등 다양한 개념이 존재하지만 그건 차후에 다루자...


4. 컴포넌트 기반 프로그래밍
ㄴ 비교적 최근에 등장한 개념
ㄴ 코딩의 기준을 객체가 아닌 컴포넌트 단위로 프로그래밍 한다.
ㄴ 객체지향 프로그래밍이 사람이라는 객체를 프로그래밍 했다면 컴포넌트 방식은 사람이 가지고 있는 컴포넌트(머리, 팔, 다리 등등) 부품으로 세분화하여 코딩하는 방법론
ㄴ 각각의 컴포넌트는 독립적으로 움직이는 부품과 같으므로 다리를 떼서 동물에게 붙여주면 걷거나 달리는 것이 가능하며 앞으로 배우게될 언리얼에서 추구하는 방식
ㄴ 굉장히 많은 컴포넌트가 존재하며 이것을 추가하는것으로 원하는 기능을 간단하게 구현할 수 있다.

-------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#pragma endregion

// # : 명령지시자
// 헤더파일 (C++ 프로그래밍에서 가장 기본이자 중요한 헤더파일)
#include <iostream>

// 컬러값 상수 지정
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
◈ iostream : 입, 출력을 담당하는 C++ 표준 라이브러리
- #include 키워드는 해당 경로에 있는 파일의 내용을 단순하게 복사하는 역할을 한다.
- 표준 라이브러리는 보통 <헤더파일> 이렇게 사용한다.
- 프로그래밍 언어도 결국 사람이 만들었기 때문에 익숙해진다면 대략적인 유추가 가능하다. (i -> input / o -> output)
- stream은 여러 장치에 입출력 작업이 실행되는것을 "추상화" 시킨것
- <iostream>에 정의되어 있는 cout, cin, endl
*/


// C++ 언어도 여러 버전이 존재한다.
// ㄴ C++11 / 모던 (C++ 버전에 따른 추가 문법, 차이 등 공부)
// ㄴ .h 헤더파일은 구버전
#include <Windows.h>

// 사용자 정의 헤더 파일
// #include "NewActor.h" 

// 탄생한 배경 -> 모호함 제거
// std 라는 이름안에 정의되어 있는것을 그냥 사용하겠다.
// ㄴ 이름 공간 std에 선언된것은 std라는 이름 공간의 선언 없이 접근하겠다는 선언 지시
// 기본적으로 프로그래밍에서는 이름 충돌이라는것이 빈번하게 발생한다.
// ㄴ 같은 이름일 경우 당연히 컴파일 에러가 발생한다.
// ㄴ 이를 방지하기 위해 namespace(이름 공간)이라는 별도의 공간을 지원한다.
using namespace std;

void TextColor(int font, int backGround);

void main()
{

	/*
	▶ 코드 작성의 기본
	ㄴ 빨간색 밑줄을 보게 된다면..

	1. 오타 체크
	2. 앞, 뒤를 체크할것
	3. ; 이 빠졌는지 확인
	4. 논리 체크

	- 세미콜론은 코딩의 마침표와 같다.
	ㄴ 특이점을 제외하고는 반드시 사용해야 한다.
	*/

	/*
	cout : 출력해라 (C언어는 printf())
	ㄴ console output

	cin : 입력해라
	ㄴ console input (C언어는 scanf())

	endl : 줄을 바꾼다. (개행)


	<< : 출력 연산자
	>> : 입력 연산자
	:: : 안에 있는

	*/

	cout << "지옥에 온걸 환영한다. 얘들아" << endl;
	cout << "지옥에 온걸 환영한다. 얘들아" << endl;
	cout << "지옥에 온걸 환영한다. 얘들아" << endl;
	cout << "지옥에 온걸 환영한다. 얘들아" << endl;

	cout << "문자 출력 : " << "쌍따옴표안에 적으면 된다." << endl;
	cout << "숫자 출력 : " << 12345 << "그냥 적으면 된다" << endl;


	/*
	자기 소개 출력 -> 가독성 좋게
	ㄴ 이름, 나이, 연락처, 주소, 이메일, 각오, 가고 싶은 회사, 만들고 싶은 게임, 취미
	*/

	cout << "---------------------------------------------------" << endl;
	cout << "이름 : " << "송정훈" << endl;
	cout << "나이 : " << 28 << endl;
	cout << "연락처 : " << "010-2610-3442" << endl;
	cout << "주소 : " << "서울 강동구 천중로 23길 43 문스테이" << endl;
	cout << "이메일 : " << "sjh960612@gmail.com" << endl;
	cout << "각오 : " << "모든 인원 열심히 노력해서 원하는 목표 이루기" << endl;
	cout << "가고 싶은 회사 : " << "내가 갈 수 있는 최선의 회사" << endl;
	cout << "만들고 싶은 게임 : " << "rpg" << endl;
	cout << "취미 : " << "게임, 노래" << endl;
	cout << "---------------------------------------------------" << endl;

	printf("지옥에 온걸 환영한다!\n");

	/*
	▶ printf / scanf 함수에서 이용되는 서식 문자란?

	- 서식 문자는 문자열을 출력 또는 입력을 받을때 해당 서식 문자의 자리를 다른 수로 대체하기 위한 자리 매김 역할을 하는 문자를 의미
	서식문자를 이용하면 고정되어 있지 않는 문자열을 출력할 수 있다.

	▷ 서식 문자 종류

	- %d : 인트형 정수를 대체하는 용도
	- %ld : 롱형 정수를 대체하는 용도
	- %c : char를 대체하는 용도
	- %s : 문자열 입력
	- %f : float형을 대체하는 용도


	▷ printf 특수문자
	- \n : 사용빈도 아주 높음 / 줄바꿈
	- \t : 수평탭
	- \v : 수직탭
	- \\ : \
	- \? : ?
	- \' : '
	- \" : "
	*/

	printf("오늘은 날씨가 \"정말\" 좋아!\n");

	//TextColor(BLACK, DARK_BLUE);
	//cout << "∏∏∏∏∏∏∏∏∏∏∏∏" << endl;
	

#pragma region 별의 커비
	printf("------------------------------------------------------\n");
	printf("과제 1. 좋아하는 캐릭터 출력 I\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("□□□□□□□□□□□■■■■■■■■□□□□□□□□□□□\n");
	printf("□□□□□□□□□■■□□□□□□□□■■□□□□□□□□□\n");
	printf("□□□□□□□■■□□□□□□□□□□□□■■□□□□□□□\n");
	printf("□□□□□□■□□□□□□□□□□□□□□□□■□□□□□□\n");
	printf("□□□□□■□□□□□□□□□□□□□□□□□□■□□□□□\n");
	printf("□□□□□■□□□□□■□□□□□■□□□□□□■□□□□□\n");
	printf("□□□□■□□□□□■□■□□□■□■□□□□□□■□□□□\n");
	printf("□□□□■□□□□□■□■□□□■□■□□□□□□■□□□□\n");
	printf("□□□■□□□□□□■■■□□□■■■□□□□□□□■□□□\n");
	printf("□□■□□□□□□□■□■□□□■□■□□□□□□□□■□□\n");
	printf("□■□□□□■■□□■□■□□□■□■□□■■□□□□□■□\n");
	printf("■□□□□■■■■□□■□□□□□■□□■■■■□□□□□■\n");
	printf("■□□□□□■■□□□□□■□■□□□□□■■□□□□□□■\n");
	printf("■□□□□□□□□□□□□□■□□□□□□□□□□□□□□■\n");
	printf("■□□□□□□□□□□□□□□□□□□□□□□□□□□□□■\n");
	printf("□■□□■□□□□□□□□□□□□□□□□□□□□■□□■□\n");
	printf("□□■■■□□□□□□□□□□□□□□□□□□□□■■■□□\n");
	printf("□□□□■□□□□□□□□□□□□□□□□□□□□■□□□□\n");
	printf("□□□□■■□□□□□□□□□□□□□□□□□□■■□□□□\n");
	printf("□□□■□□■□□□□□□□□□□□□□□□□■□□■□□□\n");
	printf("□□■□□□□■□□□□□□□□□□□□□□■□□□□■□□\n");
	printf("□■□□□□□□■■□□□□□□□□□□■■□□□□□□■□\n");
	printf("□■□□□□□□□□■■■■■■■■■■□□□□□□□□■□\n");
	printf("□■□□□□□□□□□□□□■□□□□□□□□□□□□□■□\n");
	printf("□□■□□□□□□□□□□■□■□□□□□□□□□□□■□□\n");
	printf("□□□■■■■■■■■■■□□□■■■■■■■■■■■□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("------------------------------------------------------\n");
	
#pragma endregion

#pragma region 고라파덕
	printf("\n\n");
	printf("과제 1. 좋아하는 캐릭터 출력 I\n");
	printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□■■□□■■■□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□■■□■■■□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□■■□■■□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□□■■■□□□□□□□\n");
	printf("□□□□□□□□□□□□□□□□□□□□■■□■■■□□□□\n");
	printf("□□□□□□□□□□■■■■■■■■■□■■■■■■□□□□\n");
	printf("□□□□□■■□■■□□□□□□□□□■■■■□□□□□□□\n");
	printf("□□□□■□□■□□□□□□□□□□□□□■■■□□□□□□\n");
	printf("□□■■□□■□□□□□□□□□□□□□□□□□■□□□□□\n");
	printf("□■□□□■□□□□□□□□□□□□□□□□□□□■□□□□\n");
	printf("■□□□□■■■■□□□□□□□□□□□□□□□□■□□□□\n");
	printf("■□□□■■□□□■□□□□□□□□□■■■□□□□■□□□\n");
	printf("□□□□■□□■□□■□□□□□□□■□□□■□□□■□□□\n");
	printf("□□□□■□□□□□■□□□□□□■□□■□□■□□□■□□\n");
	printf("□□□□■■□□□■■■■■■□□■□□□□□■□□□■■□\n");
	printf("□□□□■□■■■■□□□□□■□□■□□□■□□□■■□■\n");
	printf("□□□□■□■□□□□□□□□□■■□■■■□□■■□■□■\n");
	printf("□□□■■■□□□■□□□■□□□□■□□□□■□■□■□■\n");
	printf("□□■■□□□□□□□□□□□□□□□■□□□■□■□■□■\n");
	printf("■■□□□□□□□□□□□□□□□□■□□□■■□■□□□■\n");
	printf("■□□□□□□□□□□□□□□□□□■■■■□■□■□□□■\n");
	printf("■□□□□□□□□□□□□□□□□■□□□□□■□□□□□■\n");
	printf("■□□□□□□□□□□□□□□□□■□□□□□■□□□□□■\n");
	printf("□■□□□□□□□□□□□□□■■□□□□□□■□□□□□■\n");
	printf("□□■■□□□□□□□□□■■□□□□□□□□□□□□□□■\n");
	printf("□■□□■■■■■■■■■□□□□□□□□□□□□□□□□■\n");
	printf("□■□□□□□□□□□□□□□□□□□□□□□□□□□□□■\n");
	printf("■□□□□□□□□□□□□□□□□□□□□□□□□□□■■□\n");
	printf("■□□□□□□□□□□□□□□□□□□□□□□□■■■□□□\n");
#pragma endregion

#pragma region 카카시
	printf("\n\n");
	printf("과제 2. 좋아하는 캐릭터 출력 II\n");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	printf("\n");


	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(DARK_RED, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(DARK_RED, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■");
	TextColor(GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■");
	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■");
	TextColor(DARK_BLUE, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	TextColor(WHITE, BLACK); printf("■■■■■");
	TextColor(YELLOW, BLACK); printf("■■");
	TextColor(WHITE, BLACK); printf("■■■■■■■■■■■■■■■");
	printf("\n");

	TextColor(DARK_GRAY, BLACK); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
	printf("\n");
#pragma endregion
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}

/*
※ 오늘 배운 내용은 반드시 복습

과제1. 좋아하는 캐릭터 출력

- 캐릭터 양식은 자유

- 최소 사이즈는 30 x 30

과제2. 좋아하는 캐릭터 출력 II

- 1번과 동일하지만 컬러풀하게 만든다.

- 최소 사이즈 50 x 50

※ 두 과제 모두 최소 사이즈에 신경을 써온다.

과제3. 한컴타자연습 긴글(영문)

- 150타 이상 인증샷

한줄 조사. C++ 변수 + 연산자의 종류 조사

- 노트에 적어온다.

*/

