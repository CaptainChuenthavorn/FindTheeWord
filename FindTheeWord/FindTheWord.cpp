#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Find(char*, char*, char*, char*, char word[3], char sentence[1000]);
int Findfive(char*, char*, char*, char*,char*,char*, char word[5], char sentence[1000]);
int main()
{
	char sentence[1000];
	char* p;
	char* one;
	char* two;
	char* three;
	char* four;
	char* five;
	char word[6];
	int maxChar=0;
	int choice;
	printf("Type your sentence : \n");
	scanf("%[^\n]s", sentence);
	jumper:
	printf("\nwhat your word length 3 or 5? ");
	scanf("%d", &choice);
	if (choice == 3)
	{
	typeagain:
		printf("Tpye word you want to find : ");
		scanf("%s", word);
		if (word[3] != '\0')
		{
			goto typeagain;
		}
		p = sentence;
		one = p;
		two = p + 1;
		three = p + 2;
		//Find(p, one, two, three, word, sentence);
		int found = Find(p, one, two, three, word, sentence);
		printf("\nWe have found your Word %d times", found);
	}
	else if (choice == 5)
	{
	typeagain5:
		printf("Tpye word you want to find : ");
		scanf("%s", word);
		if (word[5] != '\0')
		{
			goto typeagain5;
		}
		p = sentence;
		one = p;
		two = p + 1;
		three = p + 2;
		four = p + 3;
		five = p + 4;
		//Find(p, one, two, three, word, sentence);
		int found = Findfive(p, one, two, three,four,five, word, sentence);
		printf("\nWe have found your Word %d times", found);
	}
	else goto jumper;
	
	return 0;
}
int Find(char* p, char* one, char* two, char* three,char word[3],char sentence[1000])
{
	int maxChar=0;
	int foundWord = 0;
	p = sentence;
	while (*p != '\0')
	{
		one = p;
		two = p + 1;
		three = p + 2;

		if (*one == word[0] && *two == word[1] && *three == word[2])
		{

			printf("[%c%c%c]", *one, *two, *three);
			p = p + 2;
			foundWord++;
		}
		else
		{
			printf("%c", *p);
		}
		maxChar++;
		p++;
	}
	return foundWord;
}

int Findfive(char* p, char* one, char* two, char* three,char* four,char* five, char word[5], char sentence[1000])
{
	int maxChar = 0;
	int foundWord = 0;
	p = sentence;
	while (*p != '\0')
	{
		one = p;
		two = p + 1;
		three = p + 2;
		four = p + 3;
		five = p + 4;

		if (*one == word[0] && *two == word[1] && *three == word[2]&& *four == word[3] && *five == word[4])
		{

			printf("[%c%c%c%c%c]", *one, *two, *three,*four,*five);
			p = p + 2;
			foundWord++;
		}
		else
		{
			printf("%c", *p);
		}
		maxChar++;
		p++;
	}
	return foundWord;
}