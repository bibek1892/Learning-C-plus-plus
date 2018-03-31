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
					cout<<"The value of a and b are:"<<endl;
					cout<<"a="<<a<<"  b="<<b<<endl;
				}
			Complex	operator-(){
				Complex temp;
				temp.a=-a;
				temp.b=-b;
				return temp;
					
				}
				 				};
				int main(){
					int m,n;
					cout<<"enter the value for x:"<<endl;
			        cin>>m;
			        cout<<"enter the value of y:"<<endl;
			        cin>>n;
					Complex c1,c2;
					c1.setData(m,n);
					//c2=c1.operator-();//no argument get passed in it.
					c2=-c1;
					c1.showData();
					c2.showData();
				}
