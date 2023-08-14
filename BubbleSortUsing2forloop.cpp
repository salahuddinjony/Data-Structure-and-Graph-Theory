#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int array[],int n){

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n-1; j++) //Array store 0 of outer index of n , i.e array[n+1]=0 where n=5 but we input only index 0 to 4
        {
           if(array[j]>array[j+1]){
               int temp=array[j];
               array[j]=array[j+1];
               array[j+1]=temp;
           }
        }
        
    }

    for (int i = 0; i <n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    
}
int main(){

    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i <n; i++)
    {
     cin>>array[i];
    }


    BubbleSort(array,n);


   
    
    
}