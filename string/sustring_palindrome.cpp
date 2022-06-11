#include<bits/stdc++.h>
const int N=1e5+5;
using namespace std;
string reverse(string s)
{
	string k;
	for(int i=s.length()-1;i>=0;i--)
		k+=s[i];
	return k;
}
int main()
{
	string s,sub[N];
	int n=0;
	cin>>s;       //abc
	for(int i=0;i<s.length();i++)
	{
		string v;
		for(int j=i;j<s.length();j++)
		{
			v+=s[j];
			sub[n]=v;
			n++;
		 }
	}
	for(int i=0;i<n;i++)
	{
		if(sub[i]==reverse(sub[i]))
			cout<<sub[i]<<endl;
	}
	return 0;		
}
