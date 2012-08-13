#include<stdio.h>

#include "stringops.h"

void trim(char *s)
{
	int size = strlen(s);
	char *t, *c;
	t = c = s;

	while(is_white_space(*c))
		//hehe, looks like I'm putting some C++ in my C code.
		c++;

	int i = 0;
	while(i++ < size)
		*t++ = *c++;

	while(is_white_space(*(s + --size)))
		*(s + size) = '\0';
}

int is_white_space(char c)
{
	return c == ' '  || c == '\n' || c == '\t';
}

void to_lower(char *s)
{
	while(*s != '\0')
	{
		if(*s >= 'A' && *s <= 'Z')
			*s += ('a' - 'A'); 
		
		s++;
	}
}

int strcmp(char *s1, char *s2)
{
	while(*s1 != '\0' && *s2 != '\0')
	{
		if(*s1 != *s2)
			return *s1 - *s2;
	}

	return 0;
}

int strlen(char *s)
{
	char *c = s;
	while(*c++ != '\0')
		;

	return c - s;
}
