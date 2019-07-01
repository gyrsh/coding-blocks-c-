/*PRINT REVERSE
Take N as input, Calculate it's reverse also Print the reverse.

Input Format:
Constraints:
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321 */
#include<iostream>
using namespace std;
int main() {
	long long n,d,r=0;
	cin>>n;
	for(long long i=n;i!=0;i=i/10)
	{
       d=i%10;
	   r=(r*10)+d;
	}
	cout<<r;
	return 0;
}