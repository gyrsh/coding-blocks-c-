/*DECIMAL TO OCTAL
Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int t=0,i=0;
    while(t<n)
    {
        t=pow(8,i+1);
        i++;
    }
    int r=1;
    int value=0;
    i=i-1;
    while(i>=0){
        r=pow(8,i);
        int q=n/r;
        int remain = n%r;
        n=remain;
        value=value*10+q;
        i--;
    }
    cout<<value;
}