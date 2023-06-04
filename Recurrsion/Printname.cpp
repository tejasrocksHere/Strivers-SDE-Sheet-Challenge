#include<iostream>
using namespace std;
int count =0;void printName(int i, int n){
if(i>n)
return;
else
{cout<<i<<endl;

printName(i+1,n);
}

}

int main(int argc, char const *argv[])
{
    // cout<<"Hello";

int n;
    cin>>n;
    printName(1,n);
    return 0;
}
