#include "Report_19.h"

//과제 2. 구조체를 사용해서 데이터 베이스 비스무리한것 만들어 보기
//
//- 게임 타이틀명, 평점, 가격, 점수, 특이사항 등등... 필요하면 추가한다.
//
//- 배열을 사용하고 출력까지.

namespace REPORT_19
{
	struct Game
	{
		const char* title;
		const char* genre;
		const char* company;
		float grade;
		int rating;
		int rank;
		const char* particulars;
	};

	void Run()
	{
		Game gameDataBase[10] =
		{
			{"리그오브레전드", "AOS", "라이엇게임즈", 4.3f, 12, 1, "없음"},
			{"발로란트", "FPS", "라이엇게임즈", 4.1f, 15, 2, "없음"},
			{"피파온라인 4", "스포츠", "EA코리아 스튜디오", 3.9f, 0, 3, "없음"},
			{"서든어택", "FPS", "넥슨", 3.9f, 18, 4, "없음"},
			{"로스트아크", "MMORPG", "스마일게이트", 4.2f, 18, 5, "없음"},
			{"메이플스토리", "MMORPG", "넥슨", 3.8f, 0, 6, "없음"},
			{"배틀그라운드", "FPS", "크래프톤", 4.1f, 15, 7, "없음"},
			{"오버워치 2", "FPS", "블리자드", 3.5f, 0, 8, "없음"},
			{"던전앤파이터", "액션 RPG", "네오플", 3.8f, 15, 9, "없음"},
			{"스타크래프트", "RTS", "블리자드", 4.0f, 12, 10, "없음"},
		};

		int gameDBLength = sizeof(gameDataBase) / sizeof(gameDataBase[0]);

		for (int i = 0; i < gameDBLength; i++)
		{
			cout << "======================================================" << endl;
			cout << "이름 : " << gameDataBase[i].title << endl;
			cout << "장르 : " << gameDataBase[i].genre << endl;
			cout << "회사 : " << gameDataBase[i].company << endl;
			cout << "평점 : " << gameDataBase[i].grade << endl;
			cout << "등급 : " << gameDataBase[i].rating << endl;
			cout << "순위 : " << gameDataBase[i].rank << endl;
			cout << "특이사항 : " << gameDataBase[i].particulars << endl;
			cout << "======================================================" << endl;
			cout << '\n';
		}
	}
}