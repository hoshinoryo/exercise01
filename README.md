# 勉強会練習問題

## 問題１ - 成績計算機 (配列)（中）

学生10名の成績を入力して各学生の成績とクラスの平均を計算すること

７０点をボーダーラインにして合格・不合格を出すこと

出力例：学生７　８０点・合格　/　学生８　50点・不合格...クラス平均：７９．２３点

----------------------------------------------------------

## 問題２ - 宿泊代計算機 (配列)（中上）

次はあるマンションの宿泊費の表である

部屋番号、時期、人員数を入力したら宿泊代を出力

ー表ー

番号・基準人数/最大人数　・　オフシーズン/オンシーズン　・　人数追加料金

１　・　２　/　３　　　　・　３０，０００/５０，０００　・　一人当たり　５、０００

２　・　４　/　７　　　　・　７０，０００/１１０，０００・　一人当たり　１０、０００

３　・　８　/　１２　　　・１２０，０００/１７０，０００・　一人当たり　１５、０００

４　・　１２　/　１６　　・２００，０００/３００，０００・　一人当たり　３０、０００

----------------------------------------------------------

## 問題３ - ポインターインクリメント(ポインター)（上）

int型配列を１０マスを好きな数で宣言すること(int[10])

宣言した各型配列に対応するポインター(*int)を作ること

ポインター変数と反復文を使って各マスに以前のマスを足し算すること


注意：必ず反復文でポインター変数を使って配列の中身を変更すること

(for文のiを使うarr[i]とかarr[2], arr[3]みたいに直接宣言禁止)


ー例ー

arr[10] = {1, 3, 4, 5, 2, 6, 2, 1, 6, 2} // 初期化

......

arr[2] += arr[1] /// arr[3] += arr[1] + arr[2] ..... // 演算

......

arr[10] = {1, 4, 8, 13, 15, 21, 23, 24, 30, 32}　// 出力

----------------------------------------------------------
