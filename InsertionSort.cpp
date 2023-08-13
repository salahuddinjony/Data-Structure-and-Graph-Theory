#include<bits/stdc++.h>
using namespace std;

void selectioSort(int array[],int n){
    
     for (int i =1; i <n; i++) 
    {
        int Current=array[i]; 
        int j=i-1; 

        while (array[j]>Current && j>=0)  
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=Current;
        
    }

    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i <n; i++)
    {
        cin>>array[i];
    }

    selectioSort(array,n);
   
    
}