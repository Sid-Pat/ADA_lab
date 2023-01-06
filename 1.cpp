#include<bits/stdc++.h>
using namespace std;

int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

cout<<"-- Prime Numbers --"<<"\n";
cout<<"Please enter the number : ";
int n; cin>>n;
bool prime[n+1];

memset(prime,false,n+1);

for(int i=2;i*i<=n;i++){
    if(prime[i]==false){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=true;
        }
    }
}

cout<<"Prime Numbers from 2 to "<<n<<"\n"; 
for(int i=2;i<=n;i++){
    if(prime[i]==0){
        cout<<i<<" ";
    }
}

return 0; 
}