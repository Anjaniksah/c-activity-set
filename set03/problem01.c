#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float *base, float *height)
{
    printf( "Enter the Base of Triangle\n");
    scanf("%f", &base);
    printf("Enter the height of triangle\n");
    scanf("%f", &height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("Base:%f\n",base);
    printf("Height:%f\n",height);
    printf("Area:%f\n",area);
}