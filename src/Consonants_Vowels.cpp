/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>
#include<stdio.h>

void count_vowels_and_consonants(char *str, int *consonants, int *vowels){
	int i, j;
	int Capital[26], Small[26], sum1 = 0, sum2 = 0;
	char Svowels[] = "aeiou", Cvowels[] = "AEIOU";

	if (str == NULL){
		*consonants = 0;
		*vowels = 0;
	}
	else{
		for (i = 0; i < 26; i++){
			Capital[i] = 0;
			Small[i] = 0;
		}

		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'a' && str[i] <= 'z')
				Small[str[i] - 97]++;

			else
				if (str[i] >= 'A' && str[i] <= 'Z')
					Capital[str[i] - 65]++;
		}

		for (i = 0; i < 26; i++)
			sum1 += Small[i] + Capital[i];

		sum2 = sum1;
		for (i = 0; Svowels[i] != '\0'; i++)
			sum2 -= Small[Svowels[i] - 97];

		for (i = 0; Cvowels[i] != '\0'; i++)
			sum2 -= Capital[Cvowels[i] - 65];


		*consonants = sum2;
		*vowels = sum1 - sum2;
	}
}
