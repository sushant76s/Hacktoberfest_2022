//boss->secretry->employee (intermediator concept)
//1.Extra function call for setData.
//#include<iostream>
//using namespace std;
//
//class A
//{ 
//  private:
//     int age;
//public:
//     void setData( int x=0)
//      {
//	  age = x; 
//	  }
//     int getData() 
//	 { 
//	 return age; 
//	 }
//
//};
//int main()
//    {
//      A a_obj;
//      a_obj.setData(78);
//	  cout <<a_obj.getData();
//	}
//      
//boss->->employee (NO intermediator concept)
//need of constructor -> No extra function call
#include<iostream>
using namespace std;

class A
{ 
  private:
     int age;
public:
     A( int x)   //constructor ,same name as class & don't return nothing
      {
	  age = x; 
	  }
     int getData() 
	 { 
	 return age; 
	 }

};
int main()
    {
      A a_obj(78);
      cout <<a_obj.getData();
	}

