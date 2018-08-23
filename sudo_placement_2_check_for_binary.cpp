#include <bits/stdc++.h>
using namespace std;
bool isBinary(string str);
// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}
bool isBinary(string str)
{
   // Your code here
   int i = 0,flag = 1;
   
   while(str[i]!='\0'){
      if(str[i] == '1' || str[i] == '0')
            continue;
      else{
          flag = 0;
          break;
      }
      i++;
   }
   if(flag)
        return true;
    else
        return false;
}
