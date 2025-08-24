#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*
		5622번 다이얼
			할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

		조건
			첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

		풀이
			A : 65 Z : 90
			문자열 배열의 i번째가 '\0'이 아닐 때까지 i를 증가시키면서 밑의 작업을 반복한다.
				지금 읽고 있는 문자를 정수형으로 변환했을 때, 65보다 같거나 크고, 67보다 작거나 같다면
				total 변수값을 3증가시킨다. (ABC)

				만약 위 조건이 아니고 68보다 같거나 크고, 70보다 작거나 같다면
				total 변수값을 4증가시킨다. (DEF)

				만약 위 조건이 아니고 71보다 같거나 크고, 73보다 작거나 같다면
				total 변수값을 5증가시킨다. (GHI)

				만약 위 조건이 아니고 74보다 같거나 크고, 76보다 작거나 같다면
				total 변수값을 6증가시킨다. (JKL)

				만약 위 조건이 아니고 77보다 같거나 크고, 79보다 작거나 같다면
				total 변수값을 7증가시킨다. (MNO)

				만약 위 조건이 아니고 80보다 같거나 크고, 83보다 작거나 같다면
				total 변수값을 8증가시킨다. (PQRS)

				만약 위 조건이 아니고 84보다 같거나 크고, 86보다 작거나 같다면
				total 변수값을 9증가시킨다. (TUV)

				만약 위 조건이 아니고 87보다 같거나 크고, 90보다 작거나 같다면
				total 변수값을 10증가시킨다. (WXYZ)
			이제 반복문이 끝났으니 total 변수값을 출력한다.
			
	*/
	
	int total = 0;
	char string[16] = { 'A' };
	scanf("%s", string, sizeof(string));
	
	for (int i = 0; string[i] != '\0'; i++)
	{
		if (65 <= (int)string[i] && (int)string[i] <= 67)
		{
			total += 3;
		}

		else if (68 <= (int)string[i] && (int)string[i] <= 70)
		{
			total += 4;
		}

		else if (71 <= (int)string[i] && (int)string[i] <= 73)
		{
			total += 5;
		}

		else if (74 <= (int)string[i] && (int)string[i] <= 76)
		{
			total += 6;
		}

		else if (77 <= (int)string[i] && (int)string[i] <= 79)
		{
			total += 7;
		}

		else if (80 <= (int)string[i] && (int)string[i] <= 83)
		{
			total += 8;
		}

		else if (84 <= (int)string[i] && (int)string[i] <= 86)
		{
			total += 9;
		}

		else if (87 <= (int)string[i] && (int)string[i] <= 90)
		{
			total += 10;
		}
	}

	printf("%d\n", total);
	return 0;
}
