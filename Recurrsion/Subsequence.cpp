#include<iostream>
#include<vector>

using namespace std;

void sum(int index,int arr[],int size,vector<int>ans) {
if(index==size){
  for (int  i = 0; i <ans.size(); i++)
  {
    cout<<ans[i]<<" ";

    
  }
  cout<<endl;
  return ;

  
}



}

int main() {
  int arr[3]={1,2,1};
  int size=3;
  vector<vector<int>>ans;
  sum(0,arr,size,ans);

    return 0;
}
