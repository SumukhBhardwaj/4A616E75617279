#include<bits/stdc++.h>
using namespace std;

char s[800000];

int main(){

long long i,z1=-1,z2=-1,z3=-1,z4=-1,k,ans=0;

cin>>s;

k=strlen(s);

for(i=0;i<k;i++){
if(s[i]=='['){
z1=i;break;}}

for(i=k-1;i>=0;i--){
if(s[i]==']'){
z2=i;break;}}

if((z2<=z1)||(z1==-1)||(z2==-1)){
cout<<-1<<endl;
return 0;}


for(i=z1;i<=z2;i++){
if(s[i]==':'){
z3=i;break;}}

for(i=z2;i>=z1;i--){
if(s[i]==':'){
z4=i;break;}}

if((z4<=z3)||(z3==-1)||(z4==-1)){
cout<<-1<<endl;
return 0;}	

for(i=z3;i<=z4;i++)
if(s[i]=='|')
ans++;
	
cout<<(ans+4)<<endl;

return 0;}



		



