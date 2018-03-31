#include<iostream>
using namespace std;
class Complex{
	private:
		int a,b;
		public:
			void setData(int x,int y){
				a=x;
				b=y;
			}
			void showData(){
				cout<<"a="<<a<<"  b="<<b<<endl<<endl;
				
			}
			 Complex operator+(Complex c){  //function name is replaced with + operator preceded with operator keyword.
			 	Complex temp;
			 	temp.a=a+c.a;
			 	temp.b=b+c.b;
			 	return temp;
				
			}
	};
	
	int main(){
		Complex c1,c2,c3;
		c1.setData(5,10);
		c2.setData(10,15);
		c1.showData();
		c2.showData();
		c3=c1+c2;
		c3.showData();
     //c3=c1+c2; + operator only add the two operand with the primitive type.
	 //Since,C1 and C2 object is non primitive compiler doesnot understand it so we have to define it
		return 0;
	}
