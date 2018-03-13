#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector <string> list;
 // string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string item;
  int outcount =0;
  int newSize;
  
  do
  {
      cout<<"\n==GROCERY LIST MANAGER==";
      cout<<"\nEnter your choice: ";
      cout<<"\n (A)dd an item";
      cout<<"\n (Q)uit";
      cout<<"\nYour choice (A/Q): ";
      cin>>input;
  if (input == 'a' || input == 'A')
    {
          cout<<"What is the item?"<<endl;
          cin>>item;
          list.push_back(item);
          numItems++;

    }
   
  }while ((input != 'q' && input != 'Q'));

do 
{   if (list.empty())
    {
        cout << "No items to buy!" << endl;
    }else
    {    cout << "==ITEMS TO BUY==" << endl;
         cout << outcount + 1 << " " << list[outcount] << endl;
         outcount++;
    }
 }while (outcount < numItems );

  return 0;
}

