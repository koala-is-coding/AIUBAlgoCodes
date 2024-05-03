//QuickSort
#include<iostream>
using namespace std;
int Partition(int arr[],int l,int r){
int pivot=arr[r];
int i=l-1;
for(int j=l;j<r;j++)
  {
  if(arr[j]<pivot){i++;swap(arr[i],arr[j]);}
  }swap(arr[i+1],arr[r]);
return i+1;
}
void QuickSort(int arr[],int l,int r){
if(l<r){
 int pivot = Partition(arr,l,r);
 QuickSort(arr,l,pivot-1);
 QuickSort(arr,pivot+1,r);
 }
}
int main(){
int arr[]={5,1,4,2,3};
QuickSort(arr,0,4);
cout<<"Sorted using quicksort::"<<endl;
for(int i=0;i<5;i++){cout<<arr[i]<<" ";}
}