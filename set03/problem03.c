#include<stdio.h>
int input_number()
{
    int num;
    printf("Enter a positive interger:\n");
    scanf("%d",&num);
    return num;
}
int is_prime(int n)
{
    if(n<=1) return 0;
    if(n==2) return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
void output(int n, int result)
{
    if(result==1)
    printf("%d is a prime number.\n",n);
   else
   printf("%d is not a prime number.\n",n);
}
int main()
{
    int num=input_number();
    int check_prime=is_prime(num);
    output(num,check_prime);
    return 0;
}
