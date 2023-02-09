#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printSquare(int n) {
        for (int i=0;i<n;i++)
        {
             int j=0;
            while(j<n)
            {
                cout<<"* ";
                j++;
            }
            cout<<endl;
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
