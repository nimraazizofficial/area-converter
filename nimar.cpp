#include <iostream>
using namespace std;
int main (){


float amount;
int check;
float op_from;
float op_to;

do
{


cout<<"Enter Amount To Convert"<<endl;
cin>>amount;

cout<<"\nSelect Option to Convert From "<<endl;
cout<<"\n 1 for Mili Meter"<<endl;
cout<<"\n 2 for Meter"<<endl;
cout<<"\n 3 for Centi Meter \n"<<endl;

cin>>op_from;
cout<<"\nOption is "<<op_from<<endl;

cout<<"\n Select Option to Convert To  "<<endl;
cout<<"\n 1 for Mili Meter"<<endl;
cout<<"\n 2 for Meter"<<endl;
cout<<"\n 3 for Centi Meter \n"<<endl;


//Meter

if (op_from==2&&op_to==2)
{
float result=amount;
cout<<amount<<" Meter  = "<<result<<" Meter "<<endl;
}
else if (op_from==2&&op_to==3)
{
float result=amount*100;
cout<<amount<<"  Meter = "<<result<<"  Centi Meter  "<<endl;
}
else if (op_from==2&&op_to==1)
{
float result=amount*1000;
cout<<amount<<"  Meter = "<<result<<"  Mili Meter  "<<endl;
}

//Centi Meter

if (op_from==3&&op_to==2)
{
float result=amount/100;
cout<<amount<<" Centi Meter  = "<<result<<" Meter "<<endl;
}
else if (op_from==3&&op_to==3)

{
float result=amount;
cout<<amount<<"  Centi Meter = "<<result<<"  Centi Meter  "<<endl;
}

else if (op_from==3&&op_to==1)
{
float result=amount*10;
cout<<amount<<"  Centi Meter = "<<result<<"  Mili Meter  "<<endl;
}


//Mili Meter

else if (op_from==1&&op_to==2)

{
float result=amount/1000;
cout<<amount<<"  Mili Meter  = "<<result<<" Meter "<<endl;
}
else if (op_from==1&&op_to==3)
{
float result=amount/10;
cout<<amount<<"   Mili Meter = "<<result<<"  Centi Meter  "<<endl;
}
else if (op_from==1&&op_to==1)
{
float result=amount*0.001;
cout<<amount<<"   Mili Meter = "<<result<<"  Mili Meter  "<<endl;
}

cout<<"Press 1 to Continue"<<endl;
cin>>check;


}
while(check==1);


}
