#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,i,y;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b;
        cout<<"case "<<i<<": ";
        vector<int> output;
        x=a-b;
        y=b+1;
        for(int j=y;j<=x;j++){
            if(x%j==0){
                output.push_back(j);
            }
        }
        if(output.empty()){
            cout<<"impossible";
        }
        else{
            for(int q=0;q<output.size();q++){
                if(q>0) cout<<" ";
                cout<<output[q];
            }
            cout<<"\n";
        }
    }
    return 0;
}