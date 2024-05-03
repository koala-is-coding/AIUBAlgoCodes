//Selection sort
#include<iostream>
using namespace std;
void InSort(int arr[],int s){
   for(int i=0;i<s;i++){
   int min_idx=i;
     for(int j=i+1;j<s;j++)
      {
     if(arr[min_idx]>arr[j]){min_idx=j;}
      }
      swap(arr[min_idx],arr[i]);
   }
  }
void Display(int arr[],int s){
  for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
     }
 }
int main(){
int arr[]={4,5,2,1,3};
int size = sizeof(arr)/sizeof(arr[0]);
InSort(arr,size);
Display(arr,size);
 }