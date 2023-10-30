#include "Example_14.h"

namespace EXAMPLE_4
{
	void Example()
	{
		cout << "4�� ���ڿ�" << endl;
		LinePrint();

		// 1. strlen() : ���ڿ� ����
		// �� EX) strlen("���ڿ�");

		char strA[100] = "abcdef";
		int lenA = strlen(strA);

		cout << strlen(strA) << endl;;
		cout << "���ڿ��� ���� : " << lenA << endl;

		LinePrint();

		//2. strcmp(���ڿ�, ���ڿ�) : ���ڿ� ��
		/*
		int strcmp(char* str1, char* str2)
		{
			if(�� ���ڰ� ������?)
			{
				return 0;
			}
			else
			{
				if(�չ��ڰ� �� ū��?)
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

		stringA < stringB = 0���� �۴�
		stringA == stringB = 0
		stringA > stringB = 0���� ũ��.
		*/

		char strB[10] = "abc";
		char strC[10] = "abc";
		char strD[10] = "abd";

		int lenB = strcmp(strB, strC);
		int lenC = strcmp(strB, strD);

		cout << "���ڿ� �� : " << lenB << endl;
		cout << "���ڿ� �� : " << lenC << endl;

		LinePrint();

		// 3. strcpy(���ڿ�, ���ڿ�) : ���ڿ� ����

		char strE[10] = "ABCDEFG";
		char strF[10] = "HIJK";

		cout << "���ڿ� ������ : " << strE << endl;

		strcpy_s(strF, strE);
		/*strcpy_s
		strncpy (strF, strE, size);
		strncpy_s*/

		// ���� ���� : �տ� �ִ� ���ڿ��� ũ�Ⱑ ������ ���ڿ� ���� �۰� �Ǹ� ������.

		cout << "���ڿ� ������ : " << strF << endl;

		LinePrint();

		// 4. strcat(���ڿ�, ���ڿ�) : ���ڿ� ����

		char strG[100] = "���� ������ ";
		char strH[100] = "���� ���������";

		cout << "���ڿ� ���� �� : " << strG << endl;

		strcat_s(strG, strH);

		cout << "���ڿ� ���� �� : " << strG << endl;

		LinePrint();

		// 5. strtok : ���ڿ� �ڸ���
		// �� 4�� ���ڿ��� �ƴ����� ���� ����¿� ���� ���δ�.
		// �� �����찡 �����ϴ� �Լ� (�ؽ�Ʈ + INI)
		// �� �ڸ� ���� EX) _ / \ ���..
		// �� �������� ��õ : �ظ��ϸ� , �� ���� ������

		char strI[10] = "ABCD EFGH";

		/*strtok(strI, " ");*/

		cout << strI << endl;

		// ���� "��"
		char strJ[100] = "���ڿ�";
		char* strK = "�̷��Ե� ����� �����ϳ�?";
		std::string strZ = "�̰͵� �ȴ�.";
		const char* strW = "���� �� ������?";
	}

	void LinePrint()
	{
		cout << "======================================" << endl;
	}

}

/*

���� 1. ���� �����̵�

- ������ : 5 X 4

- ������ġ -> �����ϴ�

- ġƮ �ʼ�
 �� ġƮŰ�� ������ �ϳ��� ���ڸ� �����ϰ� ������ ���ڴ� ���ĵȴ�.
 �� ����ڰ� ������ ������ ���߸鼭 ���α׷��� ������ OK

- �Ϲ������� ���� �꿡 ����� ����ó�� �ؿ´�.



���� 2. �ִϸ��̼� ���� �����̵�

- �����͸� Ȱ���ؼ� �ؿ´�.

- ���� ����

- ��Ʈ) cls, char ������ ����

���� ����. Ŭ����

- ��Ʈ�� ����´�.

- �̷п� ����� ª�� ����ϰ� ���α׷��ӽ����� ������ �´�.


���� ���� 1. ���ڿ� ���ڿ� ����

- ���� �ð� : 5��

<���� ����>
- C++ ���� Ǯ��� �ϰ� ��ĭ�� �˸°� ä�� �����ÿ�.

- C��Ÿ�� ���̺귯���� STL�� ��Ÿ ���̺귯�� �Լ��� ����ϸ� �ȵ˴ϴ�.

- Ư��, STL String�� ����� �� �ٷ� Ż�� ó���Ǵ� ���ǹٶ��ϴ�.

- �׸��� �ۼ��� ����� ���ؼ� �����ϰ� �� �׷��� �ߴ��� �ּ��� �߰��Ͻÿ�.

����. �־��� ���ڿ��� �ܾ� ������ ������ ������ ����ϼ���.
<��>
�Է°� : "Hello World this is Pearl Abyss"
��ȯ�� : "Pearl Abyss is this World Hello"

<����>
�Է� ���ڿ��� �յڿ� ������ ���ٰ� �����մϴ�.
��� �ܾ�� ���� �� ĭ���� ���еȴٰ� �����մϴ�.

void ReverseWorld(char* output, int outputArraySize, count char* input)
{
	// �̰���  ä�� �����ÿ�.

}

*/