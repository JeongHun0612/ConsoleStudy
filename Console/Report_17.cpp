#include "Report_17.h"

//���� 2. ���ڿ� ����(���ڵ�) - �����Ͽ� Ÿ�Ӿ���
//
//- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
//�� EX : ABCD->DCBA
//
//- �ִ� �״�� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ����Ѵ�.
//�� EX : ASDFG->AFDSG
//
//- �ֹι�ȣ�� �Է��ϰ� - �� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
//�� EX : 1234567 - 12345678 -> 123456712345678
//
//
//���� ����.����� ���� �ڷ���
//
//- ��Ʈ�� ����´�.
//
//- �����Ұ� ������ �´�.

namespace REPORT_17
{
	void Run()
	{
		char strValue[10];

		cout << "���� �Է� : ";
		cin >> strValue;

		int strValueLength = StrLength(strValue, sizeof(strValue));

		cout << "�Ųٷ� ��� : ";
		for (int i = strValueLength; i >= 0; i--)
		{
			cout << strValue[i];
		}
		cout << '\n';

		cout << "¦���� �ִ� ���ڸ� �Ųٷ� ��� : ";

		for (int i = 0; i < strValueLength; i++)
		{
			if (i % 2 == 0)
			{
				cout << strValue[i];
			}
			else
			{
				cout << strValue[strValueLength - i - (strValueLength % 2)];
			}
		}

		cout << "\n\n";

		// --------------------------------------------------------------

		char ssn[15];
		cout << "�ֹι�ȣ�Է� : ";
		cin >> ssn;

		int ssnLength = StrLength(ssn, sizeof(ssn));

		for (int i = 0; i < ssnLength; i++)
		{
			if (ssn[i] != '-')
			{
				cout << ssn[i];
			}
		}
	}

	int StrLength(char strValue[], int strSize)
	{
		for (int i = 0; i < strSize; i++)
		{
			if (strValue[i] == NULL)
			{
				return i;
			}
		}
	}
}
