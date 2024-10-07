#include<iostream>
using namespace std;
void Move_Zeros(int arr[],int size){
for(int i=0;i<size-1;i++){
    if(arr[i]==0){
        for(int j=i+1;j<size;j++){
            if(arr[j]!=0){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }

}
    
}
void dis_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }}
int main(){

int cap=15;
int si=10;
int arr[cap]={1, 0, 2, 3, 2, 3, 0, 4, 5, 1};
Move_Zeros(arr,si);
cout<<"After Moving zeros Arry is "<<endl;
dis_arr(arr,si);





return 0;
}