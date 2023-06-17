#include <stdio.h>
int main()
	{
	int mtrx[20][10];
	int i, j, count;
	int ct=1;
	for (i=0;i<20;i++)
		for (j=0;j<10;j++)
			{
			mtrx[i][j]=ct;
			if (ct < 10) printf("00");
			if (ct < 100 && ct > 9) printf("0");
			printf("%d ", ct);
			if (ct % 10 == 0) printf("\n");
			ct++;
			}
	return 0;
	}

