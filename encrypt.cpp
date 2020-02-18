#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<time.h>
using namespace std;
int main()
{
	srand(time(NULL));	//avoid generation of same keys
	int key=rand()%20+10;
	string s;
	getline(cin,s);
	int n=s.length();
	char sarr[n+1];
	strcpy(sarr,s.c_str());
	char keykar=key;
	for(int i=0;i<n;i++)
	{
		sarr[i]=int(sarr[i])-key;
		cout<<sarr[i];
	}
	cout<<key<<endl;
}
