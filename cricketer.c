#include<stdio.h>
#include<string.h>

    typedef struct cricketer {
        char name[15];
        int age;
        int noOfMatch;
        float average;
    }cricketer;
    cricketer input()
    {
        cricketer c;
        printf("Enter Name: ");
        fflush(stdin);
        gets(c.name);
        printf("Enter Age: ");
        scanf("%d",&c.age);
        printf("Enter No. of match played: ");
        scanf("%d",&c.noOfMatch);
        printf("Enter average: ");
        scanf("%f",&c.average);
        return c;
    }
    display(cricketer x)
    {
        printf("Name : %s",x.name);
        printf("\nAge : %d",x.age);
        printf("\nNo of Match Played : %d",x.noOfMatch);
        printf("\nAverage : %f\n\n",x.average);
    }
int main()
{
    int i;
    cricketer arr[3];
    for(i=0;i<3;i++)
        arr[i]=input();
    for(i=0;i<3;i++)
        display(arr[i]);
    return 0;
}