#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main() 
{
    int s1,s2,s3;
    printf("Enter the sides of the triangle:\n");
    s1 = input_side();
    s2=input_side();
    s3=input_side();
    int  isscalene = check_scalene(s1,s2,s3);
    output(s1,s2,s3,isscalene);
    return 0;
}
int input_side()
{
    int side;
    printf("Enter  the length of one side: ");
    scanf("%d",&side);
    return side;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && a!=c)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("The triangle with sides %d,%d,%d is a scalene triangle.\n",a,b,c);
    }
    else{
        printf("The triangle with sides %d,%d,%d is not a scalene triangle.\n",a,b,c);
    }
}
