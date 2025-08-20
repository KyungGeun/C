#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	/*
		10809번 알파벳 찾기
			알파벳 소문자로만 이루어진 단어 S가 주어진다.
			각각의 알파벳에 대해서
			단어에 포함되어 있는 경우에는 처음 등장하는 위치를,
			포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성

		조건
			단어의 길이는 100을 넘지 않으며,
			알파벳 소문자로만 이루어져 있다

		풀이
			아스키 코드가 문자열을 순회하면서
			동일한 알파벳을 만난다면 문자열의 그 위치를 출력
			for문의 i를 97로 초기화하고, 123보다 작을 때까지 i를 증가시키면서 밑의 작업을 반복한다.
				정수형 변수 check를 -1로 초기화한다.
				for문의 j를 0으로 초기화하고, 문자열의 길이만큼 j를 증가시키면서 밑의 작업을 반복한다.
					i가 (int)S[j]와 같다면 check에 j를 대입하고 break를 건다.
					check를 출력한다.
	*/

	char S[101] = { 'A' };
	scanf("%s", S, sizeof(S));

	for (int i = 97; i < 123; i++)
	{
		int check = -1;
		for (int j = 0; j < strlen(S) + 1; j++)
		{
			if (i == (int)S[j])
			{
				check = j;
				break;
			}
		}

		printf("%d ", check);
	}

}
