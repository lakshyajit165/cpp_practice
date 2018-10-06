/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 6 October, 2018, 10:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int n,flag;
    cin>>n;
    int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    for(int i = 0; i<n; i++){
        flag = 0;
        if(i == n-1){
            cout<<"-1";
            break;
        }    
        for(int j = i+1; j<=n-1; j++){
            if(A[j] > A[i]){
                cout<<A[j]<<" ";
                flag = 1;
                break;
            }
            if(flag == 0)
                cout<<"-1"<<" ";
        }
    }
    return 0;
}

