#include <iostream>
#include<vector>
using namespace std;
void output(vector<string> v)
{
  for(int a=0;a<v.size();a++)
  {
    cout<<v[a]<<" ";
  }
}
void check(string s)
{
  vector<string> v;
  int a=0,b=0;
  while(a<s.size())
  {
    string s1="";
    while(s[b]!=' ' && s[b]!='\0')
    {
      b++;
    }
    while(a<b)
    {
      if(s[a]>=65 && s[a]<=91)
      {
        s[a]=s[a]+32;
      }
      else
      {
         s[a]=s[a]-32;
      }
      s1+=s[a];
      a++;
    }
    v.push_back(s1);
    b+=1;
    a=b;
  }
  output(v);
}

int main() 
{
    string s="DeaR Is WilD AniMal";
    check(s);
    return 0;
}
