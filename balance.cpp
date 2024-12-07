#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,total,half1,half2,difference,flag=1,ans;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++){
        cin>>ara[i];
    }
    total=accumulate(ara,ara+n,0);
    for(x=0;x<n;x++){
        half1=accumulate(ara,ara+x,0);
        half2=total-half1;
        difference=abs(half1-half2);
        if(flag==1){
            ans=difference;
            flag=0;
        }
        else{
            if(difference<ans){
                ans=difference;
            }
        }
    }
    cout<<ans;
}