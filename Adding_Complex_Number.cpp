#include<iostream>
using namespace std;
 
 class Complex {
 	int a,b;
 	public:
 		set_data(int x, int y)
 		{
 			int a=x;
 			int b=y;
 			
		 }
		 show_data(){
		 	cout<<"a="<<a<<"b="<<b<<endl;
		
		 }
		 Complex add(Complex c){
		 	Complex temp;
		 	temp.a=a+c.a;
		 	temp.b=b+c.b;
		 	return (temp);
		 	};
	
 };
   int main()
    {
 
 Complex c1,c2,c3; /*objects are created by class Complex */
 c1.set_data(1,1);
 c2.set_data(1,1);
 c3=c1.add(c2);
 c3.show_data();
 return 0;
 
 
 }
