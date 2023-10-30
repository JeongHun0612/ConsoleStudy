#include "Report_16.h"

//�� String ��� ����
//
//���� 1. �ֹι�ȣ ������
//
//- �����ϸ� ���ϴ� ������ �Է¹޴´�. (4�ڸ�, 2�ڸ� ó��)
//�� EX : 1975 / 75
//
//- ���� ���� �Է�(2�ڸ�, 1�ڸ� ó��)
//�� EX : 06 / 6
//
//
//- ����ó�� : 31���� �ִ� �ް� 30�ϱ����� �ִ� ��, �׸��� 2���� ����ó�� �Ѵ�.
//
//- ���� ����(���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4)
//�� ���� �ٸ� ���� �Է��ϸ� ������ �������� ����
//
//- ������ 6�ڸ��� �������� ���
//�� ����ó�� : ��, 0�� ������ �ȵȴ�.

namespace REPORT_16
{
	void Run()
	{
		srand(time(NULL));

		char ssn[14];

		char year[10];
		char month[10];
		char day[10];
		char gender;

		int nMonth = 0;

		// ���� �Է�
		while (true)
		{
			cout << "���� : ";
			cin >> year;

			int yearLength = StrLength(year);

			if (yearLength != 4 && yearLength != 2)
			{
				cout << "�Է� ����" << endl;
				continue;
			}

			if (yearLength == 4)
			{
				StrCut(year, 0, 2);
			}

			ssn[0] = year[0];
			ssn[1] = year[1];
			break;
		}

		// �� �Է�
		while (true)
		{
			cout << "�� : ";
			cin >> month;

			int monthLength = StrLength(month);

			if (monthLength > 2)
			{
				cout << "�Է� ����" << endl;
				continue;
			}

			else
			{
				if (monthLength == 1)
				{
					nMonth = ConvertCharToInt(month, 0);
				}
				else
				{
					nMonth = ConvertCharToInt(month, 0) * 10 + ConvertCharToInt(month, 1);
				}

				if ((nMonth < 1 || nMonth > 12))
				{
					cout << "�Է� ����" << endl;
					continue;
				}
				else
				{
					if (monthLength == 1)
					{
						char temp = month[0];
						month[0] = '0';
						month[1] = temp;
					}

					ssn[2] = month[0];
					ssn[3] = month[1];
					break;
				}
			}
		}

		// �� �Է�
		while (true)
		{
			cout << "�� : ";
			cin >> day;

			int dayhLength = StrLength(day);

			int nDay = 0;

			if (dayhLength > 2)
			{
				cout << "�Է� ����" << endl;
				continue;
			}
			else
			{
				if (dayhLength == 1)
				{
					nDay = ConvertCharToInt(day, 0);
				}
				else
				{
					nDay = ConvertCharToInt(day, 0) * 10 + ConvertCharToInt(day, 1);
				}


				if (nDay < 1 || nDay > 31)
				{
					cout << "�Է� ����" << endl;
					continue;
				}
				else
				{
					switch (nMonth)
					{
					case 2:
						if (nDay > 28)
						{
							cout << "�Է� ����" << endl;
							printf("%d���� 28�ϱ��� �ֽ��ϴ�.\n", nMonth);
							continue;
						}
						break;
					case 4: case 6: case 9: case 11:
						if (nDay > 30)
						{
							cout << "�Է� ����" << endl;
							printf("%d���� 30�ϱ��� �ֽ��ϴ�.\n", nMonth);
							continue;
						}
						break;
					}

					if (dayhLength == 1)
					{
						char temp = day[0];
						day[0] = '0';
						day[1] = temp;
					}

					ssn[4] = day[0];
					ssn[5] = day[1];
					break;
				}
			}
		}
		
		// ���� �Է�
		while (true)
		{
			cout << "���� ����(���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4)" << endl;
			cin >> gender;

			if (gender == '1' || gender == '2' || gender == '3' || gender == '4')
			{
				ssn[6] = gender;
			}
			else
			{
				int nGender = rand() % 4 + 1;
				ssn[6] = static_cast<char>(nGender) + 48;
			}

			break;
		}

		int randNum;

		// ������ ���� �Է�
		for (int i = 7; i < 13; i++)
		{
			randNum = rand() % 9 + 1;

			ssn[i] = static_cast<char>(randNum) + 48;
		}

		// ������ �ε��� NULL�� ����
		ssn[13] = '\0';

		// �ֹε�Ϲ�ȣ ���
		for (int i = 0; i < 14; i++)
		{
			cout << ssn[i];

			if (i == 5)
			{
				cout << " - ";
			}
		}
	}

	int StrLength(char strValue[])
	{
		int strLength = 0;

		for (int i = 0; i < sizeof(strValue); i++)
		{
			if (strValue[i] == '\0') break;
			strLength++;
		}

		return strLength;
	}

	char* StrCut(char strValue[], int startIndex, int endIndex)
	{
		for (int i = startIndex; i < endIndex; i++)
		{
			strValue[i] = '\0';
			strValue[i] = strValue[i + endIndex];
			strValue[i + endIndex] = '\0';
		}

		return strValue;
	}

	int ConvertCharToInt(char strValue[], int index)
	{
		return (static_cast<int>(strValue[index]) - 48);
	}
}
