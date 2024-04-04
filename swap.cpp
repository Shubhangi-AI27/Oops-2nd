#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter value of a:";
    cin>>a;
    cout<<"enter value of b:";
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping the number is :"<<"a is :"<<a<<"\nb is:"<<b<<endl;
        return 0;

}

