#include <stdio.h>
#include<iostream>
#include <stdlib.h>

#include <stdarg.h>
#include <limits.h>

using namespace std;

int countLine(char *pName);
int countChar(char *pName);

int main(int argc, char **argv)
{
	int lcount;
	int ccount;
	char *arg1 = "Ohio University";
	char *arg2 = "Athens";

	if(argc == 1)
	{
		countLine(arg1);
		countChar(arg2);
	}	
	else if(argc == 2)
	{
		lcount = countLine(argv[1]);
		ccount = countChar(argv[1]);
	}

	return(0);
}

int countLine(char *pName)
{

	FILE *fp = fopen (pName, "r");

	if(!fp)
	{
		 printf("cannot open file `%s'", pName);
	}

	int lcount = 0;

	for(char i; i != EOF; i = getc(fp))
	{
		if(i == '\n')
		{
			lcount++;
		}
	}

	cout << lcount << " Lines" << endl;

	fclose(fp);

	return lcount;
}

int countChar(char* pName)
{
	FILE *fp = fopen (pName, "r");

	if(!fp)
	{
		printf("cannot open file `%s'", pName);
	}

	int ccount = 0;

	for(int i; i != EOF; i = getc(fp))
	{
		if(isalpha(i))
		{
			ccount++;
		}
	}

	cout << ccount << " Characters" << endl;

	return ccount;
}



