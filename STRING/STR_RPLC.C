#include<stdio.h>
int stlen(char str[50])
{
	int len = 0;
	while(str[len]!='\0')
		len++;
	len--;
	return len;
}
void stcat(char str1[50], char str2[50])
{
	int i = 0,len = 0;
	while(str1[len]!='\0')
		len++;
	while(str2[i]!='\0')
	{
		str1[len] = str2[i];
		i++;
		len++;
	}
	str1[len] = '\0';
}
main()
{
	char str1[50], str2[50], str3[50], temp[50];
	int len1, len2, len3, i, j, match, k;
	printf("\n--------------------------------------------------------");
	printf("\n\n     PROGRAM TO REPLACE A WORD BY ANOTHER WORD");
	printf("\n\n--------------------------------------------------------");
	printf("\n\n\t ENTER A SENTENCE...: ");
	gets(str1);
	len1 = stlen(str1);
	printf("\n\n\t ENTER A STRING WHICH YOU WANT TO DELETE...: ");
	gets(str2);
	len2 = stlen(str2);
	printf("\n\n\t ENTER A NEW STRING WHICH YOU WANT TO INSERT ...: ");
	gets(str3);
	len3 = stlen(str3);
	for(i=0;i<=len1;i++)
	{
		match = 1;
		for(j=0;j<=len2;j++)
			if(str2[j]!=str1[i+j])
			{
				match = 0;
				break;
			}
		if(match)
		{
			for(k=0,j=i+len2+1;j<=len1;j++,k++)
				temp[k] = str1[j];
			temp[k] = '\0';
			for(j=0;j<=len3;j++)
				str1[i+j] = str3[j];
			str1[i+j] = '\0';
			stcat(str1,temp);
			len1 = len1 - len2 +len3;
			i = i + j;
		}
	}
	printf("\n\n\t OUTPUT IS...: ");
	puts(str1);
	printf("\n\n-------------------------------------------------------");
}
