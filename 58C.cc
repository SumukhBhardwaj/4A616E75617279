#include<bits/stdc++.h>
using namespace std;

void sortbypair(long long  x[], long long   y[],long long  n){
	
    pair <long long,long long> pairs[n];
    for(long long  i = 0; i < n; ++i){
        pairs[i].first = y[i];
	pairs[i].second = x[i];}
	
    sort(pairs, pairs + n);
    for(long long i = 0; i < n; ++i){
        y[i] = pairs[i].first;
      x[i] = pairs[i].second;}}

const long long N=3e5;
long long a[N],ans[N],x[N],y[N],c[N],z[N];

int main(){

long long t,n,i,z1,z2,a,b,z3,z4,flag;

cin>>t;

while(t--){
a=b=c[0]=c[1]=flag=0;

z3=2e9;
z4=-2e9;

cin>>n;

for(i=0;i<n;i++){
cin>>x[i]>>y[i];
z[i]=i;}

sortbypair(z,x,n);

ans[z[0]]=1;
z1=x[0];
z2=y[z[0]];
b++;

for(i=1;i<(n);i++){
if((x[i]<=z2)&&(y[z[i]]>=z1)){
if(y[z[i]]>z2)
z2=y[z[i]];
ans[z[i]]=1;
b++;}

else{
ans[z[i]]=2;
a++;}}

if((a==0)||(b==0))
cout<<-1<<endl;

else{
for(i=0;i<n;i++)
cout<<ans[i]<<" ";
cout<<endl;}}

return 0;}

