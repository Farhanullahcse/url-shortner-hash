#include <iostream>
#include <string>
#include<string.h>
#include <algorithm>


using namespace std;

int Hash(string arr);
int store_data(string arr,int index);
string LongToShort(int Index);
int ShortToLong(string n);

int main()
{
    string long_url;

    cout<<"Enter a long URL : "<<endl;
    cin>>long_url;

    int I=Hash(long_url);               /// FIRST STEP

    cout<<"THE INDEX VALUE IS : "<<I<<endl;

    store_data(long_url,I);             /// SECOND STEP


   string r= LongToShort(I);

  cout<<r<<endl;          /// THIRD STEP
  cout<<ShortToLong(r)<<endl;
/*
    char ans;

    cout<<"Do You want other URL to be Shortened : "<<endl;
    cin>>ans;

    if (ans == 'Y' || ans=='y')
    {
        goto start;
    }
    else if (ans == 'N' || ans=='n')
    {
    return 0;
    }

    */
return 0;
}
int Hash(string arr)   /// FIRST STEP
{
    int ascii=0;

    for(int i=0;arr[i];i++)
    {
        ascii = ascii+arr[i];
    }

    int I= ascii %100;

    return I;

}
int store_data(string arr, int I)        /// SECOND STEP
{
    string HASH_TABLE[100];

    HASH_TABLE[I]=arr;

    cout<<"THE LONG URL IS STORED AT INDEX : "<<I<<endl;
/*
    char Ans;

    cout<<"Are you want to access the long URL? (Y/N) "<<endl;

    cin>>Ans;

    if (Ans=='y' || Ans=='Y')
    {
        cout<<"The long URL is : "<<HASH_TABLE[I]<<endl;
    }
*/
}

string LongToShort(int Index)    /// THIRD STEP
{  int rem;
    cout<<"The short URL is : ";
  cout<<"app.ly.com/";

    int n=Index;

   char mapping[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};

    string short_url;

    while (n)
    {

    short_url.push_back(mapping[n%62]);

    n=n/62;


    }

    return short_url;

}
int ShortToLong(string n)
{
    int Ans;

    char c=n[0];

     char mapping[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};

     cout<<"Do You want to access the long URL back ? (Y/N) "<<endl;
     cin>>Ans;

    if (Ans=='y' || Ans=='Y')

    cout<<"The long URL is : ";

    for (int i=0;i!=strlen(mapping);i++)
        {
            if (c == mapping[i])
            {
                return i;
            }
        }
    }
