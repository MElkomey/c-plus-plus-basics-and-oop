#include <iostream>
#include <string>
using namespace std;
//abstract class
class Shape{
	private:
		string color;
	public:
	virtual	void draw()=0;
	virtual	void erase()=0;
	virtual	void get_area()=0;
	virtual void finl() final
	{
		cout<<"This is Shape You cant edit this message because it is final and you cant override it";
	}
}; 

class Rectangle:public Shape
 {
	
	private:
		int lenght;
		int width;
	public:
	Rectangle(int l,int w):lenght(l),width(w){}
	void draw(){
		cout<<"rectangle draw\n";
	}
	void erase(){
		cout<<"rectangle erased\n";
	}
	void get_area(){
		cout<< "rectangle area ="<< lenght*width<<"\n";
	}
		
};

class Circle:public Shape{
	private:
		int radius;
	public:
	Circle(int r):radius(r){}
	void draw(){
		cout<<"circle draw\n";
	}
	void erase(){
		cout<<"circle erased\n";
	}
	void get_area(){
		cout<< "circle area ="<< 3.14*radius<<"\n";
	}
		
};
int main() {
//	Shape s;   first error in abstract class you can't take ant objects
	Rectangle rec(10,20);
	Circle circ(5);
	// pointer for all objects of shape or rectangle or circle
	//to call a function of object of any overrided virtual object we us pointer_name and ->  not .
	Shape* shap_ptr;
	shap_ptr=&rec;
	shap_ptr->draw();
	shap_ptr->get_area();
	shap_ptr->erase();
	
	shap_ptr=&circ;
	shap_ptr->draw();
	shap_ptr->get_area();
	shap_ptr->erase();
	
	
	
	
	return 0;
}
