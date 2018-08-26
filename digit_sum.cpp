#include <bits/stdc++.h>
using namespace std;
// Function prototype
void check(int);
//Position this line where user code will be pasted.
// Driver Code
int main()
{
    
    // Testcase input
    int t;
    cin>>t;
    
    // Loop to iterate through all testcases
    while(t--)
    {
        // Input number to check for sum
        int n;
        cin>>n;
        
        // Calling function
        check(n);
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
void check(int n)
{
    // Your code here.
    
    
    int d,sum_fl = 0, sum_rem = 0,c1 = 0,c2 = 0,temp = n;
    while(n > 0){
        
        c1++;
        n/=10;
    }
    while(temp > 0){
        d = temp%10;
        if(c2 == 0 || c2 == c1-1)
            sum_fl+=d;
        else
            sum_rem+=d;
        temp/=10;    
        c2++;    
    }
    if(sum_fl == sum_rem)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
