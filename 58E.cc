#include<bits/stdc++.h>
using namespace std;

int main(){

std::ios::sync_with_stdio(false);
long long n,b,c,i,x,y,k,h,temp,w;
char a;
x=y=-1;
cin>>n;

for(i=0;i<n;i++){

//cout<<x<<" "<<y<<endl;
cin>>a;

if(a=='+'){
cin>>b>>c;

if(((b<=x)&&(c<=y))||((b<=y)&&(c<=x)))
continue;

else{
	
if(b>c){
temp=b;
b=c;
c=temp;}

x=max(x,b);
y=max(y,c);}}

else{

cin>>h>>w;

if(((x<=h)&&(y<=w))||((y<=h)&&(x<=w)))
cout<<"YES\n";

else
cout<<"NO\n";}}

return 0;}

