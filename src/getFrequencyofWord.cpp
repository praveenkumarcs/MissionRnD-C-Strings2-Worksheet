/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>

char *strchr(char *str, char ch){
	while (*str != '\0' && *str != ch)
		str++;

	return ((*str == ch) ? (char *)str : NULL);
}


int count_word_in_str_way_1(char *str, char *word){
	int WordCount = 0,needlelen = 0;
	char *needle, *haystack;

	needlelen = strlen(word);
	needle = word;
	haystack = str;
	for (; (haystack = strchr(haystack, *needle)) != NULL; haystack++)
		if (strncmp(haystack, needle, needlelen) == 0)
			WordCount++;

	return WordCount;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}