#include<bits/stdc++.h>
using namespace std;
int is_prime(long long n);
int main()
{
    int t;
    long long a,b,x,i;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a-b==1){
            x=a+b;
            i=is_prime(x);
            if(i){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}
int is_prime(long long n){
    if(n==3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (long long i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}