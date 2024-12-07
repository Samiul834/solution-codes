#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    string input;
    cin>>input;
    a = stoi(input.substr(0, 2));
    b = stoi(input.substr(2, 2));
    if(a>13&&b>13){
        cout<<"NA";
    }
    else if(a==0&&b==0){
        cout<<"NA";
    }
    else if(a==0){
        if(b<13){
            cout<<"YYMM";
        }
        else{
            cout<<"NA";
        }
    }
    else if(b==0){
        if(a<13){
            cout<<"MMYY";
        }
        else{
            cout<<"NA";
        }
    }
    else{
        if(a<13&&b<13){
            cout<<"AMBIGUOUS";
        }
        else if(a<13){
            cout<<"MMYY";
        }
        else{
            cout<<"YYMM";
        }
    }
    return 0;
}