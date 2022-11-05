/*TASK
Problem
Karan likes the number 4 very much.

Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input
The first line of input consists of a single integer T, denoting the number of integers in Karan's list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the respective integer from Karan's list.

Constraints
1 ≤ T ≤ 10^5
(Subtask 1): 0 ≤ Numbers from the list ≤ 9 - 33 points.
(Subtask 2): 0 ≤ Numbers from the list ≤ 109 - 67 points.
Example
Input:
5
447474
228
6664
40
81
Output:
4
0
1
1
0
*/
#include <iostream>
#include <sstream>  
#include <string> 
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	 
	    
    int a,i,c=0;cin>>a;
    ostringstream str1;
    str1 << a;
    string  b = str1.str();
	   for(i=0;i<b.size();i++){
	       if(b[i]=='4')c+=1;
	   }
	      cout<<c<<endl;
	}
	  
	return 0;
}
