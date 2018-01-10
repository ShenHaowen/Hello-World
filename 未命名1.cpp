#include<stdio.h>

int main()
{
	int n;
	int sum = 0;
	int count = 0;
	scanf("%d", &n);
	while (n != 0) {
		
		sum += n%10;
		n /= 10;
		count++;
	}
	 printf("%d %d", count, sum);
	
	
	return 0;
}
