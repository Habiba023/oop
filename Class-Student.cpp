/* 
  **************************
    Program Name :: Marks and Grade as data member 
    Program Description :: Write a class has marks and grades as data member .A constructor with two parameters
    initilize data member with given values & member function show() display member function .
    create two object and display the values .
    Program Date :: June 02,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream> 
using namespace std;

class Student 
{
private:
int marks ;
char grades ;
public:
Student (int m, char g)
{
   marks = m ;
   grades = g ; 
}
void show ()
{
  cout<<"Marks :"<<marks<<endl ;
  cout<<"Grade :"<<grades<<endl ;
}
};
int main()
{
    system ("cls");
   Student s1(730 ,'A'),s2(621,'B');
   cout<<"Record of student 1 :"<<endl;
   s1.show();
   cout<<"Record of student 2 :"<<endl;
   s2.show();
    return 0;
}