#include <iostream>
using namespace std;
 
 class complex{
 	    public:
 	    	char name[20];
 	    	int age;
 	    	
 				//Default Constructor
 		complex(){
 			cout<<"Enter the player name"<<endl;
 			cin>>name;
 			cout<<"Enter age"<<endl;
 			cin>>age;
 
 			
		 }
 			
 			
		 
 };
 
 int main(){
 	complex c1,c2;  //objects c1 and c2  are made
 cout<<"Name="<<endl;cout<<c1.name<<endl;cout<<c2.name<<endl;
 cout<<"Age="<<endl;cout<<c1.age<<endl;cout<<c2.age<<endl;
 	return 0;
 	
 }
