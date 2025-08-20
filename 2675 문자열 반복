#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	/*
		2675번 문자열 반복
			문자열 S를 입력받은 후에, 각 문자를 R번 반복해
			새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오.

		조건 
			문자열 S가 공백으로 구분되어 주어진다. 
			S의 길이는 적어도 1이며, 20글자를 넘지 않는다.

		풀이
			for문의 j를 0으로 초기화하고, 문자열의 길이만큼 j를 증가시키면서 밑의 작업을 반복한다.
				for문의 k를 0으로 초기화하고, R값 만큼 k를 증가시키면서 밑의 작업을 반복한다.
					S[j]를 출력한다.
            \n을 출력한다.
	*/
	
	int T = 1;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int R = 1;
		char S[21] = { 'A' };
		scanf("%d %s", &R, S, sizeof(S));

		for (int j = 0; j < strlen(S); j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}
        printf("\n");
	}

	return 0;
}
