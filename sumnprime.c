#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Sum of prime numbers till %d is = %d",n,sum_prime(n));
    getch();
    return 0;
}
int sum_prime(int p)
    {
        int s=0;
        if(p==2)
            return 2;
        if(checkprime(p))
        {
            s=p+sum_prime(p-1);
            return s;
        }
        else
            sum_prime(p-1);
    }
int checkprime(int num)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
                break;
        }
        if(i==num)
            return 1;
        else
            return 0;
    }