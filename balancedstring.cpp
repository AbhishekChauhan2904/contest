#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
		while(t--) {
		int n;
	   string s;
		cin>>n;
		cin>>s;
		int l=-1, r=-1;
		for(int i=0; i<n-1;i++) {
			if(s[i]!=s[i+1]) {
				l=i+1;
				r=i+2;
				break;
			}
		}
		cout<<l<<" "<<r<<endl;
}
}