https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/0/?track=DSASP-BitMagic&batchId=154

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
  
    int CountSetBits(int n )
    {
        int count = 0 ;
        while(n > 0)
        {
            count += 1 ;
            n = n & (n-1) ;
        }
        return count ;
    }
    int countBitsFlip(int a, int b)
    {
      return CountSetBits(a ^ b) ;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		int a,b;
		cin>>a>>b; 

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  
