#include "main.h"
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int makecap;

/*  scan string */
	makecap = 0;
	while (s[makecap] != '\0')
	{/* if next character after makecap is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[makecap] == ' ' || s[makecap] == '\t' || s[makecap] == '\n'
		    || s[makecap] == ',' || s[makecap] == ';' || s[makecap] == '.'
		    || s[makecap] == '.' || s[makecap] == '!' || s[makecap] == '?'
		    || s[makecap] == '"' || s[makecap] == '(' || s[makecap] == ')'
		    || s[makecap] == '{' || s[makecap] == '}')
		{
			if (s[makecap + 1] >= 97 && s[makecap + 1] <= 122)
			{
				s[makecap + 1] = s[makecap + 1] - 32;
			}
		}
		makecap++;
	}
	return (s);
}
