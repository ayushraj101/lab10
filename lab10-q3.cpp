//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

class rectangle 
	{
		double length, breath;   //dimentions    
		public:                   //public
		double area (double length, double breadth);//area
		double perimeter (double length, double breadth);//perimeter
		void setLength(double len);
		void setBreath (double bre);
	}
	
	double rectangle :: area (double length, double breadth)
		{
			return length * breath;
		}
	double rectangle :: perimeter (double length, double breadth)
		{
			return 2*length + 2*breath
		} 
	void rectange :: setLength (double len )
		{
			length = len;
		}
	void rectange :: setBreath(double bre)
		{
			breath = len; 
		}
	
	int main ()
		{
			double len1, bre1, len2, bre2;
			rectangle rect1;
			rectangle rect2;
			cout<<"Enter the length and breath of the 1st rectangle respevtively "<<endl;
			cin>> len1>>bre1;
			rect1.setLength(len1);
			rect1.setBreath(bre1);
			cout<<"Now enter the length and breath of the 2nd triangle respectively "<<endl;
			cin>>len2>>bre2;
			rect2.setLength (len2);
			rect2.setBreath (bre2);
			cout<<"The volume of the 1st and 2nd rectangle are "<<rect1.area()<<" "<<rect2.area()<<"respectively"<<endl;
			cout<< "The perimeter of the 1st and 2nd rectangle "<<rect1.perimeter()<<" "<<rect2.perimeter<<"respectively"<<endl;
			return 0;
		}
