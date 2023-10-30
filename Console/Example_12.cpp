#include "Example_12.h"

// ������ ������
#define EXAMPLE_TYPE_PRINT				1
// ����
#define EXAMPLE_TYPE_TERNARY_OPERATOR	2
// ���ڿ�
#define EXAMPLE_TYPE_STRING				3

#define EXAMPLE_TYPE	EXAMPLE_TYPE_STRING


namespace EXAMPLE_2
{
	void Example()
	{
#if EXAMPLE_TYPE == EXAMPLE_TYPE_PRINT
		// !Do nothing

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_TERNARY_OPERATOR

		cout << "���� ������" << endl;

		int numA, numB;
		cout << "���� �Է� : ";
		cin >> numA;

		numB = (numA > 0) ? numA : numA * (-1);

		cout << "�Է��� ���� �� : " << numB << endl;

		printf("\n");

		int numberA;
		int numberB = 100;
		int result;

		cout << "���� �Է� : ";
		cin >> numberA;

		result = (numberA < 10) ? numberA : numberB;

		cout << "���� ������ ����� : " << result << endl;

#else
		char moonja = 'A';
		int numA = 20;
		float numB = 3.2f;
		bool numC = true;

		cout << moonja << endl;

		cout << sizeof(moonja) << " : ����Ʈ" << endl;
		cout << sizeof(numA) << " : ����Ʈ" << endl;
		cout << sizeof(numB) << " : ����Ʈ" << endl;
		cout << sizeof(numC) << " : ����Ʈ" << endl;

		/*
		�� ���Ǹ� ����� �� ���ڿ�

		- C / C++�� Ÿ�Կ� ������ ���
		  �� �⺻������ NULL ����

		 �� ���� ����
		 - ���ڿ� ���ڿ��� �������� ���� 
		  �� ���ڴ� NULL ���� �߰� �ȵȴ�.
		  �� ���ڿ��� NULL ���ڰ� �߰��ȴ�.

		 - ���ڿ��� ������ũ�Ⱑ ��ȣ�ϱ⶧���� �������� ����ִ� NULL���� ���� ���� �� �� �ִ�.
		 - ���ڴ� ������ũ�Ⱑ Ȯ���ϱ⶧���� NULL�� �ʿ����.


		�� NULL

		- iostream�� ���ǵǾ� �ִ�.

		- NULL�� 0 �ּҸ� �ǹ��ϸ� �׷��⿡ ���� ��� ������ ������ �ʱ�ȭ �Ҷ��� ����� �� �ִ�.

		EX)
		
		char* p = NULL		==		char* p = 0;

		int n = NULL		==		int n = 0 ;

		- ���ڴ� p��� ������ �ּҰ��� 0�� �ִ°��̰� ���ڴ� ���� 0�� n�� �ְڴٶ�� �ǹ��̴�.
		*/

		printf("\n");

		// ����
		char strA = 'A';
		cout << "strA : " << strA << endl;

		// ���ڿ�
		char strB[4] = "abc";
		cout << "strB : " << strB << endl;

		/*
		- C / C++ ����� ���ڿ� ǥ�� ���
		 �� C / C++ ���� ""������ ���ؼ� ���ڿ��� ǥ���ϴ°��� �����ϸ� �̶� char�� �迭�� �̿��Ѵ�.
		 �� ����, ���ڿ� ����� ���� �ʱ�ȭ�� ������ ��� NULL ���ڸ� ��������� �������� �ʾƵ� �ȴ�.

		 char arr1[] = { 'h', 'i', '~' };
		  �� ���ڸ� ����� �迭 -> ���ڿ��̶�� �� �� ����.

		 char arr1[] = { 'h', 'i', '~', '\0' };
		  �� ���ڿ� �迭

		- ���� �迭�� ���ڿ��� �������� \NULL(\0)�� ���� ����

		- ���ڿ� ������ �������� char�� �迭�� ������ ��� \NULL�� ���ڿ� �������� �ڵ����� ���Եȴ�.

		- NULL ������ �ƽ�Ű �ڵ� ���� 0�̴�.
		  �� �׸��� �̸� ������ ���·� ����� ��� �ƹ��� ����� �߻����� �ʴ´�.

		�� C / C++ ������ ���ڿ��� �Ǳ� ���ؼ� �ݵ�� NULL ���ڸ� �����ؾ� �Ѵ�.
		 �� ���� ? : ���� ��Ÿ���� ����
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
�� String ��� ����

���� 1. �ֹι�ȣ ������

- �����ϸ� ���ϴ� ������ �Է¹޴´�. (4�ڸ�, 2�ڸ� ó��)
 �� EX : 1975 / 75

- ���� ���� �Է� (2�ڸ�, 1�ڸ� ó��)
 �� EX : 06 / 6


- ����ó�� : 31���� �ִ� �ް� 30�ϱ����� �ִ� ��, �׸��� 2���� ����ó�� �Ѵ�.

- ���� ���� (���ڴ� 1 �Ǵ� 3 / ���ڴ� 2 �Ǵ� 4)
 �� ���� �ٸ� ���� �Է��ϸ� ������ �������� ����

- ������ 6�ڸ��� �������� ���
 �� ����ó�� : ��, 0�� ������ �ȵȴ�.



���� 2. ���ڿ� ���� (���ڵ�) - �����Ͽ� Ÿ�Ӿ���

- ���ڸ� �Է� �޾� �Է¹��� ���ڸ� �Ųٷ� ����Ѵ�.
 �� EX : ABCD -> DCBA

- �ִ� �״�� ��������� ¦���� �ִ� ���ڸ� �Ųٷ� ����Ѵ�.
 �� EX : ASDFG -> AFDSG

- �ֹι�ȣ�� �Է��ϰ� -�� ���ŵ� �ֹι�ȣ�� ����Ѵ�.
 �� EX : 1234567 - 12345678 -> 123456712345678


���� ����. ����� ���� �ڷ���

- ��Ʈ�� ����´�.

- �����Ұ� ������ �´�.

*/