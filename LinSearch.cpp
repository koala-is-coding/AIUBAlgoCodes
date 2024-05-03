//Linear Search
#include<iostream>
using namespace std;
  void LinSrch(int arr[],int s,int ele){
  for(int i=0;i<s;i++){
      if(arr[i]==ele){cout<<"Element found at index "<<i<<endl;return;}
    }cout<<"ELement not found"<<endl;

  }
int main()
  {
   int arr[]={1,2,3,4,5};
   int size=5;
   LinSrch(arr,size,4);
  }