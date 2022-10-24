//--------------------------------------O(N)---------------------------------------------
#include<iostream>
using namespace std;

void printDivisorsBruteForce(int n){

	cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";
	
	cout << "\n";
}

	
int main(){
		
	printDivisorsBruteForce(36);
	
return 0;
}
//-------------------------------------0(sqrt(N))----------------------------------------
//sqrt because for 36 ans was 1 2 3 4 6 9 12 18 36 and 6 is perfect square root....
#include<iostream>
#include<cmath>
using namespace std;

void printDivisorsOptimal(int n){
    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
            //for perfect square root 6 rem and 6 quot
			if(i != n/i) cout << n/i << " ";
		}
	
	cout << "\n";
}

int main(){
	printDivisorsOptimal(36);
        return 0;
}