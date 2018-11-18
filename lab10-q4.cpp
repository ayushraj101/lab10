//

#include <iostream>
using namespace std;

class point
	{
		int x_cordinate, y_cordinate;
		public:
		void set_x(int x);//set function for x
		void set_y(int y);//set function for y
		int get_x(void);//display function for x
		int get_y(void);//desplay function for y
	};

void point:: set_x(int x)
	{
		x_cordinate = x;//setting x as x cordinate
	}
void point:: set_y(int y)
	{
		y_cordinate = y;//seting y as y cordinate 
	}
int point:: get_x()
	{
		return x_cordinate;//display value of x cordinate
	}
int point :: get_y()
	{//display value of y cordinate
		return y_cordinate;
	}

class rectangle //rectangle
	{
		private://private members
		void side(void)//length of side
			{
				int s1=p4.get_y()- p1.get_y();
				int s2=p4.get_x()- p3.get_x();
			}
		public://public members
		point p1;//points of rectange using peviously defined clas
		point p2;
		point p3;
		point p4;
		rectangle ()
			{
				p4.set_x(0);//defalt constructor for making a 1*1 rectange with all point in 1st quadrant and one point at (0,0) 
				p4.set_y(0);
				p3.set_x(1);
				p3.set_y(0);
				p2.set_x(1);
				p2.set_y(1);
				p1.set_x(0);
				p1.set_y(0);
			}
		rectangle (point x, point y)//constructor taking inputy cordinates of the rectange
			{
				p4 = x;//point4
				p2 = y;//point2
				p1.set_x(p4.get_x()) ;//set the value of points by makings the k=lines parallel
				p1.set_y(p2.get_y());
				p3.set_x(p2.get_x());
				p3.set_y(p4.get_y());
			}	
		void display (void)//printing the cordinate of the rectangle
			{
				cout<< "The cordinates of the rectangle is" << '('<<p1.get_x()<<","<<p1.get_y()<<')'<<'('<<p2.get_x()<<","<<p2.get_y()<<')'<<'('<<p3.get_x()<<","<<p3.get_y()<<')'<<'('<<p4.get_x()<<","<<p4.get_y()<<')'<<endl;
			}
		int area (void)//area
		{
			int ar = (p4.get_y()- p1.get_y())*(p4.get_x()- p3.get_x());//side * side
			return ar;
		}
	};

int main ()
	{
		int a, b, c, d;//integers for cordinate
		point p1, p2;//digonal points of rectangle
		cout<<"Enter the x and y cordinates of the left lower point of the rectange respectivly"<<endl;
		cin>> a;//taking p4 cordinate
		cin>> b;
		p2.set_x(a);//setting the cordinates
		p2.set_y(b);
		cout<<"Enter the x and y cordinates of the right upper point of the rectange respectivly"<<endl;
		cin >> c;//taking p2 cordinate
		cin >> d;
		p1.set_x(c);//setting the p1 value
		p1.set_y(d);
		rectangle rect(p1,p2);
		rect.display();
		if(rect.area()>0)
			{
				cout<< "Area of the rectangle is "<<(rect.area())<<endl;
			}
		else cout<< "Area of the rectangle is "<<-(rect.area())<<endl;//to keep area always positive
		return 0;
	}
	
	















