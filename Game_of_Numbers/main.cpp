/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 8 October, 2018, 10:40 PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    short int A[n];
    for(int i = 0; i<n; i++)
        cin>>A[i];
    
    short int next_greater[n], next_smaller[n];
    
    stack<short int> s1;
    for(int i = n-1; i>=0; i--){
        
        if(!s1.empty() && A[s1.top()] <= A[i])
            s1.pop();
        
        if(!s1.empty())
            next_greater[i] = s1.top();
        else
            next_greater[i] = -1;
        
        s1.push(i);
    }
    
    stack<int> s2;
    for(int i = n-1; i>=0; i--){
        if(!s2.empty() && A[s1.top()] >= A[i])
            s2.pop();
        
        if(!s2.empty())
            next_smaller[i] = s2.top();
        else
            next_smaller[i] = -1;
        
        s2.push(i);
    }
    
    for(int i = 0; i<n; i++){
        if(next_greater[i] != -1 && next_smaller[next_greater[i]] != -1)
            cout<<A[next_smaller[next_greater[i]]]<<" ";
        else
            cout<<-1<<" ";
    }
    return 0;
}

