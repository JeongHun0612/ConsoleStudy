#include "Example_14.h"

namespace EXAMPLE_4
{
	void Example()
	{
		cout << "4대 문자열" << endl;
		LinePrint();

		// 1. strlen() : 문자열 길이
		// ㄴ EX) strlen("문자열");

		char strA[100] = "abcdef";
		int lenA = strlen(strA);

		cout << strlen(strA) << endl;;
		cout << "문자열의 길이 : " << lenA << endl;

		LinePrint();

		//2. strcmp(문자열, 문자열) : 문자열 비교
		/*
		int strcmp(char* str1, char* str2)
		{
			if(두 문자가 같은지?)
			{
				return 0;
			}
			else
			{
				if(앞문자가 더 큰지?)
				{
					return -1;
				}
				else
				{
					return 1;
				}
			}
			return 0;
		}

		stringA < stringB = 0보다 작다
		stringA == stringB = 0
		stringA > stringB = 0보다 크다.
		*/

		char strB[10] = "abc";
		char strC[10] = "abc";
		char strD[10] = "abd";

		int lenB = strcmp(strB, strC);
		int lenC = strcmp(strB, strD);

		cout << "문자열 비교 : " << lenB << endl;
		cout << "문자열 비교 : " << lenC << endl;

		LinePrint();

		// 3. strcpy(문자열, 문자열) : 문자열 복사

		char strE[10] = "ABCDEFG";
		char strF[10] = "HIJK";

		cout << "문자열 복사전 : " << strE << endl;

		strcpy_s(strF, strE);
		/*strcpy_s
		strncpy (strF, strE, size);
		strncpy_s*/

		// 주의 사항 : 앞에 있는 문자열의 크기가 복사할 문자열 보다 작게 되면 터진다.

		cout << "문자열 복사후 : " << strF << endl;

		LinePrint();

		// 4. strcat(문자열, 문자열) : 문자열 연결

		char strG[100] = "오늘 과제는 ";
		char strH[100] = "정말 재밌을꺼야";

		cout << "문자열 연결 전 : " << strG << endl;

		strcat_s(strG, strH);

		cout << "문자열 연결 후 : " << strG << endl;

		LinePrint();

		// 5. strtok : 문자열 자르기
		// ㄴ 4대 문자열은 아니지만 파일 입출력에 많이 쓰인다.
		// ㄴ 윈도우가 좋아하는 함수 (텍스트 + INI)
		// ㄴ 자를 조건 EX) _ / \ 등등..
		// ㄴ 개인적인 추천 : 왠만하면 , 는 쓰지 말도록

		char strI[10] = "ABCD EFGH";

		/*strtok(strI, " ");*/

		cout << strI << endl;

		// 문자 "열"
		char strJ[100] = "문자열";
		char* strK = "이렇게도 사용이 가능하네?";
		std::string strZ = "이것도 된다.";
		const char* strW = "나는 왜 빼먹지?";
	}

	void LinePrint()
	{
		cout << "======================================" << endl;
	}

}

/*

과제 1. 숫자 슬라이드

- 사이즈 : 5 X 4

- 시작위치 -> 우측하단

- 치트 필수
 ㄴ 치트키를 누르면 하나의 숫자를 제외하고 나머지 숫자는 정렬된다.
 ㄴ 사용자가 마지막 조각을 맞추면서 프로그램이 끝나면 OK

- 일반적으로 게임 룰에 기반한 예외처리 해온다.



과제 2. 애니메이션 숫자 슬라이드

- 포인터를 활용해서 해온다.

- 룰은 동일

- 힌트) cls, char 포인터 문자

한줄 조사. 클래스

- 노트에 적어온다.

- 이론에 기반해 짧고 명료하게 프로그래머스럽게 정리해 온다.


도전 과제 1. 문자와 문자열 과제

- 제한 시간 : 5분

<주의 사항>
- C++ 언어로 풀어야 하고 빈칸을 알맞게 채워 넣으시오.

- C런타임 라이브러리나 STL등 기타 라이브러리 함수를 사용하면 안됩니다.

- 특히, STL String을 사용할 시 바로 탈락 처리되니 유의바랍니다.

- 그리고 작성한 방법에 대해서 간단하게 왜 그렇게 했는지 주석을 추가하시오.

문제. 주어진 문자열을 단어 단위로 순서를 뒤집어 출력하세요.
<예>
입력값 : "Hello World this is Pearl Abyss"
반환값 : "Pearl Abyss is this World Hello"

<조건>
입력 문자열은 앞뒤에 공백이 없다고 가정합니다.
모든 단어는 공백 한 칸으로 구분된다고 가정합니다.

void ReverseWorld(char* output, int outputArraySize, count char* input)
{
	// 이곳을  채워 넣으시오.

}

*/