#include<iostream>                                  //input output
using namespace std;
//use for cin and cout if we don't use this then we have to use cout and cin as std::cout or std::cin again and again so it is better to use using/typedef
int main()                                          //in cpp main fnx is usally in int or what you want but not in void (void could create errors)
{
    char name[50];
    int x,y,z;
    float p,q,r;    
    cout<<"Your First name is ";                     //cout to display like printf in c
    cin>>name;                                       //cin to take value like scanf in c
    cin.ignore();                                    //to remove any old input
    cout<<"Enter Full name: ";
    cin.getline(name,50);                            //by getline you will be able to give variable with spaces and sentences
    cout<<"Hello "<<name<<" how are you\n";
    cout<<"Give the values of x and y"<<endl;        //endl and \n and cin.ignore() all are use for newline but endl and .ignore remove any old input/buffer  
    cin>>x>>y;
    cout<<"Now Arithematics Problems :\n";
    z=x+y;
    cout<<"x+y is ";
    cout<<z;
    cout<<"\n";
    z=x-y;
    cout<<"x-y is "<<z<<endl;
    cout<<"x*y is "<<x*y<<endl;
    cout<<"x/y is "<<x/y<<endl;
    cout<<"x%y is "<<x%y<<endl;
    
    //where we will find max min like we did in c
    int a,b,c,max,min,mid;
    cout<<"Now we will find max and min number btw a,b,c\n";
    cout<<"Give the values of a and b and c:\n";
    cin>>a>>b>>c;
    if (a>b&&a>c)
            {
                cout<<"a is the greatest"<<endl;
                max=a;
            }
        else if (b>a&&b>c)
            {
                cout<<"b is the greatest"<<endl;
                max=b;
            }
        else if (c>a&&c>b)
            {
                cout<<"c is the greatest"<<endl;
                max=c;
            }
    if (a<b&&a<c)
            {
                cout<<"a is the smallest"<<endl;
                min=a;
            }
        else if (b<a&&b<c)
            {
                cout<<"b is the smallest"<<endl;
                min=b;
            }
        else if (c<a&&c<b)
            {
                cout<<"c is the smallest"<<endl;
                min=c;
            }
    if (a!=max&&a!=min)                     //if num is nither max nor min then it should be mid
            {
                cout<<"a is the mid"<<endl;
            }
        else if (b!=max&&b!=min)
            {
                cout<<"b is the mid"<<endl;
            }
        else if (c!=max&&c!=min)
            {
                cout<<"c is the mid"<<endl;
            }
    return 0;
}