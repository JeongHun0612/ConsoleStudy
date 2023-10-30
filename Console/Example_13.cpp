#include "Example_13.h"

#define EXAMPLE_TYPE_STRUCT			1
#define EXAMPLE_TYPE_ENUM			2
#define EXAMPLE_TYPE_UNION			3
#define EXAMPLE_TYPE_CLASS			4

#define EXAMPLE_TYPE		EXAMPLE_TYPE_UNION

// 사용자 정의 자료형부터는 접근범위에 대해서 신경을 많이 써야 한다.

namespace EXAMPLE_3
{
	struct tagFamily
	{
		const char* name;	// 이름
		int age;			// 나이
		int height;			// 키
		float weight;		// 몸무게
		bool wedding;		// 결혼유무
	};

	struct tagPlayer // 단일 객체
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};

	struct tagUnit // 범용적
	{
		string name;
		int hp;
		float att;
		bool die;
	};

	// ======================================
	/*
	- 열거형 상수는 기본적으로 특정 값을 할당하지 않으면 컴파일러에 의해서 자동으로 값을 할당한다. (0부터 -> 순서대로 값을 부여 한다.)

	- 단, 특정 상수에 값을 할당했을 경우 해당 상수밑으로는 차례대로 해당 상수에 할당된 값에서 +1씩 증가해서 할당이 이뤄진다.
	*/

	enum EColor_Type
	{
		// 열거형 상수는 기본적으로 전부 대문자 표기를 한다.
		RED,
		GREEN,
		BLUE = 1000,
		BLACK,
		WHITE
	};

	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	/*
	추가된 기능으로 열거형에는 반드시 이름을 명시할 필요가 없어졌다.
	 ㄴ 익명의 개념

	해당 방식으로 선언된 열거형은 식별할 수 있는 이름이 당연히 존재하지 않기 때문에 따로 변수화 시키는건 불가능하다.

	이러한 규칙은 개정이 되면서 다른 사용자 정의 자료형에도 적용된다.
	*/

	enum
	{
		UNIT_SIZE = 5
	};

	// 게임쪽에서는 사용이 적다.
	// 특정상황에서 메모리 절약이 가능하다.
	union STData
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	void Example()
	{

#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

		// 0. 설계 + 추상화 (단일객체인지 범용적인지 확인이 중요)
		// 1. 선언
		// 2. 구현화 부분
		// 3. 실제 사용되는 부분

		// C언어 선언 방법
		//struct tagFamily Family;

		// C++ 선언 방법
		tagFamily human;

		/*
		- 일단은 사용하기 위해서는 정의가 필요하고 구조체 멤버 변수에 접근하기 위해서는  .  연산자를 사용한다.

		- 그이외에는 일반적인 변수와 동일시되기 때문에 사용을 위해서 초기화가 필요하다.

		- 또 다른 특징이 있다면 구조체의 초기화는 배열의 초기화와 같이 지정된 값이 순서대로 들어간다는 특징이 있다.
		*/

		human.name = "사라";
		human.age = 18;
		human.height = 230;
		human.weight = 45;
		cout << boolalpha; // 0과 1을 false true로 표현하는 매크로
		human.wedding = false;

		cout << "이름 : " << human.name << endl
			<< "나이 : " << human.age << endl
			<< "키 : " << human.height << endl
			<< "몸무게 : " << human.weight << endl
			<< "결혼여부 : " << human.wedding << endl;

		cout << '\n';

		// 체력 : 180, 마나 : 50, 공격력 : 10, 방어력 : 5, 이동력 : 10.5f

		tagPlayer player;

		player.hp = 180;
		player.mp = 50;
		player.att = 10;
		player.def = 5;
		player.speed = 10.5f;

		cout << "체력 : " << player.hp << endl;
		cout << "마나 : " << player.mp << endl;
		cout << "공격력 : " << player.att << endl;
		cout << "방어력 : " << player.def << endl;
		cout << "이동력 : " << player.speed << endl;

		cout << '\n';

		//tagUnit marin;
		tagUnit zergling = {"저글링", 50, 5.5f, true};

		cout << "이름 : " << zergling.name << endl;
		cout << "체력 : " << zergling.hp << endl;
		cout << "공격력 : " << zergling.att << endl;
		cout << "사망여부 : " << zergling.die << endl;

		cout << sizeof(char*) << endl;

		cout << '\n';
		

		//  로드그래머 케이스 - 컴파일러를 유도하는 기법
		tagPlayer arrPlayer[4] =
		{
			{ 100, 100, 100, 100, 100 },
			{ 90, 90, 90, 90, 90 },
			{ 80, 80, 80, 80, 80 },
			{ 70, 70, 70, 70, 70 },
		};

		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << "번째 플레이어" << endl;
			cout << "HP : " << arrPlayer[i].hp << endl;
			cout << "=====================" << endl;
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
		
		// 1001
		// ㄴ 포폴에 있으면 절대 안되는 코드 중에 하나
		// 아주 위험한 코드 -> 모호함 / 어느곳에있는 BLAKC인지 확실히 모르기 때문에
		cout << "블랙 : " << BLACK << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		// 대부분의 게임에서 방향잡을때 필수로 사용이 된다.
		// why -> 편리해서 + 유지보수 용이함
		switch (m_motion)
		{
		case R_WALK:
			cout << "오른쪽 걷기" << endl;
			break;
		case L_WALK:
			cout << "왼쪽 걷기" << endl;
			break;
		case R_RUN:
			cout << "오른쪽 뛰기" << endl;
			break;
		case L_RUN:
			cout << "왼쪽 뛰기" << endl;
			break;
		}

		if (m_motion == L_WALK)
		{
			m_motion = R_RUN;

			if (m_motion == R_RUN)
			{
				cout << "오른쪽으로 신나게 뛰어간다." << endl;
			}
		}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
	
STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "==공용체==" << endl;
cout << "정수 데이터 : " << stData.m_nDataA << endl;
cout << "정수 데이터 : " << stData.m_nDataB << endl;
cout << "실수 데이터 : " << stData.m_fData << endl;

#else

#endif
		
	}
}

/*
과제 1. 로또 당첨기

- 당첨번호 6개 + 보너스 번호 1개

- 6개 입력 받는다.

- 필수 : 치트

- 판정

- 1등 : 당첨번호 6개와 내가 입력한 6개의 숫자가 같을때

- 2등 : 당첨번호 5개와 + 보너스 번호 1개와 내가 입력한 숫자 6개가 같을때

- 3등 : 당첨번호 5개와 내가 입력한 숫자 5개가 같을때

- 4등 : 당첨번호 5개와 내가 입력한 숫자 4개가 같을때

- 5등 : 당첨번호 5개와 내가 입력한 숫자 3개가 같을때


과제 2. 구조체를 사용해서 데이터 베이스 비스무리한것 만들어 보기

- 게임 타이틀명, 평점, 가격, 점수, 특이사항 등등... 필요하면 추가한다.

- 배열을 사용하고 출력까지.


과제 3. 빙고 만들기

- 0 ~ 24까지의 수를 랜덤으로 배치해서 5 X 5로 출력한다.

- 숫자를 선택하면 #, %, & 등등 으로 바꾼다.

- 빙고가 되면 빙고 카운터가 올라가고 5 빙고가 되면 게임이 종료된다.
 ㄴ 단, 게임이 종료되면 프로그램이 종료되는게 아니라 완성된 빙고가 떠있어야 한다.


도전 과제 1. 빙고

- 위에 룰을 그대로 따라간다.

- 단, 혼자하는 빙고가 아닌 AI와 번갈아 가며 플레이 하는 빙고 버전

- 완성도는 AI 수준에 따라서 나뉜다.


한줄 조사. 4대 문자열 + 포인터

- 노트에 적어온다.

- 비유할 것 생각해온다.

*/