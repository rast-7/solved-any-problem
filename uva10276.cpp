#include <bits/stdc++.h>
using namespace std;

bool is_square_number(int x)
{
	double sr = sqrt(x);
	return ((sr - floor(sr)) == 0);
}

int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, i(1), j(0);
		cin >> n;
		if((n % 10) == 0)
		{
			cout << "-1\n";
			continue;
		}
		vector< vector<int> > v(n);
		while(1)
		{
			int flag(0);
			for(int j=0; j<n; j++)
			{
				if((v[j].size() == 0) || (is_square_number(v[j][v[j].size()-1] + i)))
				{
					v[j].push_back(i);
					flag = 1;
				}
			}
			if(flag == 1)
				break;
		}
		cout << i << "\n";
	}
}
