#include <iostream>
using namespace std ;
int main()
{

    int p ;
    cout<<"enter the number";
    cin>>p;

    if (p<=1)
     {

        cout<<"entered number is neither prime nor composite"<<endl;
        return 0;
     }
 bool isprime = true ;

 for (int i=2 ;  i<=p/2 ; ++i)
 {
    if (p%i==0)
    {
        isprime=false;
        break;

    }
 }
 if (isprime) 
 {
    cout<<"entered number is a prime number "<<endl;
     

 }
else 
{
    cout<<"entered number is a composite number , its factors are : "<<endl;
    for (int i =1 ; i<=p ; ++i )
    {
     if (p%i==0)
     {
        cout<<i<<",";
     }

    }
    cout<<endl;
}





return 0;
}