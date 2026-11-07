// You are given a string s consisting of lowercase English letters from 'a' to 'j'.

// A substring is considered valid if at most one character occurs an odd number of times in that substring.

// Return the total number of valid substrings in s.

// A substring is a contiguous, non-empty sequence of characters within a string.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string s="aba";
    // (1024,0) means as characters are from a-j has 10 chract with 2 possibilities odd and even so 2^10, 0 is initial frequency.
    vector<int> counts(1024,0);
    counts[0]=1;
    long long total_substr=0;
    int curr=0;
    for (char c:s)
    {
        // Flip the bit corresponding to the current character ('a' -> 0, 'b' -> 1, ..., 'j' -> 9)
      curr^=(1<<(c-'a'));
      total_substr+=counts[curr];
    //   Count substrings where EXACTLY ONE character appears an ODD number of times
      for(int i=0;i<10;i++)
      {
        int temp=curr^(1<<i);
        total_substr+=counts[temp];
      }
      counts[curr]++;
    }
    cout<<total_substr;
    return 0;
}