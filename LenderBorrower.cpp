#include<iostream>
#include<vector>


using namespace std;


class lend
{
    public:
    int balance;
    vector<string> name;
    vector<int> due;

    void payment( string s,int a)
    {
        name.push_back(s);
        due.push_back(a);
        balance-=a;
    }

};


class borrow
{
public:
    string name;
    int request;
};




int main(){
    borrow b1, b2;
    
    b1.name="A";
    b2.name="B";
    
    
    b1.request=40;
    b2.request=59;
   
    
    lend l1;
    
    l1.balance=100;
    
    l1.payment(b1.name,b1.request);
    l1.payment(b2.name,b2.request);


    return 0;

}