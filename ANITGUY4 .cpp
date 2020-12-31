#include <iostream>
using namespace std;

int main() {
    int t,a,sum=0,ans=0;
    cin>>t;
    while(t--){
        cin>>a;
        for(int i=0;i<a;i++){
            sum = sum + (i*i*i);
        }
        ans= (2*sum)+ (a*a*a);
        cout<<ans<<endl;
        
        ans=0;
        sum=0;
    }
    	// your code goes here
	return 0;
}
