//MergeSort
#include<iostream>
using namespace std;

void Merge(int arr[],int l,int mid,int r){
int arrSize1=mid-l+1,arrSize2=r-mid;
int arr1[arrSize1],arr2[arrSize2];

for(int i=0;i<arrSize1;i++){arr1[i]=arr[l+i];}
for(int i=0;i<arrSize2;i++){arr2[i]=arr[mid+1+i];}

//tracking index i,j
int i=0,j=0,k=l;
//compare
while(i<arrSize1 && j<arrSize2){
 if(arr1[i]<arr2[j]){arr[k++]=arr1[i++];}
 else{arr[k]=arr2[j];k++;j++;}
}

//remaining indexes
while(i<arrSize1){arr[k]=arr1[i];k++;i++;}
while(j<arrSize2){arr[k]=arr2[j];k++;j++;}

}
void Divide(int arr[],int l,int r){
if(l<r){
 int mid = (l+r)/2;
  Divide(arr,l,mid);
  Divide(arr,mid+1,r);
  Merge(arr,l,mid,r);
 }
}


int main(){
int arr[]={5,4,1,2,3};
Divide(arr,0,4);
for(int i=0;i<=4;i++){
cout<<arr[i]<<" ";
}
}