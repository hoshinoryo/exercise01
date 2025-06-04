//問題２ - 宿泊代計算機 (配列)（中上）
//次はあるマンションの宿泊費の表である。,
//部屋番号、時期、人員数を入力したら宿泊代を出力,
//番号・基準人数 / 最大人数　・　オフシーズン / オンシーズン　・　人数追加料金
//１　・　２　 / ３　　　　・　３０，０００ / ５０，０００　・　一人当たり　５、０００
//２　・　４　 / ７　　　　・　７０，０００ / １１０，０００・　一人当たり　１０、０００
//３　・　８　 / １２　　　・１２０，０００ / １７０，０００・　一人当たり　１５、０００
//４　・　１２　 / １６　　・２００，０００ / ３００，０００・　一人当たり　３０、０００

#include <iostream>

int main()
{
	int fee[4][5] = { 
		{2, 3, 30000, 50000, 5000},
		{4, 7, 70000, 110000, 10000},
		{8, 12, 120000, 170000, 15000},
		{12, 16, 200000, 300000, 30000} 
	};

	int room_number, resident, season;
	int total_fee;

	do
	{
		std::cout << "部屋番号を入力してください。 > ";
		std::cin >> room_number;
	} while (room_number < 1 || room_number > 4);

	std::cout << "入居人数を入力してください。 > ";
	do
	{
		std::cin >> resident;
		if (resident > fee[room_number - 1][1])
		{
			std::cout << "入居人数が最大人数を超えました。再検討してください。 > ";
		}
		else
		{
			break;
		}
	} while (true);

	std::cout << "入居時期を選択してください。オフシーズンは0、オンシーズンは1。 > ";
	do
	{
		std::cin >> season;
		if (season != 0 && season != 1)
		{
			std::cout << "入居時期を再検討してください。 > ";
		}
		else
		{
			break;
		}
	} while (true);

	if (resident <= fee[room_number - 1][0])
	{
		total_fee = fee[room_number - 1][2 + season];
	}
	else
	{
		total_fee = fee[room_number - 1][2 + season] + (resident - fee[room_number - 1][0]) * fee[room_number - 1][4];
	}

	std::cout << "\n宿泊代は" << total_fee << "です。";

	return 0;
}