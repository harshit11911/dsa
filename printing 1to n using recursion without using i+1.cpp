#include <iostream>
using namespace std;

void f(int i,int n)
{
    
    if(n<i)
    {
    return;
    }
   
   f(i,n-1);
    cout<<n<<" ";
    
}

int main() {
	
	int n;
	cin>>n;

	f(1,n);
	return 0;
}
