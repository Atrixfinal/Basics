#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    char x,y,z,p,q,r;
    
    //here we are using switch for condition
    printf("Give the values of a,b:\n");
    scanf("%d %d",&a,&b);
    printf("Give the arthematic operators you wanna use: ");
    scanf(" %c",&x);
    switch (x)                                              
    {
    case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%d",a/b);
        break;
    case '%':
        printf("%d",a%b);
        break;
    default:
        break;
    }

    //simple use of switch for relation check
    printf("\n\nNow give the relation operators to check if it is true\n");
    printf("So give the values of 1 and 2 numbers:\n");
    scanf("%d%d",&c,&d);
    printf("give the operator you wanna use <,>,=:");
    scanf(" %c",&y);
        switch (y)                                          
        {
        case '<':
            if (c<d)
            {
                printf("It is true");
            }
            else
            {
                printf("It is false");
            }
        break;        
        case '>':
            if (c>d)
            {
                printf("It is true");
            }
            else
            {
                printf("It is false");
            }
        break;
        case '=':
            if (c==d)
            {
                printf("It is true");
            }
            else
            {
                printf("It is false");
            }
        break;
        default:
        break;
        }
        
    //to find the ascaii value and tell if it is upper or lower case
    printf("\n\nEnter the character you want to see the aasci value: ");
    scanf(" %c",&x);
    printf("aascii value of %c is %d",x,x);
    printf("\nthe value is:");
    scanf("%d",&a);
    printf("value of a:%c\n",a);
    if (a>=65&&a<=90)                                               //Upper case alphabet are from 65 to 90
        {
        printf("it is in Upper case");
        }
    else if(a>=97&&a<=122)                                              //lower case alphabet are from 97 to 122
        {printf("it is in lower case");}
    else{printf("it is symbol or invalid");}
    printf("\n");
    return 0;
}