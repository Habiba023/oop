/* 
  **************************
    Program Name :: Class Marks
    Program Description :: In this Program we declare class Marks obj with three member functions in() , sum()and avg().
    Program Date :: May 29,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream>
using namespace std;

class Marks
{
private:
int a,b,c;
public:
void in()
{
    cout <<"Enter three marks :"<<endl ;
    cin>>a>>b>>c;
}
int sum()
{
    return a+b+c;
}
float avg()
{
    return (a+b+c)/3.0;
}
};
int main()
{
    system ("cls");
    Marks m;
    int s ;
    float a;
    m.in();
    s=m.sum();
    a=m.avg();
    cout<<"Sum ="<<s<<endl;
    cout<<"Averge :"<<a;
    return 0;
}