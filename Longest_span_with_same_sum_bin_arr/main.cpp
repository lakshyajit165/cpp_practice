/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 9 October, 2018, 11:25 AM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,sum1,sum2,count = 0;
    vector<int> v;
    cin>>n;
    int A1[n],A2[n];
    for(int i = 0; i<n; i++)
        cin>>A1[i];
    for(int i = 0; i<n; i++)
        cin>>A2[i];
    sum1 = A1[0];
    sum2 = A2[0];
    for(int i = 1; i<n; i++){
        sum1+=A1[i];
        sum2+=A2[i];
        if(sum1 == sum2)
            count++;
        else{
            i = i-1;
            v.push_back(count);
            count = 0;
            sum1 = A1[i];
            sum2 = A2[i];
            if(i == n-2)
                break;
        }
    }
    int lar = *std::max_element(v.begin(),v.end());
    cout<<lar+1;
    return 0;
}

