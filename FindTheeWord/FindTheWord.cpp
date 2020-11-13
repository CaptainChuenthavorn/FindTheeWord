#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char sentence[1000];
	char* p;
	char* one;
	char* two;
	char* three;
	char word[5];
	int maxChar=0;
	scanf("%[^\n]s", sentence);
	scanf("%s", word);
	p = sentence;
	while (*p != '\0')
	{
		one = p;
		two = p + 1;
		three = p + 2;

		if (*one == word[0] && *two == word[1] && *three == word[2])
		{
			
				printf("[ %c%c%c ]",*one,*two,*three);
				p = p + 2;
			
		}
		else
		{
			printf("%c", *p);
		}
		maxChar++;
		p++;
	}
	
	return 0;
}
char Find(char* p, char* one, char* two, char* three,char word[3])
{
	
}