#include "Example_13.h"

#define EXAMPLE_TYPE_STRUCT			1
#define EXAMPLE_TYPE_ENUM			2
#define EXAMPLE_TYPE_UNION			3
#define EXAMPLE_TYPE_CLASS			4

#define EXAMPLE_TYPE		EXAMPLE_TYPE_UNION

// ����� ���� �ڷ������ʹ� ���ٹ����� ���ؼ� �Ű��� ���� ��� �Ѵ�.

namespace EXAMPLE_3
{
	struct tagFamily
	{
		const char* name;	// �̸�
		int age;			// ����
		int height;			// Ű
		float weight;		// ������
		bool wedding;		// ��ȥ����
	};

	struct tagPlayer // ���� ��ü
	{
		int hp;
		int mp;
		int att;
		int def;
		float speed;
	};

	struct tagUnit // ������
	{
		string name;
		int hp;
		float att;
		bool die;
	};

	// ======================================
	/*
	- ������ ����� �⺻������ Ư�� ���� �Ҵ����� ������ �����Ϸ��� ���ؼ� �ڵ����� ���� �Ҵ��Ѵ�. (0���� -> ������� ���� �ο� �Ѵ�.)

	- ��, Ư�� ����� ���� �Ҵ����� ��� �ش� ��������δ� ���ʴ�� �ش� ����� �Ҵ�� ������ +1�� �����ؼ� �Ҵ��� �̷�����.
	*/

	enum EColor_Type
	{
		// ������ ����� �⺻������ ���� �빮�� ǥ�⸦ �Ѵ�.
		RED,
		GREEN,
		BLUE = 1000,
		BLACK,
		WHITE
	};

	enum EMotion_Type
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	enum class Motion_Type : uint16_t
	{
		R_WALK,
		L_WALK,
		R_RUN,
		L_RUN
	};

	/*
	�߰��� ������� ���������� �ݵ�� �̸��� ����� �ʿ䰡 ��������.
	 �� �͸��� ����

	�ش� ������� ����� �������� �ĺ��� �� �ִ� �̸��� �翬�� �������� �ʱ� ������ ���� ����ȭ ��Ű�°� �Ұ����ϴ�.

	�̷��� ��Ģ�� ������ �Ǹ鼭 �ٸ� ����� ���� �ڷ������� ����ȴ�.
	*/

	enum
	{
		UNIT_SIZE = 5
	};

	// �����ʿ����� ����� ����.
	// Ư����Ȳ���� �޸� ������ �����ϴ�.
	union STData
	{
		int m_nDataA;
		int m_nDataB;
		float m_fData;
	};

	void Example()
	{

#if EXAMPLE_TYPE == EXAMPLE_TYPE_STRUCT

		// 0. ���� + �߻�ȭ (���ϰ�ü���� ���������� Ȯ���� �߿�)
		// 1. ����
		// 2. ����ȭ �κ�
		// 3. ���� ���Ǵ� �κ�

		// C��� ���� ���
		//struct tagFamily Family;

		// C++ ���� ���
		tagFamily human;

		/*
		- �ϴ��� ����ϱ� ���ؼ��� ���ǰ� �ʿ��ϰ� ����ü ��� ������ �����ϱ� ���ؼ���  .  �����ڸ� ����Ѵ�.

		- ���̿ܿ��� �Ϲ����� ������ ���ϽõǱ� ������ ����� ���ؼ� �ʱ�ȭ�� �ʿ��ϴ�.

		- �� �ٸ� Ư¡�� �ִٸ� ����ü�� �ʱ�ȭ�� �迭�� �ʱ�ȭ�� ���� ������ ���� ������� ���ٴ� Ư¡�� �ִ�.
		*/

		human.name = "���";
		human.age = 18;
		human.height = 230;
		human.weight = 45;
		cout << boolalpha; // 0�� 1�� false true�� ǥ���ϴ� ��ũ��
		human.wedding = false;

		cout << "�̸� : " << human.name << endl
			<< "���� : " << human.age << endl
			<< "Ű : " << human.height << endl
			<< "������ : " << human.weight << endl
			<< "��ȥ���� : " << human.wedding << endl;

		cout << '\n';

		// ü�� : 180, ���� : 50, ���ݷ� : 10, ���� : 5, �̵��� : 10.5f

		tagPlayer player;

		player.hp = 180;
		player.mp = 50;
		player.att = 10;
		player.def = 5;
		player.speed = 10.5f;

		cout << "ü�� : " << player.hp << endl;
		cout << "���� : " << player.mp << endl;
		cout << "���ݷ� : " << player.att << endl;
		cout << "���� : " << player.def << endl;
		cout << "�̵��� : " << player.speed << endl;

		cout << '\n';

		//tagUnit marin;
		tagUnit zergling = {"���۸�", 50, 5.5f, true};

		cout << "�̸� : " << zergling.name << endl;
		cout << "ü�� : " << zergling.hp << endl;
		cout << "���ݷ� : " << zergling.att << endl;
		cout << "������� : " << zergling.die << endl;

		cout << sizeof(char*) << endl;

		cout << '\n';
		

		//  �ε�׷��� ���̽� - �����Ϸ��� �����ϴ� ���
		tagPlayer arrPlayer[4] =
		{
			{ 100, 100, 100, 100, 100 },
			{ 90, 90, 90, 90, 90 },
			{ 80, 80, 80, 80, 80 },
			{ 70, 70, 70, 70, 70 },
		};

		for (int i = 0; i < 4; i++)
		{
			cout << i + 1 << "��° �÷��̾�" << endl;
			cout << "HP : " << arrPlayer[i].hp << endl;
			cout << "=====================" << endl;
		}


#elif EXAMPLE_TYPE == EXAMPLE_TYPE_ENUM
		
		// 1001
		// �� ������ ������ ���� �ȵǴ� �ڵ� �߿� �ϳ�
		// ���� ������ �ڵ� -> ��ȣ�� / ��������ִ� BLAKC���� Ȯ���� �𸣱� ������
		cout << "�� : " << BLACK << endl;

		EMotion_Type m_motion;

		m_motion = L_WALK;

		// ��κ��� ���ӿ��� ���������� �ʼ��� ����� �ȴ�.
		// why -> ���ؼ� + �������� ������
		switch (m_motion)
		{
		case R_WALK:
			cout << "������ �ȱ�" << endl;
			break;
		case L_WALK:
			cout << "���� �ȱ�" << endl;
			break;
		case R_RUN:
			cout << "������ �ٱ�" << endl;
			break;
		case L_RUN:
			cout << "���� �ٱ�" << endl;
			break;
		}

		if (m_motion == L_WALK)
		{
			m_motion = R_RUN;

			if (m_motion == R_RUN)
			{
				cout << "���������� �ų��� �پ��." << endl;
			}
		}

#elif EXAMPLE_TYPE == EXAMPLE_TYPE_UNION
	
STData stData;

stData.m_nDataA = 0;
stData.m_nDataB = 200;
stData.m_fData = 3.14f;

cout << "==����ü==" << endl;
cout << "���� ������ : " << stData.m_nDataA << endl;
cout << "���� ������ : " << stData.m_nDataB << endl;
cout << "�Ǽ� ������ : " << stData.m_fData << endl;

#else

#endif
		
	}
}

/*
���� 1. �ζ� ��÷��

- ��÷��ȣ 6�� + ���ʽ� ��ȣ 1��

- 6�� �Է� �޴´�.

- �ʼ� : ġƮ

- ����

- 1�� : ��÷��ȣ 6���� ���� �Է��� 6���� ���ڰ� ������

- 2�� : ��÷��ȣ 5���� + ���ʽ� ��ȣ 1���� ���� �Է��� ���� 6���� ������

- 3�� : ��÷��ȣ 5���� ���� �Է��� ���� 5���� ������

- 4�� : ��÷��ȣ 5���� ���� �Է��� ���� 4���� ������

- 5�� : ��÷��ȣ 5���� ���� �Է��� ���� 3���� ������


���� 2. ����ü�� ����ؼ� ������ ���̽� �񽺹����Ѱ� ����� ����

- ���� Ÿ��Ʋ��, ����, ����, ����, Ư�̻��� ���... �ʿ��ϸ� �߰��Ѵ�.

- �迭�� ����ϰ� ��±���.


���� 3. ���� �����

- 0 ~ 24������ ���� �������� ��ġ�ؼ� 5 X 5�� ����Ѵ�.

- ���ڸ� �����ϸ� #, %, & ��� ���� �ٲ۴�.

- ���� �Ǹ� ���� ī���Ͱ� �ö󰡰� 5 ���� �Ǹ� ������ ����ȴ�.
 �� ��, ������ ����Ǹ� ���α׷��� ����Ǵ°� �ƴ϶� �ϼ��� ���� ���־�� �Ѵ�.


���� ���� 1. ����

- ���� ���� �״�� ���󰣴�.

- ��, ȥ���ϴ� ���� �ƴ� AI�� ������ ���� �÷��� �ϴ� ���� ����

- �ϼ����� AI ���ؿ� ���� ������.


���� ����. 4�� ���ڿ� + ������

- ��Ʈ�� ����´�.

- ������ �� �����ؿ´�.

*/