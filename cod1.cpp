#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main ()
{
    int num,random;

    cout<<"Guess any number: ";
    cin>>num;
    
    srand((unsigned) time(NULL)); 
    random=1+ (rand() % 6);

    cout<<random<<endl;

    if (num==random)
    {
        cout<<"Congrajulations !!!.....You have guess the right number."<<endl;
    }

    else if (num==random+1 || num==random-1)
    {
      cout<<"You have guess almost the right number...Try Again"<<endl;  
    }

    else if (num==random+2 || num==random-2)
    {
      cout<<"Your guess is a bit close to the right number...Try Again"<<endl;  
    }

    else if (num==random+3 || num==random-3)
    {
      cout<<"Your guess is far away to the right number...Try Again"<<endl;  
    }
    else if (num==random+4 || num==random-4)
    {
      cout<<"Your guess is not right...Try Again"<<endl;  
    }

    else if (num==random+5 || num==random-5)
    {
      cout<<"You have guess is wrong...Try Again"<<endl;  
    }
}