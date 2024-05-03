//CountingSort trial-01
#include<iostream>
using namespace std;
void CountSort(int arr[],int size){
    //finding max element of prime array
    int k=arr[0];
    for(int i=0;i<size;i++){
        k=max(k,arr[i]);
    }
    
    //initializing countarray with size k
    int countArr[k]={0};
    //finding count of each number
    for(int i=0;i<k;i++){
        countArr[arr[i]]++;
    }
    //adding the elements of countArr
     for(int i=1;i<=k;i++){
        countArr[i]=countArr[i]+countArr[i-1];
    }
    //creating outputArr
    int outputArr[size]={0};
    for(int i=size-1;i>=0;i--){
        outputArr[--countArr[arr[i]]]=arr[i];
    }
    //updating output arr elements in prime arr
    for(int i=0;i<size;i++){
      arr[i]=outputArr[i];
    }
}
int main(){
    int arr[]={5,1,2,4,3};
    cout<<"Sorted array using Counting sort"<<endl;
    CountSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}