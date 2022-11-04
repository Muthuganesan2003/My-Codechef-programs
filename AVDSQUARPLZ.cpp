/*TASK
Problem
You are given an integer NN.

Print a permutation PP of [1,2, \ldots, N][1,2,…,N] such that the following condition holds:

For any index i\ (1 \leq i \lt N)i (1≤i<N), P_i \times P_{i+1}P 
i
​
 ×P 
i+1
​
  is not a perfect square.
If there are multiple correct answers, you may print any of them.

Note: A permutation of [1, 2, \ldots, N][1,2,…,N] is a rearrangement of those numbers.

Input Format
The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains an integer NN - the length of the required permutation.
Output Format
For each test case, print NN space-separated integers representing the valid permutation on a single line.

If there are multiple correct answers, you may print any of them.

Constraints
1 \leq T \leq 5001≤T≤500
2 \leq N \leq 5002≤N≤500
Sample 1:
Input
Output
3
2
3
4
2 1
3 1 2
4 2 3 1
Explanation:
Test case 1: 2\times 1 = 2×1=2 is not a perfect square. Note that [1, 2] is also a valid answer for this case, and will be accepted.

Test case 2: 3\times 1 = 3×1=3 and 1\times 2 = 1×2=2 are not perfect squares.

Test case 3: 4\times 2 = 8, 2\times 3 = 6, 3\times 1 = 34×2=8,2×3=6,3×1=3 are all not perfect squares.
*/
#include <iostream>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,i;cin>>n;
	    for(i=1;i<=n;i++){
	        cout<<i<<" ";
	    }cout<<endl;
	}
	return 0;
}
