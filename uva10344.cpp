#include <bits/stdc++.h>
using namespace std;

vector<int> arr(5);
int flag(0);

bool solve(int o, int sum)
{
	if((o==5) && (sum==23))
		return true;
	else if((o==5) && (sum!=23))
		return false;
	// if(o == 1)
	// {
	// 	solve(o+1, arr[o-1]+arr[o]);
	// 	solve(o+1, arr[o-1]*arr[o]);
	// 	solve(o+1, arr[o-1]-arr[o]);
	// }
	// else
	
	return solve(o+1, sum+arr[o]) ||
		   solve(o+1, sum-arr[o]) ||
		   solve(o+1, sum*arr[o]);
	
	// solve(o+1, sum+(arr[o-1]+arr[o+1]));
	// solve(o+1, sum+(arr[o-1]-arr[o+1]));
	// solve(o+1, sum+(arr[o-1]*arr[o+1]));
	// solve(o+1, sum-(arr[o-1]-arr[o+1]));
	// solve(o+1, sum-(arr[o-1]+arr[o+1]));
	// solve(o+1, sum-(arr[o-1]*arr[o+1]));
	// solve(o+1, sum*(arr[o-1]+arr[o+1]));
	// solve(o+1, sum*(arr[o-1]-arr[o+1]));
	// solve(o+1, sum*(arr[o-1]*arr[o+1]));
}

int main(void)
{
	while(scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]))
	{
		if((arr[0]==0) && (arr[1]==0) && (arr[2]==0) && (arr[3]==0) && (arr[4]==0))
			break;
		sort(arr.begin(), arr.end());
		bool flag = false;
		do{
			flag = solve(1, arr[0]);
			if(flag)
				break;
		}while(next_permutation(arr.begin(), arr.end()));
		if(flag)
			cout << "Possible\n";
		else
			cout << "Impossible\n";
	}
	return 0;
}
