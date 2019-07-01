/*CHECK PRIME
Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format:
Constraints:
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;
    cin>>p;
    if(p==2){
        cout<<"Prime"<<"\n";
    }
    else if(p==3){
        cout<<"Prime"<<"\n";
    }
    else{
        int val=1;
        for(int i=2;i<=floor(sqrt(p));i++)
        {
            if(p%i==0)
            {
                val=0;
                break;
            }
        }
        if(val==1){
           cout<<"Prime"<<"\n"; 
        }
        else{
            cout<<"Not Prime"<<"\n";
        }
    }
}