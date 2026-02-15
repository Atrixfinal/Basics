#include<stdio.h>
void main()
{
    int a,b,c,d,n,i,j,sum;
    int x[10],y[10],z[10];
    char p,q,r;
    float avg;

    //use of for loop for number 
    printf("take the number: ");                                          
    scanf("%d",&c);
    printf("the value of upper limit:");
    scanf("%d",&b);
    for (a=c;a<=b;a++)
    {printf("%d\n",a);}

    //for loop for alphabet
    printf("give the initialize character: ");                           
    scanf(" %c",&p);
    printf("give the upper limit to the char: ");
    scanf(" %c",&q);
    for ( i = p; i <= q; i++)
    {
        printf("%c\n",i);
    }

    // this is by while loop
    printf("Give the first number: ");                  
    scanf("%d",&a);
    printf("give the limit: ");
    scanf("%d",&b);
    while (a<=b)
    {
        printf("%d\n",a);
        a++;
    }

    //this is by do while loop
    printf("enter the value for do while: ");           
    scanf("%d",&c);
    printf("limit: ");
    scanf("%d",&d);
    do
    {
    printf("%d\n",c);
    c++;
    } while (c<=d);

    //simple for loop to enter and print data from a array
    printf("Enter the number of values: ");                   
    scanf("%d",&n);
    printf("Give %d numbers/values",n);
    for (i=0;i<n;i++)                                         
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Roll no is : %d\n",x[i]);
    }

    //question to give sum and avg of a array and then give if the element is even or odd                       
    printf("The maximum limit is : ");
    scanf("%d",&n);
    printf("Start giving values:\n");
    for (i = 0; i < n; i++)                              //loop to enter data/value to the array
    {
        scanf("%d",&x[i]);
    }
    for ( i = 0; i < n; i++)                                //loop to print the data from the array
    {
        printf("Marks are : %d\n",x[i]);
    }
    for ( i = 0; i < n; i++)                              //loop to add all the values in the array
    {
        sum=sum+x[i];
    }
    avg=sum/n;
    printf("%d is the sum and %.2f is the avg\n",sum,avg);
    
    for ( i = 0; i < n; i++)                            //loop to check if it is even or odd
    {
        if (x[i]%2==0)
    {
        printf("it is even\n");
    }
    else{printf("it is odd\n");}
    }

    //question to merge two array and their sum will be 3rd array
    printf("Enter the maximum tables: ");
    scanf("%d",&n);
    printf("\nPrint the data for the X array:\n");
    for ( i = 0; i < n; i++)                                 //loop to enter the data in X array
    {
        scanf("%d",&x[i]);
    }
    for ( i = 0; i < n; i++)                                 //loop to display the data of the X array
    {
        printf("\nValues of 1st array of %d: %d\n",i,x[i]);
    }

    printf("\nprint the data for the Y array:\n");
    for ( i = 0; i < n; i++)                                 //loop to enter the data in Y array
    {
        scanf("%d",&y[i]);
    }
    for ( i = 0; i < n; i++)                                 //loop to display the data in Y array
    {
        printf("\nValues of 2nd array of %d: %d\n",i,y[i]);
    }
    
    printf("\nprint the data for the Z array:\n");
        for ( i = 0; i < n; i++)                                //loop to enter the data in Z array by sum of first two array values
    {
        z[i]=x[i]+y[i];
    }
    for ( i = 0; i < n; i++)                                 //loop to display the data in Z array
    {
        printf("\nValues of 3rd array of %d: %d\n",i,z[i]);
    }
}