#include<iostream>
using namespace std;

class Box{
	
	public:
		static int objectCount;
		
		Box(int l,int b, int h){
			cout<<"Constructor called"<<endl;
			length=l;
			breadth=b;
			height=h;
			//Increase every time when object get created
			objectCount++;
		}
		private:
			int length,breadth,height;
			
};

//Initialize the static member of class Box
int Box:: objectCount=0;

int main(void){
	Box Box1(1,2,3);
	Box Box2(4,5,6);
	//two boxes are declared
	
	cout<<"Total number of objects:"<<Box::objectCount<<endl;
	return 0;
	}

