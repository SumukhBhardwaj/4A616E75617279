#include<bits/stdc++.h>
using namespace std;

int main(){

long long q,n,l,r,d,k;
cin>>q;

while(q--){
	
	cin>>l>>r>>d;
	
	if(d<l)
		cout<<d<<endl;
	
	else if(d>r)
		cout<<d<<endl;
	
	else
	cout<<((d*(r/d+1)))<<endl;}

return 0;}
