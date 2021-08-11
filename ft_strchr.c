char *ft_strchr(const char *s, int c)
{
	char *find;
	int i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
		{
			*find = s[i];
			return (find);
		}
		i++;
	}
	return (NULL);
}