#include<iostream>
using namespace std;

int main()
{
	char circle,rectangle,trapezium,traingle,rhombus,parallelogram,square;
	double area,perimeter,circumference;
	double a,b,c,d,base,height,length,width;
	double radius,diameter;
	const double pie=22/7||3.142;
	double side;
	
	cout<<"select the shape you would like to calculate:";
	string option;
	cin>>option;
	
	if(option=="circle")
	{
			
	cout<<"would you like to calculate area or circumference of the selected shape:"<<endl;
	string option;
	cin>>option;
	
	if(option=="area")
	{
	  cout<<"enter the radius:";
	  cin>>radius;
	
	  area=pie*radius*radius;
	  cout<<"the area is:"<<area<<endl;
	}
	
	else if(option=="circumference")
	{
	   cout<<"which pie would you like 3.142 or 22/7:"<<endl;
	   string option;
	   cin>>option;
	   
	   if(option=="3.142")
	   {
         cout<<"enter the radius:";
         cin>>radius;
         
		 double circumference=2*pie*radius;
		 cout<<"circumference is:"<<circumference;	   	
	   }
	   else if(option=="22/7")
	   {
	   	 cout<<"enter the diameter:"<<endl;
	   	 cin>>diameter;
	   	 double circumference=pie*diameter;
	   	 cout<<"circumference is:"<<circumference;
	   }
	   return 0;
	}
		else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
	else if (option=="rectangle")
	{
	cout<<"would you like to calculate area or perimeter of your selected polygon:"<<endl;
	string option;
	cin>>option;
	if(option=="area")
	{
	   cout<<"enter the width:"<<endl;
	   cin>>width;
	   cout<<"enter the length:"<<endl;
	   cin>>length;
	
	   area=width*length;
	   cout<<"the area is:"<<area;
    }
    
    else if(option=="perimeter")
    {
    	cout<<"enter the width:"<<endl;
    	cin>>width;
    	cout<<"enter the length:"<<endl;
    	cin>>length;
    	
    	perimeter=2*(length+width);
    	cout<<"the perimeter is:"<<perimeter<<endl;
	}
	else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
	else if(option=="rhombus")
	{
			cout<<"would you like to calculate area or perimeter of the selected shapes:"<<endl;
	string option;
	cin>>option;
	if(option=="area")
	{
	  cout<<"enter the base:";
	  cin>>base;
	  cout<<"enter the height:";
	  cin>>height;
	
	  area=base*height;
	  cout<<"the area is:"<<area;
	}
	
	else if(option=="perimeter")
	{
		cout<<"enter the length of one side:"<<endl;
		cin>>side;
		
		perimeter=4*side;
		cout<<"the perimeter is:"<<perimeter;
		
	}
		else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
	else if(option=="parallelogram")
	{
			cout<<"would you like to calculate area or perimeter of the selected shapes:"<<endl;
	string option;
	cin>>option;
	
	if(option=="area")
	{
	  cout<<"enter the base:";
	  cin>>base;
	  cout<<"enter the height:";
	  cin>>height;
	
	  area=base*height;
	  cout<<"the area is:"<<area;
	}
	else if(option=="perimeter")
	{
		cout<<"enter the length:"<<endl;
		cin>>length;
		cout<<"enter the width:"<<endl;
		cin>>width;
		
		perimeter=2*(length+width);
		cout<<"the perimeter is:"<<perimeter;
	}
		else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
	else if(option=="triangle")
	{
			cout<<"would you like to calculate area or perimeter of the selected shapes:"<<endl;
	string option;
	cin>>option;
	if(option=="area")
	{
	  cout<<"enter the base:";
	  cin>>base;
	  cout<<"enter the height:";
	  cin>>height;
	
	  area=(base*height)/2;
	  cout<<"the area is:"<<area<<endl;
	}
	else if(option=="perimeter")
	{
		cout<<"enter the measurement of one side:"<<endl;
		cin>>side;
		
		perimeter=3*side;
		cout<<"the perimeter is:"<<perimeter<<endl;
	}
		else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
	else if(option=="square")
	{
			cout<<"would you like to calculate area or perimeter of your selected polygon:"<<endl;
	string option;
	cin>>option;
	if(option=="area")
	{
	   cout<<"enter the width:"<<endl;
	   cin>>width;
	   cout<<"enter the length:"<<endl;
	   cin>>length;
	
	   area=width*length;
	   cout<<"the area is:"<<area;
    }
    
    else if(option=="perimeter")
    {
    	cout<<"enter the measurement of the side:";
    	cin>>side;
    	perimeter=4*side;
    	cout<<"the perimeter is:"<<perimeter<<endl;
	}
	else 
	{
		cout<<"invalid shape entered!";
	}
	return 0;
	}
}
