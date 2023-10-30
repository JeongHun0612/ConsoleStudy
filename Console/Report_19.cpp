#include "Report_19.h"

//���� 2. ����ü�� ����ؼ� ������ ���̽� �񽺹����Ѱ� ����� ����
//
//- ���� Ÿ��Ʋ��, ����, ����, ����, Ư�̻��� ���... �ʿ��ϸ� �߰��Ѵ�.
//
//- �迭�� ����ϰ� ��±���.

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
			{"���׿��극����", "AOS", "���̾�������", 4.3f, 12, 1, "����"},
			{"�߷ζ�Ʈ", "FPS", "���̾�������", 4.1f, 15, 2, "����"},
			{"���Ŀ¶��� 4", "������", "EA�ڸ��� ��Ʃ���", 3.9f, 0, 3, "����"},
			{"�������", "FPS", "�ؽ�", 3.9f, 18, 4, "����"},
			{"�ν�Ʈ��ũ", "MMORPG", "�����ϰ���Ʈ", 4.2f, 18, 5, "����"},
			{"�����ý��丮", "MMORPG", "�ؽ�", 3.8f, 0, 6, "����"},
			{"��Ʋ�׶���", "FPS", "ũ������", 4.1f, 15, 7, "����"},
			{"������ġ 2", "FPS", "���ڵ�", 3.5f, 0, 8, "����"},
			{"������������", "�׼� RPG", "�׿���", 3.8f, 15, 9, "����"},
			{"��Ÿũ����Ʈ", "RTS", "���ڵ�", 4.0f, 12, 10, "����"},
		};

		int gameDBLength = sizeof(gameDataBase) / sizeof(gameDataBase[0]);

		for (int i = 0; i < gameDBLength; i++)
		{
			cout << "======================================================" << endl;
			cout << "�̸� : " << gameDataBase[i].title << endl;
			cout << "�帣 : " << gameDataBase[i].genre << endl;
			cout << "ȸ�� : " << gameDataBase[i].company << endl;
			cout << "���� : " << gameDataBase[i].grade << endl;
			cout << "��� : " << gameDataBase[i].rating << endl;
			cout << "���� : " << gameDataBase[i].rank << endl;
			cout << "Ư�̻��� : " << gameDataBase[i].particulars << endl;
			cout << "======================================================" << endl;
			cout << '\n';
		}
	}
}