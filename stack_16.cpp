#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> find(int arr[],int n,int k)
{
    int j=0,i=0;
    deque<int>l;
    vector<int>v;
    while(i<n)
    {
        if(arr[i]<0)
        {
            l.push_back(arr[i]);
        }
        if(i-j+1<k)
        {
            i++;
        }
        else if(i-j+1==k)
        {
            if(l.size()==0)
            {
                v.push_back(0);
            }
            else
            {
                v.push_back(l.front());
                if(arr[j]==l.front())
                {
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
    return v;
}


int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int k;
	    cin>>k;
	    vector<int>v;
	    v=find(arr,n,k);
	    for(int i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
