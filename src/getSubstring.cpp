/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

#define or ||
#define and &&


char * get_sub_string(char *str, int i, int j){
	int k = 0;

	char *ptr = NULL;

	if (str == NULL or i < 0 or j < 0 or i > j)
		return NULL;

	ptr = (char *)malloc((j - i + 2)*sizeof(char));

	while (i <= j)
		ptr[k++] = str[i++];

	ptr[k] = '\0';

	return ptr;
}
