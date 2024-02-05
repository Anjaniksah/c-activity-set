#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main()
{
    int n=input_n();
    int sum=sum_n_nos(n);
    output(n,sum);
}
int input_n()
{
    int x;
    printf("Enter the number of natural numbers you want to add\n");
    scanf("%d",&x);
    return X;
}
int sum_n_nos(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("Sum of the  %d numbers is %d",n,sum);
}
