#include<bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
        // coode here 
    int b[n];
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)count0++;
        if(arr[i]==1)count1++;
        if(arr[i]==2)count2++;
    }
    for(int i=0;i<count0;i++){
        b[i]=0;
    }
    for(int i=0+count0;i<count0+count1;i++){
        b[i]=1;
    }
    for(int i=0+count0+count1;i<n;i++){
        b[i]=2;
    }
   for(int i=0;i<n;i++)cout<<b[i]<<" ";
    
}
int main(){
  int arr[]={0,2,1,2,0,1};
	sort012(arr,6); 
	
	return 0;
}
