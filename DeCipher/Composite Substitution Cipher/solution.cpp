#include <bits/stdc++.h>
using namespace std;
int find(char c)
{
    int res = c-65;
    return res;
}
int modInverse(int a, int m) 
{ 
    int m0 = m; 
    int y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        int q = a / m; 
        int t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 
int index(int k,int k1,int k2)
{
	int final = (k-k1)*k2;
	final = final%26;
	if(final < 0)
		final=26+final;
	return final;
}
char charAt(int n)
{
	char c = n+65;
	return c;
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	int k1,k2;
	cin>>k1>>k2;
	string res="";
	int inv=modInverse(k2,26);
	//cout<<inv<<" ";
	for(int i=0;i<s.length();i++)
	{
	    int k=find(s[i]);
	    int p=index(k,k1,inv);
	    res+=charAt(p);
	}
	cout<<res<<endl;
	return 0;
}

