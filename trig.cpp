#include <bits/stdc++.h>
#include <iostream>
#include <cmath>	
#include <algorithm>

using namespace std;

const int MAXN = 10000500;
int n; 
int a[MAXN];
long double e[MAXN];
	
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
	
    cin >> n; 
    for (int i = 0; i < n; ++i)
	    cin >> a[i];
	
    for (int i = 0; i < n; ++i)
        e[i] = sin(cos(a[i]));

    unordered_set <long double> s;
    copy(std::begin(e), std::begin(e) + n, std::inserter(s, s.begin()));
    cout << s.size();
	
    return 0;
}