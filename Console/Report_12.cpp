#include "Report_12.h"

//과제 1. rand()를 활용한 랜덤값 출력
//
//- 900경부터 -> 923경까지의 랜덤한 숫자를 뽑으시오.
//
//- Keyword : (조건문, 반복문)
//- 필수 : 분포도
//ㄴ 총 10번의 분포도를 화면에 출력하고 확률을 표시한다.

namespace REPORT_12
{
	void Run()
	{
		srand(time(NULL));

		// n번 출력
		for (int i = 0; i < 10; i++)
		{
			cout << "Rand : " << Rand() << endl;
		}

		cout << '\n';

		// RandomDevice를 사용한 랜덤 숫자
		RandomDevice();
	}

	unsigned long long Rand()
	{
		unsigned long long randNum = 9000000000000000000;
		unsigned long long numDigit = 1;

		// i = n번째 자릿수
		for (int i = 1; i < 19; i++)
		{
			if (i == 17)
			{
				randNum += (rand() % 3) * numDigit;

			}
			else if (i == 18)
			{
				randNum += (rand() % 2) * numDigit;

			}
			else
			{
				randNum += (rand() % 10) * numDigit;
			}

			numDigit *= 10;
		}

		return randNum;
	}

	void RandomDevice()
	{
		std::random_device oRandomDevice;

		// 시드 설정 (난수 생성 엔진 초기화)
		std::mt19937_64 rnd(oRandomDevice());

		unsigned long long randomMin = 9000000000000000000;
		unsigned long long randomMax = 9230000000000000000;

		std::uniform_int_distribution<int> range(randomMin, randomMax);

		// 정규 분포
		//std::normal_distribution<double> range(randomMin, randomMax);

		cout << "RandomDevice : " << (oRandomDevice() % randomMax) + randomMin << endl;
	}
}
