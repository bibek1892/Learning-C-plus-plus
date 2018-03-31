#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
	public:
		Complex(){
			cout<<" Default constructor get invoke..."<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"____________________________________________"<<endl;;
		}
		Complex(int x,int y){
			a=x;
			b=y;
			cout<<"Nepal="<<a<<endl;
			cout<<"US="<<b<<endl;
			cout<<"It is parameterized constructor...";
			cout<<endl;
			cout<<endl;
			cout<<"_____________________________________________"<<endl;;
		}
		Complex(Complex &c){
			a=c.a;
			b=c.b;
			cout<<"Nepal="<<a<<endl;
			cout<<"US="<<b<<endl;
			cout<<"It is the copy constructor...";
			cout<<endl;
			cout<<endl;
			cout<<"______________________________________________"<<endl;
	}
		
};

int main(){
	Complex c1;
	Complex c2(100,911);
	Complex c3(c2);
	return 0;
}
