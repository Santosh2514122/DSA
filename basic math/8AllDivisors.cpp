/*#include <iostream>
#include <cmath>
using namespace std;

class GFG {
public:
    static void printFactors(int n) {
        int i;
        for (i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                cout << i << " ";
            }
        }
        for (; i > 1;) {
            i--;
            if (i != n / i && n % i == 0)
                cout << n / i << " ";
        }
    }
};

int main() {
    GFG gfg;
    int n;
    cin >> n;

    gfg.printFactors(n);

    return 0;
}*/

/*#include <iostream>
#include <limits.h>
using namespace std;

 void printDivisors(int n)
{
	for(int i=1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";

        
			if(i != (n / i))
				cout<<(n / i)<<" ";					
		}
	}
}

int main() {
    
    	int n ;
    	cout<<"enter the number:";
    	printDivisors(n);
    	cout<<printDivisors/;
    	return 0;
}*/

#include <iostream>
#include <limits.h>
using namespace std;

 void printDivisors(int n)
{
	for(int i=1; i*i <= n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";

        
			if(i != (n / i))
				cout<<(n / i)<<" ";					
		}
	}
}
int main() {
    
    	int n ;
    	cout<<"enter the number:";
        cin>>n;
    	printDivisors(n);
    	
    	return 0;
}