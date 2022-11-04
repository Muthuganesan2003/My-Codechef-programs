/*TASK
Problem
Read problems statements in Mandarin Chinese, Russian and Vietnamese as well.
Yesterday, puppy Tuzik learned a magically efficient method to find the sum of the integers from 1 to N. He denotes it as sum(N). But today, as a true explorer, he defined his own new function: sum(D, N), which means the operation sum applied D times: the first time to N, and each subsequent time to the result of the previous operation.

For example, if D = 2 and N = 3, then sum(2, 3) equals to sum(sum(3)) = sum(1 + 2 + 3) = sum(6) = 21.

Tuzik wants to calculate some values of the sum(D, N) function. Will you help him with that?

Input
The first line contains a single integer T, the number of test cases. Each test case is described by a single line containing two integers D and N.

Output
For each testcase, output one integer on a separate line.

Constraints
1 ≤ T ≤ 16
1 ≤ D, N ≤ 4
Sample 1:
Input
Output
2
1 4
2 3
10
21
*/
#include <iostream>
using namespace std;
int sum(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum+=i;
    }
   return sum;
}
void sum(int d,int n){
    int a=d,b;
    b=sum(n);
    while(a!=1){
        b=sum(b);
        a--;
    }
    cout<<b<<endl;
}

int main() {
	int T;cin>>T;
	while(T--){
	   int d,n;
	   cin>>d>>n;
	   sum(d,n);
	}
	return 0;
}
