#include<iostream>
using namespace std;

class Box{
	public:
		static int countObject;
		
		Box(int l, int b){
			
			cout<<"Constructor get called"<<endl;
			length=l;
			breadth=b;
			
			countObject++; //count when the object get created
			}
			
			int area(){
				return length*breadth;
			}
			
		static int getCount(){      //accessing member function when object isnot made
				return countObject;
			}
		private:
		int length,breadth;	
};

//Initialize the static member

int Box::countObject=0;

int main(){
	cout<<"Total number of object before creating the object:"<<Box::getCount()<<endl;

	Box box1(2,3);
	Box box2(3,4);
	Box box3(4,5);
cout<<"Total number of object after making the objects:"<<Box::countObject<<endl;
	return 0;
}

