// Find First set bit ......................................

/* Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
Note: If there is no set bit in the integer N, then return 0 from the function */

// https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1/?track=DSASP-BitMagic&batchId=154 //


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    
    unsigned int getFirstSetBit(int n)
    { 
       int p =  1 ;
       while ( n > 0)
        {
            if (n & 1 == 1)
                return p ;
            else
                p = p + 1 ;
                n = n >> 1 ;
        }
        return 0 ;
    }
};

int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        int n;
        cin>>n; //input n
        Solution ob;
        printf("%u\n", ob.getFirstSetBit(n)); 
    }
	return 0;
}
