#include <iostream>
using namespace std;

int main(){
	int foo = 0;
	int bar = 0;
	for(int i=1;i<=2000;i++){
		cout << i;
		if(i%50==0){ 
			cout << " FOO"; 
			foo++;
		}
		if(i%33==0){ 
			cout << " BAR"; 
			bar++;
		}
		cout << endl;
	}
	cout << "There were " << foo << " FOOs and " << bar << " BARs" << endl;
	char done;
	cin >> done;
}
