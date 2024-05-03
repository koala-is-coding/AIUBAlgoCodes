//Binary Search
#include<iostream>
using namespace std;
void BinSrch(int arr[],int left,int right,int ele)
 {
  while(left<=right){
     int mid = (left+right)/2;
     if(arr[mid]==ele){cout<<"Element found at index "<<mid<<endl;return;}
      else if(arr[mid]>ele){right=mid-1;}//BinSrch(arr,l,mid-1,ele)
      else{left = mid+1;}//BinSrch(arr,mid+1,r,ele)
    }
    cout<<"Element not found"<<endl;

 }
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  BinSrch(arr,0,size-1,10);
  }