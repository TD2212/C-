#include<iostream>
using namespace std;
int main()
{
    int i,number,Factoriyal=1;//Declaring variables for oppration
    cout<<"ENTER NUMBER"<<endl;
    cin>>number;
    for(i=1;i<=number;i++)
    {
        Factoriyal=Factoriyal*i;//function logic
    }
        cout<<"Factoriyal is="<<Factoriyal<<endl;
    return 0;
}