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
                vector< vector<int> > v(n);
                while(1)
                {
                        int flag(0), j(0);
                        while(1)
                        {
                            if((v[j].size() == 0) || (is_square_number(v[j][v[j].size()-1] + i)))
                            {
                                    v[j].push_back(i);
                                    flag = 1;
                                    i++;
                                    j = 0;
                                    break;
                            }
                            j = (j+1)%(n);
                            if((j == 0) && (flag == 0))
                        		break;
                        }
                        if(flag == 0)
                                break;
                               
                }
                cout << i-1 << "\n";
        }
}

