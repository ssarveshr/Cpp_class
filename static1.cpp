#include<iostream>
using namespace std;
class Box 
{ 
	private: 
	static int length; 
	static int breadth; 
	static int height; 
	
	public:
	
	static void print() 
	{ 
		cout << "The value of the length is: " << length<< endl; 
		cout << "The value of the breadth is: " << breadth<< endl; 
		cout << "The value of the height is: " << height << endl; 
	}
};

int Box :: length = 10; 
int Box :: breadth = 20; 
int Box :: height = 30; 

// Driver Code

int main() 
{
	
	Box b,C; 
	
	cout << "Static member function is called through Object name: \n" << endl; 
	C.print(); 
	
	cout << "\nStatic member function is called through Class name: \n" << endl; 
	Box ::print(); 
	
	return 0; 
}
