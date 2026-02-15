#include<stdio.h>
struct school                               //code for structure
{
    int a,b,c;
    char p[50],q,r;
    float x,y,z;
}s;
void swap(int *a,int *b)                            //we have to use pointer to swap the original value...
{                                                   //if we take int a as parameter it will create a copy and swap them but...
    int temp;                                       //we want to swap the original so take pointer(address) and swap them
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter the name of student: ");
    scanf(" %s",&s.p);
    printf("Enter the rollno of student: ");
    scanf(" %d",&s.a);
    printf("Enter the marks of student: ");
    scanf(" %d",&s.b);
    printf("Name of student: %s\n",s.p);
    printf("Marks of student: %d\n",s.b);
    printf("Marks in float of student: %.2f\n",(float)s.b);

    //this is for swap 2 number by using your own fnx
    printf("value of a :");
	scanf("%d",&a);
	printf("value of b: ");
	scanf("%d",&b);
    swap(&a,&b);                                //we have to send address if we are using pointer instead of values
    printf("%d and %d after swap",a,b);
    return 0;
}