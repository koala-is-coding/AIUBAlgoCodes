//Bubble sort
#include<iostream>
using namespace std;
void BubbSort(int arr[],int size){
for(int i=0;i<size;i++){
 for(int j=i+1;j<size;j++){
 if(arr[i]>arr[j]){int temp=arr[i];arr[i]=arr[j];arr[j]=temp;}
 }
}
}
void Display(int arr[],int s){
for(int i=0;i<s;i++){cout<<arr[i]<<" ";}

}
int main(){
int arr[]={2,1,4,5,3};
int size=5;
BubbSort(arr,size);
Display(arr,size);
}