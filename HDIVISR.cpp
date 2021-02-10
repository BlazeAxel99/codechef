#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b){
    return a > b;
}
int main() {
    int n;
    cin>>n;
    vector <int> v;
    for(int i=1;i<10;i++){
        if(n%i==0){
            v.push_back(i);
        }
    }
    sort(v.begin(), v.end(),comp); 
    cout<<v[0];
	// your code goes here
	return 0;
}
