#include <iostream>
#include <time.h>
#include <Windows.h>

/*
과제 1. 아이템 만들기

- 종류와 데미지, 가격이 다른 무기 및 방어구 + 악세사리까지..
 ㄴ 5종씩을 만들고 화면에 출력

- 출력된 화면에는 아이템 종류에 따른 가격 + 특성이 함께 나열된다.

- 필수 : 무기 1종 + 방어구 1종 + 악세사리 1종
 ㄴ 컬러 도트
 ㄴ 차후 너희 포폴에 들어갈 컨셉으로 추가한다.


과제 2. 랜덤 숫자 담기

- 1 ~ 5까지의 랜덤숫자 -> int
- 6 ~ 19까지의 랜덤숫자 -> int
- 23 ~ 189 까지의 랜덤숫자 -> int
 ㄴ 단, 검증 수식을 만들어와라

 한줄 조사. 반복문

 - 반복문의 종류와 역할에 대해서 조사

 - 노트에 적어온다.
*/

// 컬러값 상수 지정
#define BLACK		  0
#define DARK_BLUE	  1
#define DARK_GREEN	  2
#define DARK_SKYBLUE  3
#define DARK_RED	  4
#define DARK_PURPLE	  5
#define DARK_YELLOW	  6
#define GRAY		  7
#define DARK_GRAY	  8
#define BLUE		  9
#define GREEN		  10
#define SKYBLUE		  11
#define RED			  12
#define PURPLE		  13
#define YELLOW		  14
#define WHITE		  15

using namespace std;
using std::cout;
using std::cin;
using std::endl;

void TextColor(int font, int backGround);

void main()
{
#pragma region 과제 1. 아이템 만들기
	printf("과제 1. 아이템 만들기\n\n");

	int weaponPrice1, weaponDamage1;
	int weaponPrice2, weaponDamage2;
	int weaponPrice3, weaponDamage3;
	int weaponPrice4, weaponDamage4;
	int weaponPrice5, weaponDamage5;

	int armorPrice1, armorDefense1;
	int armorPrice2, armorDefense2;
	int armorPrice3, armorDefense3;
	int armorPrice4, armorDefense4;
	int armorPrice5, armorDefense5;

	int accePrice1, acceStat1;
	int accePrice2, acceStat2;
	int accePrice3, acceStat3;
	int accePrice4, acceStat4;
	int accePrice5, acceStat5;

	weaponPrice1 = 1414, weaponDamage1 = 30500;
	weaponPrice2 = 1290, weaponDamage2 = 30400;
	weaponPrice3 = 1252, weaponDamage3 = 29800;
	weaponPrice4 = 1375, weaponDamage4 = 33900;
	weaponPrice5 = 1143, weaponDamage5 = 33700;

	armorPrice1 = 34500, armorDefense1 = 7656;
	armorPrice2 = 28900, armorDefense2 = 6380;
	armorPrice3 = 24200, armorDefense3 = 5104;
	armorPrice4 = 32300, armorDefense4 = 2552;
	armorPrice5 = 27500, armorDefense5 = 3828;

	accePrice1 = 26800, acceStat1 = 169;
	accePrice2 = 27200, acceStat2 = 172;
	accePrice3 = 25400, acceStat3 = 185;
	accePrice4 = 31500, acceStat4 = 153;
	accePrice5 = 33000, acceStat5 = 163;


	// 무기 종류 ----------------------------------------------
	printf("무기 종류\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 신념의 징표 : 칼리번\n");
	printf("종류 : 소검\n");
	printf("가격 : %dG\n", weaponPrice1);
	printf("데미지 : %d\n", weaponDamage1);
	printf("특성 : 공격 시 5% 확률로 HP MAX + 1000 증가 (최대 중첩 5회)\n");
	printf("----------------------------------------------------------------\n");
	
	printf("이름 : 태극천제검\n");
	printf("종류 : 도\n");
	printf("가격 : %dG\n", weaponPrice2);
	printf("데미지 : %d\n", weaponDamage2);
	printf("특성 : 공격 시 음의 기운이 발생하여 모든 속도 25% 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 판데모니엄 플레임\n");
	printf("종류 : 둔기\n");
	printf("가격 : %dG\n", weaponPrice3);
	printf("데미지 : %d\n", weaponDamage3);
	printf("특성 : 공격 시 판데모니엄의 불꽃 축적 (최대 10회)\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 데우스 이미저리\n");
	printf("종류 : 대검\n");
	printf("가격 : %dG\n", weaponPrice4);
	printf("데미지 : %d\n", weaponDamage4);
	printf("특성 : 공격 시 데미지 증가량 35% 추가 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 별의 바다 : 바드나후\n");
	printf("종류 : 광검\n");
	printf("가격 : %dG\n", weaponPrice5);
	printf("데미지 : %d\n", weaponDamage5);
	printf("특성 : 공격 시 10% 수속성 추가 데미지\n");
	printf("----------------------------------------------------------------\n");

	// 방어구 종류 ----------------------------------------------
	cout << endl;
	printf("방어구 종류\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 무의식적 선택\n");
	printf("종류 : 상의\n");
	printf("가격 : %dG\n", armorPrice1);
	printf("방어력 : %d\n", armorDefense1);
	printf("특성 : HP가 30% 이하일 경우 받는 피해 15% 감소\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 임의 선택\n");
	printf("종류 : 하의\n");
	printf("가격 : %dG\n", armorPrice2);
	printf("방어력 : %d\n", armorDefense2);
	printf("특성 : 던전 입장 시 30초 마다 모든 속도 25% 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 선택의 역설\n");
	printf("종류 : 머리어깨\n");
	printf("가격 : %dG\n", armorPrice3);
	printf("방어력 : %d\n", armorDefense3);
	printf("특성 : 스킬 공격력 32% 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 합리적 선택\n");
	printf("종류 : 벨트\n");
	printf("가격 : %dG\n", armorPrice4);
	printf("방어력 : %d\n", armorDefense4);
	printf("특성 : 인벤토리 무게 한도 +3kg\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 탈리스만 선택\n");
	printf("종류 : 신발\n");
	printf("가격 : %dG\n", armorPrice5);
	printf("방어력 : %d\n", armorDefense5);
	printf("특성 : 이동속도 22% 증가\n");
	printf("----------------------------------------------------------------\n");

	// 악세사리 종류 ----------------------------------------------
	cout << endl;
	printf("악세사리 종류\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 고요를 머금은 이슬\n");
	printf("종류 : 반지\n");
	printf("가격 : %dG\n", accePrice1);
	printf("능력치 : 정신력 +%d\n", acceStat1);
	printf("특성 : 스킬 공격력 10% 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 달빛을 가두는 여명\n");
	printf("종류 : 목걸이\n");
	printf("가격 : %dG\n", accePrice2);
	printf("능력치 : 체력 +%d\n", acceStat2);
	printf("특성 : 모든 속성 강화 + 28\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 새벽을 감싸는 따스함\n");
	printf("종류 : 팔찌\n");
	printf("가격 : %dG\n", accePrice3);
	printf("능력치 : 지능 +%d\n", acceStat3);
	printf("특성 : 모든 직업 15~30레벨 모든 스킬 쿨타임 회복 속도 30% 증가\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 지혜를 담은 대지\n");
	printf("종류 : 마법석\n");
	printf("가격 : %dG\n", accePrice4);
	printf("능력치 : 힘 +%d\n", acceStat4);
	printf("특성 : 데미지 감소 10% 보호막 생성\n");
	printf("----------------------------------------------------------------\n");

	printf("이름 : 마음을 새긴 바다\n");
	printf("종류 : 귀걸이\n");
	printf("가격 : %dG\n", accePrice5);
	printf("능력치 : 지능 +%d\n", acceStat5);
	printf("특성 : 스킬 시전 시 30초 동안 모든 속도 5% 증가\n");
	printf("----------------------------------------------------------------\n");
#pragma endregion

#pragma region 무기 컬러 도트
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(YELLOW, YELLOW); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(DARK_SKYBLUE , DARK_SKYBLUE); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(YELLOW, YELLOW); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(YELLOW, YELLOW); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(YELLOW, YELLOW); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(YELLOW, YELLOW); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■");TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■■"); TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■■■■"); printf("\n");
#pragma endregion

#pragma region 방어구 컬러 도트
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■■■■■■■■■■■■■■■■■■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■■■■■■■■■■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■");	printf("\n");

	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■");	printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■");	printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_RED, DARK_RED); printf("■■■■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■■■■"); TextColor(WHITE, WHITE); printf("■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■■■■■"); printf("\n");
#pragma endregion

#pragma region 악세사리 컬러 도트
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■■■■■■"); TextColor(WHITE, WHITE); printf("■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(BLUE, BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■"); TextColor(BLUE, BLUE); printf("■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■■■"); TextColor(BLUE, BLUE); printf("■■"); TextColor(WHITE, WHITE); printf("■"); TextColor(BLUE, BLUE); printf("■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(BLUE, BLUE); printf("■■■■■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(BLUE, BLUE); printf("■■■■■■");  TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(BLUE, BLUE); printf("■■■■■");  TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(BLUE, BLUE); printf("■■■■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■"); TextColor(GRAY, GRAY); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■■■■"); TextColor(WHITE, WHITE); printf("■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■"); TextColor(DARK_SKYBLUE, DARK_SKYBLUE); printf("■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(DARK_BLUE, DARK_BLUE); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■"); TextColor(WHITE, WHITE); printf("■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■"); TextColor(GRAY, GRAY); printf("■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■"); printf("\n");

	TextColor(WHITE, WHITE); printf("■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(GRAY, GRAY); printf("■■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■"); TextColor(WHITE, WHITE); printf("■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■"); TextColor(DARK_GRAY, DARK_GRAY); printf("■■■■■"); TextColor(WHITE, WHITE); printf("■■■■■■■■"); printf("\n");
	TextColor(WHITE, WHITE); printf("■■■■■■■■■■■■■■■■■■");
#pragma endregion

	TextColor(WHITE, BLACK);
	cout << endl;
	cout << endl;


#pragma region 과제 2. 랜덤 숫자 담기
	printf("과제 2. 랜덤 숫자 담기\n");
	printf("-----------------------------------------\n");

	srand(time(NULL));

	int randNum;

	// rand() % (범위 최대값 - 범위 최소값 + 1) + 범위 시작값
	// + 1을 하는 이유 : 나머지 값은 0부터 나오기 때문

	randNum = rand() % (5 - 1 + 1) + 1;
	printf("1 ~ 5까지의 랜덤 숫자 : %d\n", randNum);
	cout << endl;

	randNum = rand() % (19 - 6 + 1) + 6;
	printf("6 ~ 19까지의 랜덤 숫자 : %d\n", randNum);
	cout << endl;

	randNum = rand() % (189 - 23 + 1) + 23;
	printf("23 ~ 189까지의 랜덤 숫자 : %d\n", randNum);
	cout << endl;
#pragma endregion
}

void TextColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}
