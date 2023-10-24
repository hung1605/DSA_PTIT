#include <bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n){
    if (n == 1 or n == 2 or n == 3 or n == 4 or n == 5)
        return n;
    set<long long> s;
    s.insert(1);
    n--;
    while (n){
        auto it = s.begin();
        // Get the beginning element of the set
        long long x = *it;
        // Deleting the ith element
        s.erase(it);
        // Inserting all the other options
        s.insert(x * 2);
        s.insert(x * 3);
        s.insert(x * 5);
        n--;
    }
    // The top of the set represents the nth ugly number
    return *s.begin();
}

void testCase(){
    int n;
    cin >> n;
    cout << nthUglyNumber(n) << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
        testCase();
}