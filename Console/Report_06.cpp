#include <iostream>
#include <time.h>
#include <Windows.h>

using namespace std;

/*
婁薯 1. 陛嬪夥嬪爾

- switch僥擊 檜辨п 虜萇棻.

- 纂お 晦棟婁 寡た 晦棟 蹺陛
 中 蟾晦 模雖旎 : 10,000錳
 中 譆模 寡た擎 1,000錳睡攪

- 5っ擊 ж剪釭 頂陛 陛霞 絲擊 瞪睡 檠戲賊 啪歜 謙猿

- 檜晦賊 っ絲縑 x3寡蒂 橢堅 雖賊 っ絲縑 x7寡蒂 檠朝棻.

- 綠望 唳辦 っ絲縑 x5寡蒂 橢朝棻.
*/

int GetRSPResult(int comNumber, int playerNumber);
int GetBetAmount(int rspResult, int betAmount);

void main()
{

#pragma region 婁薯 1. 陛嬪夥嬪爾 啪歜
	// 婁薯 1. 陛嬪夥嬪爾 啪歜
	// ==============================================================================================================

	cout << "婁薯 1. 陛嬪夥嬪爾 啪歜" << endl;
	cout << "---------------------------------------------------------------" << endl;

	srand(time(NULL));

	int count;
	int money, betAmount;
	int comNumber, playerNumber;
	int rspResult;

	count = 5;
	money = 10000;

	while (count > 0)
	{
		comNumber = rand() % 3;
		cout << "纂お : " << comNumber << endl;

		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛      陛嬪 夥嬪 爾  啪歜!!     弛\n");
		printf("弛                               弛\n");
		printf("弛     ⑷營 模雖旎 : %5d錳     弛\n", money);
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		cout << "陴擎 �蝦� : " << count << endl << endl;

		// 寡た旎 摹鷗
		cout << "寡た旎擊 殮溘п輿撮蹂. (譆模 寡た旎擎 1,000錳 殮棲棻.)" << endl;
		cout << "寡た旎 : ";
		cin >> betAmount;

		if (betAmount >= 1000 || money < betAmount)
		{
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛     寡た旎 :%5d錳檜 蛔煙腎歷蝗棲棻.    弛\n", betAmount);
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		}
		else
		{
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛      澀跤脹 寡た旎擊 殮溘ж艘蝗棲棻!     弛\n");
			printf("弛                                          弛\n");
			printf("弛        譆模 寡た旎擎 1,000殮棲棻.        弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			continue;
		}

		cout << '\n';

		// 陛嬪夥嬪爾 摹鷗
		printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
		printf("弛        0. 陛嬪   1. 夥嬪   2. 爾         弛\n");
		printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
		cout << "嬪曖 璋濠 醞 ж釭蒂 殮溘ж撮蹂 : ";
		cin >> playerNumber;
		Sleep(500);

		// 陛嬪夥嬪爾 唸婁
		rspResult = GetRSPResult(comNumber, playerNumber);
		switch (rspResult)
		{
		case 1:
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛              唸婁 : 鼠蝓睡               弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			break;
		case 2:
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛               唸婁 : 蝓葬                弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			break;
		case 3:
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛               唸婁 : ぬ寡                弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			break;
		default:
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛       澀跤脹 璋濠蒂 殮溘ж艘蝗棲棻.      弛\n");
			printf("弛                                          弛\n");
			printf("弛      0 ~ 2 餌檜曖 璋濠蒂 殮溘ж撮蹂.     弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			continue;
		}

		money += GetBetAmount(rspResult, betAmount);

		if (money < 0)
		{
			printf("忙式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式忖\n");
			printf("弛       模雖旎擊 瞪睡 餌辨ж艘蝗棲棻.      弛\n");
			printf("戌式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式式戎\n");
			break;
		}

		count--;
	}
#pragma endregion
}

int GetRSPResult(int comNumber, int playerNumber)
{
	if (comNumber == playerNumber) // 1. 鼠蝓睡
	{
		return 1;
	}
	else if ((comNumber + 1) % 3 == playerNumber) // 2. Ы溯檜橫 蝓葬
	{
		return 2;
	}
	else if ((comNumber + 2) % 3 == playerNumber) // 3. Ы溯檜橫 ぬ寡
	{
		return 3;
	}
	else // 蕨諼籀葬
	{
		return 0;
	}
}

int GetBetAmount(int rspResult, int betAmount)
{
	switch (rspResult)
	{
	case 1:
		return betAmount * 5;
		break;
	case 2:
		return betAmount * 3;
		break;
	case 3:
		return -(betAmount * 7);
		break;
	}
}
