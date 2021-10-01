#include <iostream>
using namespace std;
void segregate(int arr[],int n){
    int j=0;
  
    for(int i=0;i<n;i++){
        if(arr[i]<0){if(i!=j)swap(arr[i],arr[j]);
        j++;}
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
int main() {
int arr[]={1,-13,14,15,12,-17,-8,2,16};
segregate(arr,9);
	return 0;
}
