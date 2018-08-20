#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,q,bit,x,l,r,num=0,count;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    while(q--){
       cin>>bit;
       if(bit == 1){
           cin>>x;
            if(A[x-1] == 0)
                A[x-1] = 1;
            else 
                A[x-1] == 0;
       }else{
           cin>>l>>r;
           count = r-l;
           for(int i = l-1; i<=r-1; i++){
               if(count >= 0){
                   num+=A[i]*pow(10,count);
               }
               count--;
           }
           if(num%2 == 0)
                cout<<"EVEN";
           else
                cout<<"ODD";
       }
    }
    return 0;
}

