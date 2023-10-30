#include <iostream>
#include <time.h>
#include <random> // rand()를 사용하는 것보다 훨씬 무겁기 때문에 데이터양에 따라 효율적으로 판단해서 사용해야 한다.

using namespace std;

#pragma region 난수 + 셔플
/*
▶ 난수

- 난수(Random Number) : 무작위로 만들어 지는 알 수 없는 값
 ㄴ 패를 무작위로 섞기 위해 or 적의 움직임을 알 수 없도록 하기 위해 난수가 반드시 필요하다.

 ㄴ rand() 함수를 호출하면 0 ~ 32767중의 임의의 값 중 하나를 불러온다.
 ㄴ rand() 함수는 일정한 규칙에 따라 난수를 생성하는데 규칙이 항상 같으면 난수가 생성되는 순서도 항상 같다.

▷ 난수 생성 루틴

- 이러한 난수 생성 루틴 규칙에 변화를 줄 수 있는 srand()라는 함수가 있었다.

- srand()는 난수 발생기에 난수를 발생시키는 시작점(Seed)을 제공하여 난수 발생기가 시작점을 기준으로 난수를 발생시킨다.

- 난수 발생시간 실행될 시점의 시간은 예측할 수 없기 때문에 시간값을 시작점으로 사용한다면 난수를 만들 수 있다.

▶ 셔플

- 게임 프로그래밍에서의 셔플은 데이터를 섞는 행위를 말한다.

ㄴ 1. 프로그래머가 작성한 방식 (이 방법을 선호)
ㄴ 2. 관련 함수를 이용해서
*/

#pragma endregion

void main()
{
	srand(time(NULL));

	int maxCard = 52;
	int deck[52];

	int damage = (rand() % 10) + 1;

	cout << "데미지 : " << damage << endl;

	for (int i = 0; i < 10; i++)
	{
		printf("%d \t", rand());
	}

	// 셔플
	int num[10];
	int dest, sour, temp;

	for (int i = 0; i < 10; i++)
	{
		num[i] = i;
	}

	// 프로그래머가 확인을 하기 위한 작업
	for (int i = 0; i < 10; i++)
	{
		cout << num[i] << endl << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		dest = rand() % 10;
		sour = rand() % 10;

		temp = num[dest];
		num[dest] = num[sour];
		num[sour] = temp;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "] = " << num[i] << endl;
	}

	cout << endl;

	/*
	▶ 완벽한 난수

	- srand / rand() 함수의 조합은 완벽한 난수를 생성할 수 없다.

	- 그렇기때문에 C+11 버전에서 새롭게 추가된 랜덤 디바이스를 이용해야 완벽한 난수를 생성하는것이 가능하다.
		ㄴ Random Number Generator
	*/

	std::random_device oRandomDevice;

	// 시드 설정 (난수 생성 엔진 초기화)
	// 유사 난수 생성기 -> 메르센 수 19937을 쓴다는 것
	std::mt19937_64 rnd(oRandomDevice());

	cout << "RandomDevice : \n" << rnd << endl;

	int RandomMin = 1;
	int RandomMax = 10;

	// 정수
	std::uniform_int_distribution<int> range(RandomMin, RandomMax);

	// 실수
	//std::uniform_real_distribution<float> range(RandomMin, RandomMax);

	// nomal : 정규분포
	//std::normal_distribution<double> range(RandomMin, RandomMax);

	cout << '\n';

	int RandomValue = range(rnd);

	cout << "추출값 : " << RandomValue << endl;

	int nNumberA = (rand() % 10) + 1;
	int nNumberB = (rand() % 10) + 1;

	int nNumberC = (oRandomDevice() % 10) + 1;
	int nNumberD = (oRandomDevice() % 10) + 1;

	cout << "nNumberC : " << nNumberC << endl;
	cout << "nNumberD : " << nNumberD << endl;
}

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


