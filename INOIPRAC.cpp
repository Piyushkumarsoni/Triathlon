#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a,b,c,temp,sum,longest,max=0,min=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	     temp  = b + c;
        if (max < temp) {
           max = temp;
           longest = a + temp;
        }
        if ((min == 0) || (min > temp))
           min = temp;
        sum += a;
    }
    sum+= min;
    if (longest >= sum)
       cout<<longest;
    else
       cout<<sum;
	return 0;
	

}
