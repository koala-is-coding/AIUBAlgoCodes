//Insertion sort
#include<iostream>
using namespace std;
void InSort(int arr[],int s){
   for(int i=1;i<s;i++){
     int key= arr[i];
     int j=i-1;
     while(j>=0 && key<arr[j]){
     arr[j+1]=arr[j];
     --j;

     }
     arr[j+1]=key;

   }
  }
void Display(int arr[],int s){
  for(int i=0;i<s;i++){
    cout<<arr[i]<<" ";
     }
 }
int main(){
int arr[]={4,5,2,1,3,};
int size = 5;
InSort(arr,size);
Display(arr,size);
 }