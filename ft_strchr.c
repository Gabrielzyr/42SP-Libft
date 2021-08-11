char *ft_strchr(const char *s, int c)
{
	char	*find;
	int		i;

	find = 0;
	i = 0;
    while(s[i])
	{   
		if(c == s[i])
		{   
			find = (char*)&s[i];
			return(find);
		}
    	i++;
	}
	if(c == '\0')
		find = (char*)&s[i];
	return(find);
}