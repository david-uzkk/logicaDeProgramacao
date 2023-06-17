#include <stdio.h>
int main()
{
	 char ifsp[65] = "instituto federal de educacao, ciencia e tecnologia de sao paulo";
	 ifsp[0]-=32;
	 ifsp[10]-=32;
	 ifsp[21]-=32;
	 ifsp[31]-=32;
	 ifsp[41]-=32;
	 ifsp[55]-=32;
	 ifsp[58]-=32;
	 
	 printf ("%s", ifsp);

 return 0;
 }
