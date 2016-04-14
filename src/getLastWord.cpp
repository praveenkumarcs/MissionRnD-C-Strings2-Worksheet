/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/

#include <stdlib.h>

int stringlen(char *str){
	int len = 0;
	while (*str++ != '\0')
		len++;
	return len;
}

void strcopy(char *tar, char *src){

	while (*src != ' ' && *src != '\0')
		*tar++ = *src++;
	*tar = '\0';
}




char * get_last_word(char * str){
	char *parent = NULL, *child = NULL, *ptr = NULL;
	parent = child = str;
	while (*parent == ' ')
		parent++;
	child = parent;

	while (*child != '\0'){
		while (*child != ' ' && *child != '\0')
			child++;
		while (*child == ' ')
			child++;
		if (*child != '\0')
			parent = child;

	}
	ptr = (char *)malloc((stringlen(child) + 1)*sizeof(char));
	strcopy(ptr, parent);
	return ptr;

}



