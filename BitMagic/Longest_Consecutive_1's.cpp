https://practice.geeksforgeeks.org/problems/longest-consecutive-1s-1587115620/0/?track=DSASP-BitMagic&batchId=154#

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count = 0;
        while (N != 0)
        {
            N = (N & (N << 1));
            count++;
        }
        return count;
    }
};

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
} 
