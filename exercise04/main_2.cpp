//���Q - �h����v�Z�@ (�z��)�i����j
//���͂���}���V�����̏h����̕\�ł���B,
//�����ԍ��A�����A�l��������͂�����h������o��,
//�ԍ��E��l�� / �ő�l���@�E�@�I�t�V�[�Y�� / �I���V�[�Y���@�E�@�l���ǉ�����
//�P�@�E�@�Q�@ / �R�@�@�@�@�E�@�R�O�C�O�O�O / �T�O�C�O�O�O�@�E�@��l������@�T�A�O�O�O
//�Q�@�E�@�S�@ / �V�@�@�@�@�E�@�V�O�C�O�O�O / �P�P�O�C�O�O�O�E�@��l������@�P�O�A�O�O�O
//�R�@�E�@�W�@ / �P�Q�@�@�@�E�P�Q�O�C�O�O�O / �P�V�O�C�O�O�O�E�@��l������@�P�T�A�O�O�O
//�S�@�E�@�P�Q�@ / �P�U�@�@�E�Q�O�O�C�O�O�O / �R�O�O�C�O�O�O�E�@��l������@�R�O�A�O�O�O

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
		std::cout << "�����ԍ�����͂��Ă��������B > ";
		std::cin >> room_number;
	} while (room_number < 1 || room_number > 4);

	std::cout << "�����l������͂��Ă��������B > ";
	do
	{
		std::cin >> resident;
		if (resident > fee[room_number - 1][1])
		{
			std::cout << "�����l�����ő�l���𒴂��܂����B�Č������Ă��������B > ";
		}
		else
		{
			break;
		}
	} while (true);

	std::cout << "����������I�����Ă��������B�I�t�V�[�Y����0�A�I���V�[�Y����1�B > ";
	do
	{
		std::cin >> season;
		if (season != 0 && season != 1)
		{
			std::cout << "�����������Č������Ă��������B > ";
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

	std::cout << "\n�h�����" << total_fee << "�ł��B";

	return 0;
}