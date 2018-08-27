#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,start,count = 0;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    sort(A,A+n);
    start = A[0];
    for(int i = 1; i<n; i++){
        if(A[i] <= start + 4){
            continue;
        }else{
            start = A[i];
            count++;
        }
    }
    cout<<count+1;
    return 0;
}