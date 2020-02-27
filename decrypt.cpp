#include<iostream>
#include<string>
usin namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int key=int(s[n-1])*10+int(s[n-2]);
	int arr[n-2];
	cout<<"The Decrypted Message Is: /n";
	for(int i=0;i<n-2;i++)
	{
		arr[i]=int(s[i])+key;
		cout<<arr[i];
	}
}
