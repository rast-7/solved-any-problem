#include <bits/stdc++.h>
using namespace std;

char m[8][8];
string allowed = "IEHOVA#";
int R, C;
int flag = 0;

void next_step(int r, int c)
{
  if(r < 0 || r > R || c < 0 || c > C || flag == 1)
    return;
  if(m[r][c] == '#')
  {
  	m[r][c] = '.';
    flag = 1;
    return;
  }
  if(allowed.find(m[r][c-1]) != string::npos)
  {
    cout << "left ";
    m[r][c] = '.';
    next_step(r, c-1);
  }
  else if(allowed.find(m[r][c+1]) != string::npos)
  {
    cout << "right ";
    m[r][c] = '.';
    next_step(r, c+1);
  }
  else if(allowed.find(m[r-1][c]) != string::npos)
  {
    cout << "forth ";
    m[r][c] = '.';
    next_step(r-1, c);
  }
  return;
}

int main(void)
{
  int t, sr, sc;
  cin >> t;
  while(t--)
  {
    cin >> R >> C;
    for(int i = 0; i < R; i++)
    {
      for(int j = 0; j < C; j++)
      {
        cin >> m[i][j];
		if(m[i][j] == '@')
		{
		  sr = i;
  		  sc = j;
		}
      }
    }
    flag = 0;
    next_step(sr, sc);
    cout << "\n";
  }
  return 0;
}

