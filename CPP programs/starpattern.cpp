#include <bits/stdc++.h>
using namespace std;

int main() {
     long long int n, i,k;
     cin>>n;
     long long int j=(n + 1)/2, l, f, r;
     for(i=1, k = n-1, f=0; i<=n, k>=0, f<n; i++, k--, f++){
          if(i<=j){
               r = (2*f)+1;
          }
          else{
               r= (2*k)+1;
          }
          l= (n-r)/2;
          cout<<setfill(' ')<<setw(l)<<""<<setfill('*')<<setw(r)<<""<<setfill(' ')<<setw(l)<<""<<endl;
     }
	// your code goes here
	return 0;
}
