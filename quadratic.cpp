#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long d=(pow(b,2)-(4*a*c));
    if (d<0){
        cout<<"Imaginary"<<"\n";
    }
    else{
        long long value1=(-b+sqrt(d))/(2*a);
        long long value2=(-b-sqrt(d))/(2*a);
        if(value1==value2){
            cout<<"Real and Equal"<<"\n";
            cout<<value1<<" "<<value2;
        }
        else{
            cout<<"Real and Distinct"<<"\n";
            cout<<value2<<" "<<value1;
        }
    }
}