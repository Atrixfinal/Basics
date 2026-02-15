#include<stdio.h>
int *p,a,b;
float x,y;
void main()
{
    printf("Enter the value of a:");
    scanf(" %d",&a);
    printf("Value of a is:%d",a);
    printf("address of a is :%d\n",&a);
    p=&a;                                                       //to initialize the pointer to the address
    printf("Pointer address of the value: %p\n",p);
    printf("Value inside the pointer: %d\n",*p);
    *p=2;                                                       //change the value of variable by using pointer
    printf("Value inside the pointer: %d\n",*p);
    printf("Pointer address of the value: %p\n",p);
    *p=++a;                                                     //increment value of a variable using pointer
    printf("Value inside the pointer: %d\n",*p);
    printf("Pointer address of the value: %p\n",p);
    *p=--a;                                                     //decrement value of a variable using pointer
    printf("Value inside the pointer: %d\n",*p);
    printf("Pointer address of the value: %p\n",p);
}