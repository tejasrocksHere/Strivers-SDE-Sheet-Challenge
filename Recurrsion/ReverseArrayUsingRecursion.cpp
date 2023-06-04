#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end,int size){
    if(start==end)
{
    return;
}
else{


swap(arr[start],arr[end]);
reverse(arr,start+1,end-1,size);


}


}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
   

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

reverse(arr,0,n-1,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}

