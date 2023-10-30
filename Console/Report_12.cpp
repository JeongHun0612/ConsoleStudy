#include "Report_12.h"

//���� 1. rand()�� Ȱ���� ������ ���
//
//- 900����� -> 923������� ������ ���ڸ� �����ÿ�.
//
//- Keyword : (���ǹ�, �ݺ���)
//- �ʼ� : ������
//�� �� 10���� �������� ȭ�鿡 ����ϰ� Ȯ���� ǥ���Ѵ�.

namespace REPORT_12
{
	void Run()
	{
		srand(time(NULL));

		// n�� ���
		for (int i = 0; i < 10; i++)
		{
			cout << "Rand : " << Rand() << endl;
		}

		cout << '\n';

		// RandomDevice�� ����� ���� ����
		RandomDevice();
	}

	unsigned long long Rand()
	{
		unsigned long long randNum = 9000000000000000000;
		unsigned long long numDigit = 1;

		// i = n��° �ڸ���
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

		// �õ� ���� (���� ���� ���� �ʱ�ȭ)
		std::mt19937_64 rnd(oRandomDevice());

		unsigned long long randomMin = 9000000000000000000;
		unsigned long long randomMax = 9230000000000000000;

		std::uniform_int_distribution<int> range(randomMin, randomMax);

		// ���� ����
		//std::normal_distribution<double> range(randomMin, randomMax);

		cout << "RandomDevice : " << (oRandomDevice() % randomMax) + randomMin << endl;
	}
}
