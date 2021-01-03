#include <iostream>
using namespace std;

int main() {
    int t,sum=0,ans;
    cin>>t;
    int n,k,d;
    int a[n];
    while(t--){
        cin>>n>>k>>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        ans = sum/k;
        if(ans>d){
            cout<<d<<endl;
        }
        else{
            cout<<ans<<endl;
        }
       
        sum=0;
    }
	
	return 0;
}
