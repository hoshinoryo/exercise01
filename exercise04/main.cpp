//問題１ - 成績計算機 (配列)（中）
//学生10名の成績を入力して各学生の成績とクラスの平均を計算すること,
//７０点をボーダーラインにして合格・不合格を出すこと,
//出力例：学生７　８０点・合格　 / 学生８　50点・不合格...クラス平均：７９．２３点
#include<iostream>

float Average(int* p);

constexpr int STUDENT_NUM = 10;

int main()
{
	int test[STUDENT_NUM];
	float ans = 0.0f;

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		std::cout << "学生" << i + 1 << "の成績を入力してください。 > ";
		std::cin >> test[i];
	}

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		std::cout << "学生" << i + 1 << "  " << test[i] << "点";
		if (test[i] >= 70)
		{
			std::cout << "・合格";
		}
		else
		{
			std::cout << "・不合格";
		}
		std::cout << std::endl;
	}

	ans = Average(test);

	std::cout << "クラス平均：" << ans << "点";

	return 0;
}

float Average(int* p)
{
	int sum = 0;
	for (int i = 0; i < STUDENT_NUM; i++)
	{
		sum += p[i];
	}
	float ans = (float)sum / STUDENT_NUM;
	return ans;
}