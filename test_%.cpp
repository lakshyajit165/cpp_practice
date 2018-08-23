#include <iostream>
#include <string>

using namespace std;

int main() {
    string n; cin >> n;
    for(int i = 0 ; i < n.size() ; i++)
        if(n[i] > '1') {
            for(int j=i ; j<n.size() ; j++)
                n[j] = '1';

            break;
        }

    cout << stoi(n, nullptr, 2) << endl;
    return 0;
}
