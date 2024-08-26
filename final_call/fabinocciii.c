#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin>>n;
    vector<int>a(n+1);
    a[0] = 1;
    a[1] = 1;
    int i;
    int modd = 47;
    for( i = 2 ; i <= n ; i++ ){
        a[i] = ( (( a[i-2]*a[i-2] )%modd) + (( a[i-1]*a[i-1] )%modd) )%modd;
    }
    cout<<a[n]%47<<endl;
}
