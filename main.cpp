#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  cout<<"What is the item?"<<endl;
     if ( input == 'a' || input == 'A')
     {
          
        for (; numItems < 5; numItems++)
         {
          cin>>list[numItems];
          if ( numItems >= 4)
          {
          cout<<"You'll need a bigger list!";
          }

 
         }
              
         
      }

  }while (input != 'q' &&  input != 'Q');
  return 0;
}
