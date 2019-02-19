#include <stdio.h>
int main()
{
	int c,n,sum,numbers;
	sum=0;
	float average;
	
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	
	printf("Enter integers of the array\n");
	for(c=0;c<n;++c)
        {
	  scanf("%d",&numbers);
	  sum=sum+numbers;
	}
	average=sum/n;
	
	printf("\nsum of the %d numbers=%d",n,sum);
	printf("\naverage of the %d numbers=%.2f",n,average);
		
	
	return 0;
}