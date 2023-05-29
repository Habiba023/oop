/* 
  **************************
    Program Name :: Class Test 
    Program Description :: In this Program we declare class Test obj with two member function in() and out().
    Program Date :: May 28,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream>
using namespace std;

class Test
{
private:
int n;
public:
void in()
{
    cout <<"Enter a number :"<<endl ;
    cin>>n;
}
void out ()
{
    cout <<"The value of n ="<<n;
}
};
int main()
{
    system ("cls");
    Test obj;
    obj.in();
    obj.out();
    return 0;
}