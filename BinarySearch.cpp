#include<bits/stdc++.h>
using namespace std;




int binarySearch(int array[],int n,int key){

    int s=0;
    int e=n; //Here we use also e=n-1
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if (array[mid]<key)
        {
            s=mid+1;
            
        }
        else{
            e=mid-1;
        }
        
    }

    return -1;
    
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i<n; i++)
    {
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(array,n,key)<<endl;
    
}