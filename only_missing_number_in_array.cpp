#include<bits/stdc++.h>
using namespace std;
 
// Function to find missing number
int getMissingNo(int a[], int n)
{
    for (int i=0; i<n; i++)        
        if (a[i] != (i+1))
            return (i+1);
  
    // If all numbers from 1 to n
    // are present
    return n+1;
}
 
// Driver code
int main()
{
    int a[] = {1, 2, 4, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    cout << getMissingNo(a, n);
    return 0;
}
 
