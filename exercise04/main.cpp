//���P - ���ьv�Z�@ (�z��)�i���j
//�w��10���̐��т���͂��Ċe�w���̐��тƃN���X�̕��ς��v�Z���邱��,
//�V�O�_���{�[�_�[���C���ɂ��č��i�E�s���i���o������,
//�o�͗�F�w���V�@�W�O�_�E���i�@ / �w���W�@50�_�E�s���i...�N���X���ρF�V�X�D�Q�R�_
#include<iostream>

float Average(int* p);

constexpr int STUDENT_NUM = 10;

int main()
{
	int test[STUDENT_NUM];
	float ans = 0.0f;

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		std::cout << "�w��" << i + 1 << "�̐��т���͂��Ă��������B > ";
		std::cin >> test[i];
	}

	for (int i = 0; i < STUDENT_NUM; i++)
	{
		std::cout << "�w��" << i + 1 << "  " << test[i] << "�_";
		if (test[i] >= 70)
		{
			std::cout << "�E���i";
		}
		else
		{
			std::cout << "�E�s���i";
		}
		std::cout << std::endl;
	}

	ans = Average(test);

	std::cout << "�N���X���ρF" << ans << "�_";

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