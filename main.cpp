#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
if (input == 'a' || input =='A')
    {
          cout<<"What is the item?"<<endl;
          
     if (numItems > 4)
         {
         cout<<"You'll need a bigger list!";
         }else
         {
               
     cin>>item;
     list[numItems]=item;
     }
               
    }
    numItems++;

}while ((input != 'q' && input != 'Q') && numItems < 20 );

  return 0;
}
