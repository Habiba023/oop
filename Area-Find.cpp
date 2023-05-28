/* 
  **************************
    Program Name :: Area Find
    Program Description :: In this Program Find a Area By using Length(l) & Width (w).
    Program Date :: May 28,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    float length, width, area;
  
  cout<<"Enter the length of the rectangle :";
  cin>>length;
  cout<<"Enter the width of the rectangle :";
  cin>>width;

    area = length * width;

    cout<<"The area of the rectangle is " <<area;

    return 0;
    // End Program
}
