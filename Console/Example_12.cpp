#include "Example_12.h"

// 선택적 컴파일
#define EXAMPLE_TYPE_PRINT				1
// 삼항
#define EXAMPLE_TYPE_TERNARY_OPERATOR	2
// 문자열
#define EXAMPLE_TYPE_STRING				3

#define EXAMPLE_TYPE	EXAMPLE_TYPE_STRING


namespace EXAMPLE_2
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		// !Do nothing

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

		cout << "삼항 연산자" << endl;

		int numA, numB;
		cout << "정수 입력 : ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		cout << "입력한 수의 값 : " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "정수 입력 : ";
		cin >> numberA;

		result = (numberA < 10) ? numberA : numberB;

		cout << "삼항 연산자 결과값 : " << result << endl;

#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : 바이트" << endl;
		cout << sizeof(numA) << " : 바이트" << endl;
		cout << sizeof(numB) << " : 바이트" << endl;
		cout << sizeof(numC) << " : 바이트" << endl;

		/*
		▶ 주의를 기울어야 할 문자열

		- C / C++은 타입에 엄격한 언어
		  ㄴ 기본적으로 NULL 지원

		 ★ 면접 문제
		 - 문자와 문자열의 차이점에 대해 
		  ㄴ 문자는 NULL 문자 추가 안된다.
		  ㄴ 문자열은 NULL 문자가 추가된다.

		 - 문자열은 데이터크기가 모호하기때문에 마지막에 들어있는 NULL값을 통해 끝을 알 수 있다.
		 - 문자는 데이터크기가 확실하기때문에 NULL이 필요없다.


		▷ NULL

		- iostream에 정의되어 있다.

		- NULL은 0 주소를 의미하며 그렇기에 차후 배울 포인터 변수를 초기화 할때도 사용할 수 있다.

		EX)
		
		char* p = NULL		==		char* p = 0;

		int n = NULL		==		int n = 0 ;

		- 전자는 p라는 변수의 주소값에 0을 넣는것이고 후자는 정수 0을 n에 넣겠다라는 의미이다.
		*/

		printf("\n");

		// 문자
		char strA = 'A';
		cout << "strA : " << strA << endl;

		// 문자열
		char strB[4] = "abc";
		cout << "strB : " << strB << endl;

		/*
		- C / C++ 언어의 문자열 표현 방법
		 ㄴ C / C++ 언어는 ""조합을 통해서 문자열을 표현하는것이 가능하며 이때 char의 배열을 이용한다.
		 ㄴ 또한, 문자열 상수를 통해 초기화를 진행할 경우 NULL 문자를 명시적으로 기입하지 않아도 된다.

		 char arr1[] = { 'h', 'i', '~' };
		  ㄴ 문자만 저장된 배열 -> 문자열이라고 할 수 없다.

		 char arr1[] = { 'h', 'i', '~', '\0' };
		  ㄴ 문자열 배열

		- 문자 배열과 문자열의 차이점은 \NULL(\0)의 포함 여부

		- 문자열 저장을 목적으로 char형 배열을 선언할 경우 \NULL은 문자열 마지막에 자동으로 삽입된다.

		- NULL 문자의 아스키 코드 값은 0이다.
		  ㄴ 그리고 이를 문자의 형태로 출력할 경우 아무런 출력이 발생하지 않는다.

		★ C / C++ 언어에서는 문자열이 되기 위해서 반드시 NULL 문자를 포함해야 한다.
		 ㄴ 이유 ? : 끝을 나타내기 위해
		*/

		char strC[20] = "i like game.!";

		cout << strC << endl;

		strC[10] = '\0';

		cout << strC << endl;

		strC[2] = '\0';

		cout << strC << endl;
#endif
	}
}

/*
※ String 사용 금지

과제 1. 주민번호 생성기

- 시작하면 원하는 생년을 입력받는다. (4자리, 2자리 처리)
 ㄴ EX : 1975 / 75

- 월과 일을 입력 (2자리, 1자리 처리)
 ㄴ EX : 06 / 6


- 예외처리 : 31일이 있는 달과 30일까지만 있는 달, 그리고 2월도 예외처리 한다.

- 성별 선택 (남자는 1 또는 3 / 여자는 2 또는 4)
 ㄴ 만약 다른 값을 입력하면 성별을 랜덤으로 결정

- 마지막 6자리는 랜덤으로 출력
 ㄴ 예외처리 : 단, 0이 나오면 안된다.



과제 2. 문자열 과제 (손코딩) - 수요일에 타임어택

- 문자를 입력 받아 입력받은 문자를 거꾸로 출력한다.
 ㄴ EX : ABCD -> DCBA

- 있는 그대로 출력하지만 짝수에 있는 문자만 거꾸로 출력한다.
 ㄴ EX : ASDFG -> AFDSG

- 주민번호를 입력하고 -이 제거된 주민번호로 출력한다.
 ㄴ EX : 1234567 - 12345678 -> 123456712345678


한줄 조사. 사용자 정의 자료형

- 노트에 적어온다.

- 비유할것 생각해 온다.

*/