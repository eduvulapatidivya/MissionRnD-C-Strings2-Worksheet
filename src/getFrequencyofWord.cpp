/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0, count = 0, mode = 0, lw = 0, index = 0;

	for (i = 0; word[i] != '\0'; i++)
	{

	}
	lw = i;
	i = 0;
	while (str[i] != '\0')
	{
		index = i;
		while (j < lw)
		{
			if (str[i] == word[j])
			{
				count++;
				i++;
				j++;
			}
			else
			{
				i++;
				break;
			}
		}
		if (count == lw)
		{
			mode++;
			count = 0;
		}
		i = index;
		i++;
		j = 0;
	}
	return (mode);
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

