#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],c[20],b[100];
    int x,y,z;
    x=0;
    char d[]="hello";
    puts(d);
    printf("enter the string of a: ");              
    gets(b);                                                    //to enter a string
    printf("enter the string: ");
    scanf(" %s",c);                                             //to enter a string
    printf("enter the number of time you want to print: ");
    scanf(" %d",&y);                                            //ask the limit of loop
    while (x<y)
    {
        printf("string: %s\n",b);
        printf("string: %s\n",c);
        x++;
    }
    printf("length of b is: %d\n",sizeof(b));                   //print the size of an array
    printf("length of c is: %d\n",sizeof(c));                   //print the size of an array
    strcat(b,c);                                                //joint the array
    printf("%s",b);
    printf("\nlength of b is: %d\n",sizeof(b));                 //print the size of an array after join

    printf("enter the string: ");
    scanf(" %s",a);
    printf("enter the string: ");
    scanf(" %s",b);
    printf("enter the string: ");
    scanf(" %s",c);
    if (strcmp(a,b)==0)                                         //to compare strings
    {
        printf("they are same");
    }
    else
    {
        printf("not same");
    }   

    FILE *a;                                            //file always be in pointer because file is a memory allocated to data
    fopen("a","r");                                     //so pointer is required to send data/task to the pointed address
    if (a==NULL)
    {
        printf("it is null");
    }
    else
    {
        printf("it is not null");
    }

    FILE *a;                                      //code to display the data written in file a(and data is also given by user)
    char buffer[100];
    char x[100];
    printf("write the data you want to store in file: ");
    scanf(" %s",x);
    a=fopen("a.txt","w");
    if (a==NULL)
    {
        printf("it is empty");
        return;
    }
    fprintf(a, " %s",x);
    fclose(a);
    a=fopen("a.txt","r");
    if (a==NULL)
    {
        printf("it is empty");
        return;
    }
    fscanf(a, " %s",buffer);
    printf("data from the file is :\n%s",buffer);

}