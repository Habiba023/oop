/* 
  **************************
    Program Name :: Write class contain 2 integer data and display average of data member .
    Program Description :: In this Program , Write Class that contain two integer data member which initilize 100
    when obj is created .Use member avg() that display averge of data member .
    "using constructor" 
    Program Date :: June 02,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream> 
using namespace std;

class Number
{
private:
int x,y ;
public:
Number ()
{
   x = y = 100 ; 
}
void avg ()
{
  cout<<"x ="<<x<<endl ;
  cout<<"y ="<<y<<endl ;
  cout<<"Average ="<<(x+y)/2<<endl ;
}
};
int main()
{
    system ("cls");
   Number n;
   n.avg();
    return 0;
}