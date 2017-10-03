#include<stdio.h>
int main()
{
	int toplam=0;
	int i=1;

	do
	{
		if(i%2 == 0)
		i++;
		continue;

	toplam=toplam+i;
	i++;
	}
	while(i <= 100);
	printf("1 ile 100 arasindaki tek sayilarin toplami:%d",toplam);
	return 0;
}
