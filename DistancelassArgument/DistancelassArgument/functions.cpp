#include <iostream>
using namespace std;

class Distance
{
private:
	int feet;
	float inches;
	static int count;//every object share this variable 
public:
	Distance() :feet(0), inches(0) { count++; }
	Distance(int ft, float in) :feet(ft), inches(in) { count++; }

	void setDist(int f, float i)
	{
		feet = f;
		inches  =i;
	}
	void getDist()
	{
		cout << "\nEnter feet: ";
		cin >> feet;
		cout << "\nEnter inches: ";
		cin >> inches;

	}
	void showDist()
	{
		cout << "feet: " << feet << " and inches: " << inches << endl;
	}
	int getCount()
	{
		return count;
	}
	void add_dist(Distance d1, Distance d2);
	Distance add_dist_tome(Distance d1);
	
};
int Distance::count = 0;//share variable 
void showCurrentCount(Distance d1);
int main()
{
	Distance d1, d2(1,15);
	d1.showDist();
	d2.showDist();
	Distance d3(2, 4), d4;
	d4.add_dist(d2, d3);
	d3.showDist();
	d4.showDist();
	d4.add_dist_tome(d2);
	d4.showDist();
	cout << "the count is " << d4.getCount() << endl;
	showCurrentCount(d4);





	system("pause");//REMOVE BEFORE SUBMIT
	return 0;
}
void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d2.inches + d1.inches;
	feet = 0; 
	if (inches >= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
	feet += d2.feet + d1.feet;
}
Distance Distance::add_dist_tome(Distance d1)
{
	Distance temp;
	temp.inches = inches + d1.inches;
	if (temp.inches >= 12)
	{
		temp.inches -= 12.0;
		temp.feet++;
	}
	temp.feet = feet + d1.feet;
	return temp;
}
void showCurrentCount(Distance d1)
{
	cout << " the current count in my super class is " << d1.getCount() << endl;
}