#include<stdio.h>
#include<math.h>
int main()
{
    char name[20];
    int a,b,c,d,e,x,y,z;
    float f,g,h,i,j,r,s,t;
    
    //this part is simple input output or print and scanf
    printf("Hello, Please write your name: ");          //this is to print something in the output
    scanf("%s",name);                                   //this is to take input from the user
    printf("Roll no please: ");
    scanf("%d",&a);
    printf("Your marks: ");
    scanf("%f",&f);
    printf("Yo, %s from AI Your roll no is %d\nYour marks is %.2f\n",name,a,f);
    
    //this is simple use of operators
    printf("The value of a and b are :\n");                                              
    scanf("%d %d",&a,&b);
    x=a+b;
    printf("sum is %d\n",x);
    printf("division is %d\n",a/b);
    printf("multi is %d\n",a*b);
    printf("Mod is %d\n",a%b);
   
    //this is simple application of maths operators
    printf("Please put the value of side of a square:");
    scanf("%d",&c);
    printf("The area of the square is %d",c*c);
    printf("\nNow put the value of radius of circle so that we can get area : ");
    scanf("%f",&g);
    printf("The area is %.4f",g);
    printf("\nSides of the rectangle:\n");
    scanf("%f %f",&h,&i);
    printf("The parameter of the rectangle is %f\n",h*i);

    //we need to use math.h lib to use exponential or power so either include it at the top or here
    double p;                                                 //and use double for c output as only double can execute the power fnx
    printf("Value of a and b: ");
    scanf("%d %d", &a, &b);
    p = pow(a, b);                                           // a raised to the power b
    printf("Value of c = %.2f\n", p);                        // ONLY float can represent c as power beacause it is a double datatype
    
    //SIMPLE INTEREST CODE
    
    printf("Enter the value of principle: ");
    scanf("%f",&f);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time/duration: ");
    scanf("%f",&t);
    s=(r*t*p)/100;
    printf("SI is %.2f\n",s);

    //simple if else condition statement
    //to check if it is divisable by 2 and to check if it is even and odd                                        
    printf("\nWe will now cheack if it is even or odd\n");
    printf("Enter the value of number: ");
    scanf("%d",&a);
    if (a%2==0)
    {printf("it is even");}
    else
    {
        printf("it is odd");
    }
    printf("\nGive Another number: ");
    scanf("%d",&b);
    if (b%2==0)
    {
    printf("it is even");
    }
    else{printf("it is odd");}

    //to check if it is in limit                                                    
    printf("\nPut a number to check if it is greater than 10 and less than 100: ");
    scanf("%d",&e);
    if (e>10 && e<100)
    {
        printf("it is in the limit");
    }
    else
    {
        printf("it is out of the limit");
    }
return 0;
}