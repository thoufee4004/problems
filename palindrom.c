#include <stdio.h>
#include <string.h>
int main()
{
  char s1[] = "aba";
  int i;
  int pali = 1;

  for(i=0;i<strlen(s1)/2;i++)
  {
  	if(s1[i] != s1[strlen(s1)-i-1])
  	{
  		pali = 0;
  		break;
  	}
  }

  printf("%d\n",pali);

  return 0;
}
