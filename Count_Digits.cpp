/*COUNT DIGITS
Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format:
Integer (A number) Integer (A digit)

Constraints:
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231 
3
Sample Output
3 */
#include<iostream>
using namespace std;
int count=0;
int value(int n,int b)
{
    if (n<=0)
    {
        return count;
    }
    else
    {
    int remain=n%10;
    n=n/10;
    if(remain==b)
        {
        count=count+1;
        }
    return value(n,b);
    }
}
int main() {
    int n,b;
    cin>>n;
    cin>>b;
    int res=value(n,b);
    cout<<res;
	return 0;
}