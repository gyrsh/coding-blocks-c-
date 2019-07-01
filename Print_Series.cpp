/*PRINT SERIES
Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

Input Format:
Constraints:
0 < N1 < 100 0 < N2 < 100

Output Format
Sample Input
10 
4
Sample Output
5 
11 
14 
17 
23 
26 
29 
35 
38 
41 */
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,x,d=0;
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=(d+i);j<=1001;j++)
        {
            x=(3*j)+2;
            if(x%m!=0)
            {
               cout<<x<<endl;
               break;
            }
            else
            d++;
        }
	}
	return 0;
}