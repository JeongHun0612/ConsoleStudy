#include "Family.h"

//���� 2. �츮 ������ ������....
//
//- Ŭ������ Ȱ���� �츮 ������ �Ұ��ϴ� ������ ����Ѵ�.
//
//�� ��ü���������� �����Ѵ�.

void LinePrint();

void main()
{
	Family grandMohter = Family("�ҸӴ�", "�����", 84, "010-9184-5911");
	Family fother = Family("�ƺ�", "�ۺ���", 60, "010-5323-3442");
	Family brother = Family("��", "������", 32, "010-6371-3442");

	cout << "�츮 ������ �Ұ��մϴ�!" << endl;
	LinePrint();


	grandMohter.outPutInfo();
	LinePrint();

	fother.outPutInfo();
	LinePrint();

	brother.outPutInfo();
	LinePrint();
}

void LinePrint()
{
	cout << "===================================" << endl;
}