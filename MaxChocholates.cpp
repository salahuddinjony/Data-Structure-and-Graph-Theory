#include<bits/stdc++.h>
using namespace std;
int main(){

    //1tk=1 chocolates then 3 wrappers=1 chocolates 
    //so how many chocolates if 1tk=1 chocolates ,
    // suppors you have n tk.


    int tk,chocolates,total=0;
    cin>>tk;
    int wrappers=tk;
    total=tk;
    while (wrappers>=3)
    {
        chocolates = wrappers/3;    //  (14/3)=4 (6/3)=2 0
        int rem= wrappers%3;          //2 0
        total+=(chocolates);        //14 14+4=18 18+2=20
        wrappers=chocolates+rem;      // 4+2=6
    }
    cout<<total<<endl;

}