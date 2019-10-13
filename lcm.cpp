#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b)
{
    int r,temp;
    
    long long int prod=a*b,lcm;
    if(b>a)
        {
            temp=b;
            b=a;
            a=temp;
        }
     while(r!=0)
        {
            r=a%b;
            a=b;
            b=r;
        }
    lcm=prod/r;
    return lcm;
    
}

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int lcm = gcd(a, b);
    
    cout << "LCM of " << a << " and " << b << " is " << lcm << endl;
    return 0;
}
