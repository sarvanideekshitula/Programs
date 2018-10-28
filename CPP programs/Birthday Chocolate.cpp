#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, i, count=0, m, p, d, count1 = 0;
	cin>>n;
	vector<long long int>a;
	for(i=0; i<n; i++){
		cin>>p;
		a.push_back(p);
	}
	cin>>d>>m;
	i=0;
	while(i<n){
		long long int sum = 0;
		for(int j=i; j<i+m; j++){
			if(j>n){
				count = 1;
				break;
			}
			sum  = sum + a[j];
		}
		if(count == 1){
			break;
		}
		else{
			if(sum == d){
				count1 = count1 + 1;
			}
		}
		i = i + 1;
	}
	cout<<count1<<endl;
	return 0;
}
