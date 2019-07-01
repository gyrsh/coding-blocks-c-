/*VON NEUMAN LOVES BINARY
Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.

Input Format:
The first line contains N , the number of binary numbers. Next N lines contain N integers each representing binary represenation of number.

Constraints:
N<=1000 Digits in binary representation is <=16.

Output Format
N lines,each containing a decimal equivalent of the binary number.

Sample Input
4
101
1111
00110
111111
Sample Output
5
15
6
63*/
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
	int n,m,d;
	cin>>n;
	while(n--)
	{int s=0,c=0;
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
	}
	return 0;
}