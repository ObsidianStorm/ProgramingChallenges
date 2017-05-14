#include <stdio.h>
int main()
{
	char Name [80];
  char Username [80];
	int age;
	
	printf("Enter your name:");
	scanf("%s", Name);
	printf("Enter your age:");
	scanf("%d", &age);
	printf("Enter your Username:");
	scanf("%s", Username);
	
	printf("Your name is %s, you are %d years old, and your username is %s", Name, age, Username);
	FILE *fp;
	fp = fopen("cRedditBioList.txt", "w");
	fputs(Name, fp);
	fprintf(fp, " %d ", age);
	fputs(Username, fp);
	return 0;
}