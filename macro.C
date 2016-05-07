#include <iostream>

#ifdef __CINT__
int macro(){
#else
int main(){
#endif

	using namespace std;
	cout << "Hello,root!!" << endl;


	return 0;
}
