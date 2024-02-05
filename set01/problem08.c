#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);
int main()
{
    int n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}
int input_array_size()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("Enter %d integers for the array:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int sum_n_array(int n,int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
void output(int n, int a[n],int sum)
{
    printf("The sum of %d different numbers is:%d\n",n,sum);
    printf("The entered numbers are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i];)
    }
}


