char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc (size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	i=0;
		while(i < size)
		{
		s[i] = c;
		i++;
		}
	return (s);
}
