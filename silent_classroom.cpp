#include<bits/stdc++.h>
using namespace std;
int combination(int x){
    int r;
    r=(x*(x-1))/2;
    return r;
}
int main()
{
    int n,j,i,class1,class2,m,total=0,count=0;
    cin>>n;
    string ara[n];
    for(int p=0;p<n;p++){
        cin>>ara[p];
    }
    sort(ara,ara+n);
    char x=ara[0][0];
    for(i=0;i<n;i++){
        if(x!=ara[i][0]){
            class1=count/2;
            class2=count-class1;
            total+=combination(class1)+combination(class2);
            count=1;
            x=ara[i][0];
        }
        else{
            count++;
        }
    }
    class1 = count / 2;
    class2 = count - class1;
    total += combination(class1) + combination(class2);
    cout<<total;
}