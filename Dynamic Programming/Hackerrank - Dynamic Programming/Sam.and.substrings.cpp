/* Samantha and Sam are playing a game. They have 'N' balls in front of them, each ball numbered from 0 to 9, except the first ball which is numbered from 1 to 9. Samantha calculates all the sub-strings of the number thus formed, one by one. If the sub-string is S, Sam has to throw 'S' candies into an initially empty box. At the end of the game, Sam has to find out the total number of candies in the box, T. As T can be large, Samantha asks Sam to tell T % (109+7) instead. If Sam answers correctly, he can keep all the candies. Sam can't take all this Maths and asks for your help.

Help him!

Input Format 
A single line containing a string of numbers that appear on the first, second, third ball and so on.

Output Format 
A single line which is the number of candies in the box, T % (109+7)

Constraints 
1 = N = 2*105

Sample Input #00

16
Sample Output #00

23
Explanation #00

The substring of number 16 are 16, 1 and 6. Whose sum is 23.

Sample Input #01

123
Sample Output #01

164
Explanation #01

The sub-strings of 123 are 1, 2, 3, 12, 23, 123 which sums to 164.  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
#define mod (int)(1e9+7)
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string str;
    cin>>str;
    int num = str[0]-'0';
    int ans = num;
    for(int i=1;i<str.size();++i){
        num = ( (i+1)*(str[i]-'0') + (ll)num*10 )%mod;
        ans = ((ll)ans + num)%mod;
    }
    cout<<ans<<endl;
    return 0;
}
