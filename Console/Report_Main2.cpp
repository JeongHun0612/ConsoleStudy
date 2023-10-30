#include "Family.h"

//과제 2. 우리 가족은 말이죠....
//
//- 클래스를 활용해 우리 가족을 소개하는 내용을 출력한다.
//
//※ 객체지향적으로 구성한다.

void LinePrint();

void main()
{
	Family grandMohter = Family("할머니", "김용임", 84, "010-9184-5911");
	Family fother = Family("아빠", "송봉현", 60, "010-5323-3442");
	Family brother = Family("형", "송정현", 32, "010-6371-3442");

	cout << "우리 가족을 소개합니다!" << endl;
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