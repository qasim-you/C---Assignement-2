# include<iostream>
# include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    //the value of "s" is
    int s=a+b+c;
    double x=(s*(s-a)*(s-b)*(s-c));
    double Area=sqrt(x);
    cout <<"The area of given triangle is:"<<Area;
    return 0;
}