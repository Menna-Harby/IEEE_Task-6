//Armstrong number: number that equals the sum of its digits, each raised to a power. 


#include<stdio.h>
#include<math.h>

void printArmstrong(int satrt,int end);

int main()
{
	int start,end;
	
	printf("Enter The Staring Limit=");
	scanf("%d",&start);
	printf("Enter The Ending Limit=");
	scanf("%d",&end);
	
	printArmstrong(start,end);
	
	return 0;
}

void printArmstrong(int start,int end)
{
	int num,original;
	long long sum;
	int lastdigit,digits;
	
	printf("The Armstrong Numbers From %d to %d Are=",start,end);
	
	while(start!=end)
	{
		num=start;
		sum=0;
		
		original=start;
		
		while(num>0)
		{
			digits=((int)log10(original))+1;
			lastdigit=num%10;
			sum=sum+round(pow(lastdigit,digits));
			num=num/10;
		}
		if (sum==start)
		{
			printf("%d ",start);
		}
		
		start++;
		
	}
}