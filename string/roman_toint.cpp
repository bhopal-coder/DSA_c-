#include <iostream>
#include <string>
using namespace std;

class Program{
    private:
    int Roman(char c)
    {
        switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default:  return 0;
        }
    }
    public:
    int roman_int(string s)
    {
        int res=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            int currval=Roman(s[i]);
            if (i+1<n && currval<Roman(s[i+1]))
            {
                res-=currval;
            }
            else
            {
                res+=currval;
            }
        }
        return res;
    }

};
int main()
{
    Program p;
    cout<<p.roman_int("IV")<<endl;
    return 0;
}