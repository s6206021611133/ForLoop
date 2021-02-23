#include <iostream>
#include <string>
using namespace std;
int main()
{   int weight,round;
	float bmi,h2,height;
	string name,bmi2="";
	cout<<"Enter number of Person : ";
	cin>>round;
	for(int i=1 ; i<=round ; i++)
	{	
		cout<<"Enter name "<< i <<" : ";
		cin>>name;
		cout<<"Enter weight "<< i <<" : ";
		cin>>weight ;
		cout<<"Enter height  "<< i <<" : ";
		cin>>height  ;
		h2=(height/100);
		bmi=weight/(h2*h2);
		cout<<"BMI "<< i <<" = "<<bmi<<endl;
		if(bmi<16)bmi2="Severe Thinness";
		else if(bmi>=16 && bmi<=17)bmi2="Moderate Thinness";
		else if(bmi>=17 && bmi<=18.5)bmi2="Mild Thinness";
		else if(bmi>=18.5 && bmi<=25)bmi2="Normal";
		else if(bmi>=25 && bmi<=30)bmi2="is Overweight";
		else if(bmi>=30 && bmi<=35)bmi2="Obese Class I";
		else if(bmi>=35 && bmi<=40)bmi2="Obese Class II";
		else if(bmi>40)bmi2="Obese Class III";
		cout<<"Your Category of BMI is "<<bmi2<<"\n====================\n";
	}
	return 0;

}