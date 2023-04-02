#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	int arrysize1 = 0, arrysize2;
	char alpha[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (str[arrysize1])
	{
		for (arrysize2 = 0; arrysize2 < 52; arrysize2++)
		{
			if (str[arrysize1] == alpha[arrysize2])
			{
				str[arrysize1] = rot13key[arrysize2];
				break;
			}
		}

		arrysize1++;

	}
	return (str);
}
