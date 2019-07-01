/*BINARY TO DECIMAL
Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format:
Constraints:
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42 */
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	long long m;
	int s=0,c=0,d;
		cin>>m;
		for(;m!=0;m=m/10)
		{
			d=m%10;
			if(d==1)
			{
              s+=pow(2.0,c);
			  c++; 
			}
			else
			c++;
		}
		cout<<s<<endl;
	
	return 0;
}