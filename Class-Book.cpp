/* 
  **************************
    Program Name :: Find Detail the most costly book
    Program Description :: In this Program Class Book object with three data members book ID , pages & prices and four  member functions
    get() , show () , set() and getprice().
    Program Date :: June 02,2023
    Program Author :: Habiba
  **************************
 */  
#include <iostream> 
using namespace std;

class Book
{
private:
int bookID , Pages ;
float Price ;
public:
void get()
{
 cout<<"Enter a Book ID :";
  cin>>bookID;
  cout<<"Enter a Pages  :";
 cin >>Pages ;
  cout<<"Enter a Prices :";
 cin >>Price ;
}
void show()
{
cout<<" BookID :"<<bookID <<endl;
cout<<"Pages :" << Pages <<endl ;
cout<< "Prices :"<< Price << endl;
}
void set(int id , int pg , float pr)
{
  bookID = id ;
  Pages = pg ;
  Price = pr ;
}
int getPrice()
{
  return Price ;
}
};
int main()
{
    system ("cls");
    Book b1,b2 ;
    b1.get();
    b2.set(2 , 320 , 150.7);
    cout<<"\n The detail of costly book :"<<endl ;
    if (b1.getPrice()>b2.getPrice())
    b1.show();
    else
    b2.show();
    return 0;
}