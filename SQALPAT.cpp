#include <iostream>
using namespace std;

int main() {
	// your code goes here
	short n,c=1;
	std::cin >> n;
	
	for(short i=1;i<=n;i++)
	{
	    for(short j=5;j>=-3;j=j-2)
	    {
	        if(i%2!=0)
	        {
	            std::cout << c << " ";
	            
	        }
	        else
	        {
	            cout<< c-1+j <<" ";
	        }
	       c++; 
	    }
	    
	    cout<<endl;
	}
	return 0;
}
