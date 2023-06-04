#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
else{
    f(i+1,n);
    cout<<i<<endl;
}
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    f(1,n);



    return 0;
}

