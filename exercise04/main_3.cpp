//問題３ - ポインターインクリメント(ポインター)（上）
//int型配列を１０マスを好きな数で宣言すること(int[10]),
//宣言した各型配列に対応するポインター(*int)を作ること,
//ポインター変数と反復文を使って各マスに以前のマスを足し算すること,
//
//注意：必ず反復文でポインター変数を使って配列の中身を変更すること。
//(for文のiを使うarr[i]とかarr[2], arr[3]みたいに直接宣言禁止)
//
//ー例ー
//arr[10] = { 1, 3, 4, 5, 2, 6, 2, 1, 6, 2 } // 初期化
//......
//arr[2] += arr[1] /// arr[3] += arr[1] + arr[2] ..... // 演算
//......
//arr[10] = { 1, 4, 8, 13, 15, 21, 23, 24, 30, 32 }　// 出力


#include<iostream>

int main()
{
	int arr[10] = { 1, 3, 4, 5, 2, 6, 2, 1, 6, 2 };//初期化
	int* p = arr;
	
	for (int i = 0; i < 9; i++, p++)
	{
		*(p + 1) += *p;
		std::cout << *p << " ";
	}
	std::cout << *p;
	
	return 0;
}