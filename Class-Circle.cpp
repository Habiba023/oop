#include <iostream>
using namespace std;

class Circle
{
private:
float radius ;
public:
void get_radius(float r)
{
    radius =r;
}
void area()
{
    cout<<"\nArea of circle :"<<3.14*radius*radius;
}
void circum()
{
    cout <<"\n Circumference of circle :"<< 2 * 3.14 * radius  ;
}
};
int main()
{
    system ("cls");
    Circle c1;
    float rad;
    cout<<"\nEnter radius :";
    cin>>rad;
    c1.get_radius(rad);
    c1.area();
    c1.circum();
    return 0;
}