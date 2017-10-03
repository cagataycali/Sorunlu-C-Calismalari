#include<stdio.h>

int main() {
	int toplam = 0;
	int i = 0;

	while (i < 100) {
		/* code */
		if (i % 2 == 0) {
			i++;
			continue;
		}
		toplam += i;
		i++;
	}
	printf("1 ile 100 arasindaki tek sayilarin toplami:%d\n",toplam);
	return 0;
}
