int countVowel(char s[30])
{
//	int n = sizeof(s)/sizeof(s[0]);
	
	int count = 0;
	
	for (int i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			{
				count++;
			}
	}
	
	return count;
}