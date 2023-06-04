#include<iostream>
#include<bits/stdc++.h>
using namespace std;




int sum(int index,int sum1,int arr[],int target,int size){
if(index==size){
if(sum1==target){
    return 1;
}
else
return 0;
}
sum1=sum1+arr[index];
int l=sum(index+1,sum1,arr,target,size);
sum1=sum1-arr[index];
int h=sum(index+1,sum1,arr,target,size);

return l+h;
}
int main(int argc, char const *argv[])
{

int arr[4]={1,3,1,2};
int n=4;
int target=5;

cout<<sum(0,0,arr,target,n);


    return 0;
}

