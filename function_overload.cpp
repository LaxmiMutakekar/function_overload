
#include<iostream>
using namespace std;
const float pi=3.14;
class allarea{
    private:float ar1,ar2,ar3;
    public:
        float area(float n,float b,float h)//function to calculate area of triangle
        {
            ar1=n*b*h;
        }
        float area(float r)//Function to calculate area of circle
        {
            ar2=pi*r*r;
        }
        float area(float lr,float br)//function to area of rectangle
        {
            ar3=lr*br;
        }
       void display()
       {
           cout<<"\nArea of traingle:"<<ar1<<endl;
           cout<<"\nArea of circle:"<<ar2<<endl;
           cout<<"\nArea of rectangle:"<<ar3<<endl;
       }
};

int main()
{
    float b,h,r,lr,br;
    allarea a;

    cout<<"\nenter the base & height of traingle:\n";//enters the parameters of triangle
    cin>>b>>h;
    a.area(0.5,b,h);

     cout<<"\nenter radius of circle:\n";//enters the parameters of circle
    cin>>r;
    a.area(r);

     cout<<"\nenter the length and breath of rectangle:\n";//enters the parameters of rectangle
    cin>>lr>>br;
    a.area(lr,br);

    a.display();
    return 0;

}
