/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 16 October, 2018, 8:53 PM
 */

#include<bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    
    int a = 20;
    vector<int> v {10, 20, 30, 40};
    vector<int>::iterator it;
    if(binary_search(v.begin(),v.end(),a))
        cout<<"Exists!";
    else
        cout<<"No Element!";
    return 0;
}

