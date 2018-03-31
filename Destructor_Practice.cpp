#include <iostream>
using namespace std;

class Complex{

		public:
			
			~Complex(){
				cout<<"Destructor has been called in the class"<<endl;
				}
				
				void fun(){
					Complex obj;
				}
};
int main(){
	void fun();
	return 0;
}
