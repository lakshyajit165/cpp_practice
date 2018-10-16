/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Elkay
 *
 * Created on 16 October, 2018, 11:48 PM
 */

#include<bits/stdc++.h> 
using namespace std; 
  
// Function to calculate gcd of two numbers 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
// Function to calculate all common divisors 
// of two given numbers 
// a, b --> input integer numbers 
int commDiv(int a,int b) 
{ 
    // find gcd of a,b 
    int n = gcd(a, b); 
  
    // Count divisors of n. 
    int result = 0; 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        // if 'i' is factor of n 
        if (n%i==0) 
        { 
            // check if divisors are equal 
            if (n/i == i) 
                result += 1; 
            else
                result += 2; 
        } 
    } 
    return result; 
} 
  
// Driver program to run the case 
int main() 
{ 
    int a = 12, b = 24; 
    cout << commDiv(a, b); 
    return 0; 
} 
