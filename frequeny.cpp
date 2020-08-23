#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector <int> frequency(n);
	vector <int> arr(n);
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
		frequency[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		int count(1);
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				frequency[j]=0;
			}

		}
		if(frequency[i]!=0)
		{
			frequency[i]=count;
		}
	}

	for(int i=0;i<n;i++)
	{
		if(frequency[i]!=0)
		{
			cout<<frequency[i]<<endl;
		}
	}
	return 0;


}