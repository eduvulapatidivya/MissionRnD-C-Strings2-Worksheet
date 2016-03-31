/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>

char * get_last_word(char * str){
	char* lw;
	int i, len = 0,startindex=0,size=0,k=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 32)
		{
			startindex = i + 1;
		}
		len++;
	}
	size = len - startindex;
	lw = (char*)malloc(sizeof(char)*(size));
	for (i = startindex, k = 0; k < size; k++, i++)
	{
		lw[k] = str[i];
	}
	lw[k] = '\0';
	return (lw);


	
}
