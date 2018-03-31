#include <iostream> 
using namespace std;
class Integer{
	private:
		int x;
		public:
			void setData(int a){
				x=a;
				}
				void showData(){
					cout<<" x= "<<x<<endl;
				}
				 Integer operator++(){  //pre increment is done
				 	Integer temp;
				 	temp.x=++x;
				 	return temp;
				 }
//				 Integer operator++(int){  //due to same prototype of function,int is passed as an argument //POST INCREMENT IS DONE 
//				 Integer temp;
//				 temp.x=x++;
//				 return temp; 
//				 	
//				 }
};
int main(){
	int x;
	cout<<"Enter the value for x:"<<endl;
	cin>>x;
	cout<<endl<<endl;
	Integer i1,i2;
	i1.setData(x);
	cout<<"Before Increment:"<<endl;
	i1.showData();
	cout<<endl<<endl;
	i2=++i1;
	//i2=i1++;            // i2=i1.operator++(); //POST INCREMENT
    //i1.showData();
	//cout<<endl<<endl;
	cout<<"After Increment:"<<endl<<endl;
	i2.showData();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;		
	cout<<"THANK YOU";
	
	return 0;
}
