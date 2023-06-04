#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void f( int n){
    if(n==0)
    return ;
else{
    f(n-1);
    cout<<n<<endl;
}

}
int main(int argc, char const *argv[])
{
   
int  n;
cin>>n;
f(n);


    return 0;
}

