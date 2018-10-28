#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	vector<string>a;
	long long int j, b[5], count = 0;
	a.push_back("Danil");
	a.push_back("Olya");
	a.push_back("Slava");
	a.push_back("Ann");
	a.push_back("Nikita");
	for(j=0; j<5; j++){
		size_t nPos = s.find(a[j], 0); // fist occurrence
        while(nPos != string::npos)
        {
            count++;
            nPos = s.find(a[j], nPos+1);
        }
	}
	if(count == 1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
