#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,temp,sum=0;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    sort(A,A+n);
    
    for(int i = 1; i<n; i++){
       temp = i-1;
       while(temp>=0){
           if(A[temp] < A[i] && A[temp]!=0){
               A[temp] = 0;
               break;
           }
         temp--;  
       }
    }
    
   /* for(int i = 0; i<n; i++)
        cout<<A[i]<<" ";
    cout<<endl; */   
        
    for(int i = 0; i<n; i++)
        sum+=A[i];
        
    cout<<sum;    
    return 0;
}
