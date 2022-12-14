/*TASK
Problem
Chef is currently standing at stair 00 and he wants to reach stair numbered XX.

Chef can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers XX and YY denoting the number of stair Chef wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered XX.

Constraints
1 \leq T \leq 5001≤T≤500
1 \leq X, Y \leq 1001≤X,Y≤100
Sample 1:
Input
Output
4
4 2
8 3
3 4
2 1
2
4
3
2
Explanation:
Test case 1: Chef can make 2 moves and climb 2 steps in each move to reach stair numbered 4.

Test case 2: Chef can make a minimum of 4 moves. He can climb 3 steps in 2 of those moves and 1 step each in remaining 2 moves to reach stair numbered 8.

Test case 3: Chef can make 3 moves and climb 1 step in each move to reach stair numbered 3.

Test case 4: Chef can make 2 moves and climb 1 step in each move to reach stair numbered 2.
*/
#include <iostream>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int a,b;
	    cin>>a>>b;
	    if(a%b==0)cout<<a/b<<endl;
	    else if(a%b==a)cout<<a<<endl;
	    else{
	        cout<<(a/b)+(a%b)<<endl;
	    }
	    
	    
	}
	return 0;
}
