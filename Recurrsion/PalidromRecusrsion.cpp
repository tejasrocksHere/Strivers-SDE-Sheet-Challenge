
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool CheckPalidrome(char str[],int start,int end,int size){
    if(start>=end){
        return true;
    }
    
       else if (str[start]!=str[end])
       return false;


else
return CheckPalidrome(str,start+1,end-1,size);

    
}

int main(int argc, char const *argv[])
{
   
int n;
cout<<"Enter value of N"<<endl;
cin>>n;

char str[n];
for (int i = 0; i < n; i++)
{
    cin>>str[i];
}


cout<<"Reuslt: "<<CheckPalidrome(str,0,n-1,n);
    return 0;
}

