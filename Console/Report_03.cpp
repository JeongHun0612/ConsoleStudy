#include <iostream>

/*
과제 1. 연산자 활용

- 2개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성

- 3개의 정수(num1, num3, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성

EX) (num1 + num2) * (num3 + num1) % num1 = ?

- 입력받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성

EX) 7과 2가 입력되면 몫으로 3, 나머지 1이 출력되면 OK


과제 2. 반복문 출력

- for / while / do ~ while 3가지 버전으로
 ㄴ 20에서 1까지 출력
 ㄴ 1부터 20까지 출력 -> 단, 짝수만
	ㄴ 배운것 이외에는 사용금지


과제 3. 반복문 숙달

- 정수 하나를 입력 받아 -5씩 반복적으로 연산되는 식을 만든다.

- 종료조건 : - 15를 넘어가면 탈출

- 조건 : 입력 받은 값은 -10 ~ -10사이의 숫자여야 하고 이외의 값 입력시 그냥 종료시킨다.

EX) cin >> num ( -10 ~ 10)

※ 조건식과 논리 연산자를 잘 보고 조건식을 만들어 while문이 돌아가게 만든다.


과제 4. 마름모 찍기


도전 과제 1. 마름모 찍기

- 반복문 1번 -> 1줄 -> 마름모 찍기


한줄 조사. 조건문
 ㄴ 노트에 적어온다.
 ㄴ 비유할것 생각해 온다. (EX : 조건문은 OOO이다.)
*/

using namespace std;

using std::cout;
using std::cin;
using std::endl;

void main()
{
#pragma region for문 연습문제
	//int firstNum = 2;
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d X %d = %d ", firstNum, 1, firstNum * 1);
	//		printf("%d X %d = %d ", firstNum, 2, firstNum * 2);
	//		printf("%d X %d = %d ", firstNum, 3, firstNum * 3);
	//		printf("%d X %d = %d ", firstNum, 4, firstNum * 4);
	//		printf("%d X %d = %d ", firstNum, 5, firstNum * 5);
	//		printf("%d X %d = %d ", firstNum, 6, firstNum * 6);
	//		printf("%d X %d = %d ", firstNum, 7, firstNum * 7);
	//		printf("%d X %d = %d ", firstNum, 8, firstNum * 8);
	//		printf("%d X %d = %d ", firstNum, 9, firstNum * 9);
	//		firstNum++;
	//	}
	//	cout << '\n';
	//}

	//int firstNum = 2;
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		for (int k = 1; k < 10; k++)
	//		{
	//			printf("%d X %d = %d ", firstNum, k, firstNum * k);
	//		}
	//		firstNum++;
	//	}
	//	cout << '\n';
	//}
#pragma endregion

#pragma region 과제 1. 연산자 활용
	// 과제 1. =============================================================================================================
	printf("- 과제 1. 연산자 활용 -\n\n");

	// 과제 1.1 ------------------------------------------------------------------------------------------------------------
	printf("과제 1.1 2개의 정수를 받아서 두 수의 덧샘과 뺄샘의 결과를 출력하는 프로그램 작성\n");
	printf("---------------------------------------------------------------------------------------------\n");

	int num1, num2, num3, result;
	printf("정수 2개를 입력하시오.\n");
	scanf_s("%d %d", &num1, &num2);

	printf("덧샘 : %d, 뺄샘 : %d", num1 + num2, num1 - num2);
	printf("\n\n");

	// 과제 1.2 ------------------------------------------------------------------------------------------------------------
	printf("과제 1.2 3개의 정수(num1, num3, num3)를 받아서 다음 연산의 결과를 출력하는 프로그램 작성\n");
	cout << "EX) (num1 + num2) * (num3 + num1) % num1 = ?" << endl;
	printf("---------------------------------------------------------------------------------------------\n");

	printf("정수 3개를 입력하시오.\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = (num1 + num2) * (num3 + num1) % num1;
	
	cout << "(num1 + num2) * (num3 + num1) % num1 = " << result << endl;
	printf("\n\n");

	// 과제 1.3 ------------------------------------------------------------------------------------------------------------
	printf("과제 1.3 입력받은 두 정수를 나누었을때 얻게 되는 몫과 나머지를 출력하는 프로그램 작성\n");
	printf("---------------------------------------------------------------------------------------------\n");
	printf("정수 2개를 입력하시오.\n");
	scanf_s("%d %d", &num1, &num2);

	printf("몫 : %d, 나머지 : %d", num1 / num2, num1 % num2);

	printf("\n\n");
#pragma endregion

#pragma region 과제 2. 반복문 출력
	// 과제 2. =============================================================================================================
	printf("- 과제 2. 반복문 출력 -\n\n");

	// 과제 2.1 ------------------------------------------------------------------------------------------------------------
	printf("과제 2.1 for / while / do ~ while 3가지 버전으로 20에서 1까지 출력\n");
	printf("---------------------------------------------------------------------------------------------\n");

	cout << "for문으로 20에서 1까지 출력" << endl;
	for (int i = 20; i > 0; i--)
	{
		printf("%d ", i);
	}
	printf("\n\n");

	cout << "while문으로 20에서 1까지 출력" << endl;
	int num = 20;

	while (num > 0)
	{
		printf("%d ", num);
		num--;
	}
	printf("\n\n");

	cout << "do ~ while문으로 20에서 1까지 출력" << endl;
	num = 20;

	do
	{
		printf("%d ", num);
		num--;
	} while (num > 0);
	printf("\n\n");


	// 과제 2.2 ------------------------------------------------------------------------------------------------------------
	printf("과제 2.2 for / while / do ~ while 3가지 버전으로 1부터 20까지 출력 단, 짝수만\n");
	printf("---------------------------------------------------------------------------------------------\n");

	cout << "for문으로 1부터 20까지 짝수만 출력" << endl;
	for (int i = 1; i <= 20; i+=2)
	{
		printf("%d ", i + 1);
	}
	printf("\n\n");

	cout << "while문으로 1부터 20까지 짝수만 출력" << endl;
	num = 1;

	while (num < 21)
	{
		printf("%d ", num + 1);
		num += 2;
	}
	printf("\n\n");

	num = 1;
	cout << "do ~ while문으로 1부터 20까지 짝수만 출력" << endl;
	do
	{
		printf("%d ", num + 1);
		num += 2;
	} while (num < 21);
	printf("\n\n");
#pragma endregion

#pragma region 과제 3. 반복문 숙달
	// 과제 3. =============================================================================================================
	printf("- 과제 3. 반복문 숙달 -\n\n");

	// 과제 3.1 ------------------------------------------------------------------------------------------------------------
	printf("과제 3.1\n");
	printf("---------------------------------------------------------------------------------------------\n");

	int num4;
	printf("정수 입력 : ");
	scanf_s("%d", &num4);

	while (num4 < 10 && num4 > -10)
	{
		while (num4 >= -15)
		{
			printf("num4 : %d\n", num4);
			num4 -= 5;
		}
	}
	printf("\n\n");
#pragma endregion

#pragma region 과제 4. 마름모 찍기
	// 과제 4. 마름모 찍기

	// 과제 4. =============================================================================================================
	printf("과제 4. 마름모 찍기\n\n");

	// 과제 4.1 ------------------------------------------------------------------------------------------------------------
	printf("과제 4.1\n");
	printf("---------------------------------------------------------------------------------------------\n");
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		cout << '\n';
	}

	// 과제 4.2 ------------------------------------------------------------------------------------------------------------
	printf("과제 4.2\n");
	printf("---------------------------------------------------------------------------------------------\n");
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		cout << '\n';
	}

	// 과제 4.3 ------------------------------------------------------------------------------------------------------------
	printf("과제 4.3\n");
	printf("---------------------------------------------------------------------------------------------\n");

	int lineNum = 6;
	for (int i = 1; i <= lineNum; i++)
	{
		for (int j = lineNum; (j - i) > 0; j--)
		{
			printf(" ");
		}
		for (int k = 0; k < (i * 2); k++)
		{
			printf("*");
		}
		cout << '\n';
	}

	lineNum = 5;
	for (int i = 0; i < lineNum; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}

		for (int k = (lineNum * 2); k > (i * 2); k--)
		{
			printf("*");
		}
		
		cout << '\n';
	}

	// 도전 과제 1. 마름모 찍기 =============================================================================================================
	printf("도전 과제 1.\n");
	printf("---------------------------------------------------------------------------------------------\n");

	//lineNum = 11;
	//for (int i = 0; i < lineNum; i++)
	//{
	//	for (int j = i % (lineNum / 2); j < (lineNum / 2); j++)
	//	{
	//		printf(" ");
	//	}

	//	printf("*");
	//	cout << '\n';
	//}
#pragma endregion
}