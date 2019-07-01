/*REVISING QUADRATIC EQUATIONS
Given coefficients of a quadratic equation , you need to print the nature of the roots (real and distinct , real and equal , imaginary).

Input Format:
First contains three coefficients a,b,c from the equation ax^2 + bx + c = 0.

Constraints:
-100 <= a, b, c <= 100

Output Format
Output contains one/two lines.First line contains nature of the roots .The next line contains roots separated by a space if they exist. If roots are imaginary do not print the roots.

Sample Input
1 -11 28
Sample Output
Real and Distinct
4 7 */
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,count=0;
	cin>>n;
	int l=n;
	int a[100];
	while(n>0){
	    int remain=n%10;
	    a[count]=remain;
	    count++;
	    n=n/10;
	}
	int i=0,sum=0;
	while(i<count){
	    int t=pow(a[i],count);
	    sum=sum+t;
	    i++;
	}
	if(sum==l){
	    cout<<"true";
	}
	else{
	    cout<<"false";
	}
}