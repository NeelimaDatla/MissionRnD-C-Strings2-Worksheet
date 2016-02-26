/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0;
	int k = 0;
	int temp = 0;
	if (str == NULL)
		return NULL;
	if (str == "   ")
		return "";
	if (str == "")
		return "";
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			temp = i;
		i++;
	}
	if (temp == 0)
		return str;
	char* str2 = (char *)malloc(i + 1);
	while (temp + 1 < i + 1){
		str2[k++] = str[temp + 1];
		temp++;
	}
	return str2;
}
