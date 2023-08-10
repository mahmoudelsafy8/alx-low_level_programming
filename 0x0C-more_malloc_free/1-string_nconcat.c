#ifndef MAIN_H
#define MAIN_H
/**
 * string_nconcat - concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: inpust
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1,
 * followed by the first n bytes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x, y, s1_l, s2_l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	str = malloc(s1_l + n + 1);
	if (ste == NULL)
	{
		return (NULL);
	}
	for (x = 0; s1[x] != '\0'; x++)
		str[x] = s1[x];
	for (y = 0; y < n; y++)
	{
		str[x] = s2[y];
		x++;
	}
	str[x] = '\0';
	return (str);
}
