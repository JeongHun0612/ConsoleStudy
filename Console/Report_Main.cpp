#include "Report_10.h"
#include "Report_11.h"

#include "Report_12.h"
#include "Report_13.h"
#include "Report_14.h"
#include "Report_15.h"


#pragma region 23/05/11 과제
/*
과제 1. 게임 평가 평균값 구하기

- 항목은 6개

- 게임 평가 : 캐릭터 배경 퀘스트 아이템 과금 레이드 (기타 등등)

- 조건 : 1차원 배열로 값을 정한 뒤 평균값을 구해서 출력을 시킨다.
 ㄴ 1. 값을 입력하는 버전
 ㄴ 2. 값을 입력하는 버전 X

 과제 2. 월남뽕 (타임 어택)

- 치트 필수

- ♠ 1 ~ 13까지의 카드

- ◆	 1 ~ 13까지의 카드

- ♣ 1 ~ 13까지의 카드

- ♥ 1 ~ 13까지의 카드

※ 종류별 13장 -> 총 52장

- 예외처리
 ㄴ A -> 1
 ㄴ J -> 11
 ㄴ Q -> 12
 ㄴ K -> 13

- 52장의 카드를 최소 한번 랜덤으로 섞어주고 그 후 매턴 마다 3장씩 뒤집는다.

- 앞쪽에 배치된 두장의 카드를 보고 최소 배팅액 이상의 금액을 배팅한다.

- 배팅 후 세번째 카드의 수가 앞서 오픈된 카드 숫자의 사이에 있다면 배팅금의 2배 획득하여 소지금 추가

- 반대라면 소지금에서 배팅한 만큼 마이너스

- 필수 : 한턴이 끝나고 사용된 카드는 버려져 사용할 수 없다.

- 종료 조건 : 돈을 다 잃거나 카드가 전부 떨어졌을 때
*/
#pragma endregion 게임 평가 편균값 구하기, 월남뽕

#pragma region 23/05/12 과제
/*
- 과제 1 + 2 + 3 + 4 중 3개 미만으로 할 시 깜지 추가

과제 1. rand()를 활용한 랜덤값 출력

- 900경부터 -> 923경까지의 랜덤한 숫자를 뽑으시오.


- Keyword : (조건문, 반복문)
- 필수 : 분포도
 ㄴ 총 10번의 분포도를 화면에 출력하고 확률을 표시한다.


과제 2. 복습 과제

- 두 정수의 합을 구하는 프로그램 작성

- 두 개의 숫자를 사용자를 통해 입력 받는다.

- 입력한 두 숫자 사이의 합을 출력하면 OK

- 예외처리 : 5를 누르고 1을 누른다 -> X

- 숫자의 합이 100이상이면 프로그램은 자동으로 종료된다.

EX) 1과 5을 입력 -> 결과값 : 9


과제 3. 짝 맞추기

- 사이즈 : 5 X 4

- ☆ ★ ◇ ◆ ♤ ♠ ♡ ♥ ♧ ♣

- 짝이 맞춰진 번호는 계속 오픈된 상태로 있어야 한다.

- 2가지 버전으로 치트 만들기

ㄴ 1. 치트키를 누르면 패를 전부 오픈 시켜 플레이어에게 보여주고 5초뒤에 다시 원상 복귀 시킨다.

ㄴ 2. 치트키를 누르면 한쌍의 카드를 제외하고 전부 오픈된다.
	  사용자가 마지막 한쌍을 맞추면서 게임이 종료되면 OK


과제 4. 하이로우세븐

- 치트 필수

- ♠ 1 ~13까지의 카드

- ◆ 1 ~13까지의 카드

- ♣ 1 ~13까지의 카드

- ♥ 1 ~13까지의 카드

※ 종류별 13장->총 52장

- 52장의 카드를 최소 한번이상 랜덤으로 섞고 그후 매턴마다 5장씩 뒤집는다.

- 앞쪽에 배치된 다섯장의 카드를 보고 6번째 카드의 숫자를 예측하는 게임

- 세븐보다 높으면 하이, 낮으면 로우, 아니면 세븐인지 중에 1개 배팅

- 세븐이면 13배 배당금 획득


타임어택. 월남뽕

- 시간은 14분
*/
#pragma endregion rand()를 활용한 랜덤값 출력, 두 정수 사이의 합 구하기, 짝 맞추기, 하이로우세븐

void main()
{
	// 23/05/11 과제
	//REPORT_10::Run();
	//REPORT_11::Run();


	// 23/05/12 과제
	//REPORT_12::Run(); // rand()를 활용한 랜덤값 출력
	
	//REPORT_13::Run(); // 두 정수 사이의 합 구하기
	 
	REPORT_14::Run(); // 짝 맞추기 게임
	
	//REPORT_15::Run(); // 하이로우세븐

}

