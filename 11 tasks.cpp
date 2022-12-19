#include<iostream>
#include<math.h>
using namespace std;
int a,b;
int main()
{cout<<"How many tasks you want to process?"<<endl<<"Or insert a negative num to end application"<<endl;
cin>>::b;
cout<<endl;

for(int i=1;(i<=::b && !(i<=0));i++)
{
cout<<"ENTER |1| to Get the largest 3 numbers among a group of numbers"<<endl;
cout<<"Enter |2| to Get factorial of any number"<<endl;
cout<<"Enter |3| to Get the avergae of grades"<<endl;
cout<<"Enter |4| to Get the inserted letters separated"<<endl;
cout<<"Enter |5| to Get the number of passed and failed students"<<endl;
cout<<"Enter |6| to Get the total of students' grades by letters"<<endl;
cout<<"Enter |7| to Get the Area & Circumference of any circle"<<endl;
cout<<"Enter |8| to Get the interests of investing money with us for some years"<<endl;
cout<<"Enter |9| to Get the odd & even numbers as a result of summing 2 numbers"<<endl;
cout<<"Enter |10| to Get your Birthdate"<<endl;
cout<<"Enter |11| to Get some of (math.h) library functions"<<endl;
cin>>::a;
cout<<"***********************"<<endl;

//////////////////////////////////////////////////////////////////////////////////////////////
if(::a==1)
{int num1=0,num2=0,num3=0,num,cntr=1,h;
cout<<"How many numbers?"<<endl;
cin>>h;
for(;cntr<=h;cntr++)
{cout<<"Enter the number below :- "<<endl;
cin>>num;
if(num>num1 && num!=num2 && num!=num3)
num1=num;
if(num1>num2 && num!=num3)
{ num=num2;
num2=num1;
num1=num;
	}
	if(num2>num3)
	{ num=num3;
	num3=num2;
	num2=num;	
	}
}		
	cout<<"1st..."<<num3<<endl; cout<<"2nd..."<<num2<<endl; cout<<"3r..."<<num1<<endl; cout<<"***********************"<<endl;}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
else if(::a==2)
{int n;
long int fac=1;
cout<<"Enter the number below :-"<<endl;
cin>>n;

if(n==0)
cout<<"Wrong Value"<<endl;
else
{for(int i=1;i<=n;i++)
{if(i<n)
cout<<i<<'*';
else if(i==n)
cout<<i<<'=';
	
fac*=i;

}
}
cout<<fac<<endl; cout<<"***********************"<<endl;}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
else if(::a==3)
{int grade,gradec=0,total=0; double average;

cout<<"Enter the grade below or -1 to quit app"<<endl;
cin>>grade; cout<<endl;

while(grade!=-1)
{ total+=grade;
gradec++;

cout<<"Enter the grade below or -1 to quit app"<<endl;
cin>>grade; cout<<endl;	}
	
if(gradec!=0)	
{ average=static_cast<double>(total)/gradec;
cout<<"Total of all "<<gradec<<" Grades entered is "<<total<<endl<<endl;
cout<<"Avergae is "<<average<<"%"<<endl<<endl;
	}else
	cout<<"No grades were entered"<<endl; cout<<"***********************"<<endl;}
////////////////////////////////////////////////////////////////////////////////////////////
else if(::a==4)
{int l;
cout<<"How many letters do you want to insert?"<<endl;
cin>>l;

char a[l];


cin>>a;

for(int i=0;i<=l;i++)
	{
	cout<<a[i]<<" ";
	
	
	}
	
	cout<<endl<<endl; cout<<"***********************"<<endl;}
///////////////////////////////////////////////////////////////////////////////////////
	else if(::a==5)
	{int pass=0,fail=0,res,SC,SC2=1;
cout<<"How many Students?"<<endl;
cin>>SC;

while(SC2<=SC)
	{ cout<<"Enter the result: 1 for success | 2 for failing"<<endl;
	cin>>res;
	
	if(res==1)
	pass+=1;
		else
		fail+=1;
SC2++;	}
	cout<<"Passed = "<<pass<<endl;
	cout<<"Fail = "<<fail<<endl;
	if(pass>6)
	cout<<"Awesome!"<<endl; cout<<"***********************"<<endl;}
	////////////////////////////////////////////////////////////////////////////////////////
	else if(::a==6)
	{char grade; int A=0,B=0,C=0,D=0,E=0,F=0;
cout<<"Enter the letter of the grade below"<<endl; cin>>grade;

while(int (grade!=120) && int (grade!=89) )
{ switch(grade)
{case 'a': case 'A': ++A; break;
case 'b': case 'B': ++B; break;
case 'c': case 'C': ++C; break;
case 'd': case 'D': ++D; break;
case 'e': case 'E': ++E; break;
case 'f': case 'F': ++F; break;
default: cout<<"Wrong Letter...Enter another plz"<<endl; break;} cin>>grade;}

cout<<"Total of A grade Holders = "<<A<<endl;
cout<<"Total of B grade Holders = "<<B<<endl;	
cout<<"Total of C grade Holders = "<<C<<endl;
cout<<"Total of D grade Holders = "<<D<<endl;
cout<<"Total of E grade Holders = "<<E<<endl;
cout<<"Total of F grade Holders = "<<F<<endl; cout<<"***********************"<<endl;} 
/////////////////////////////////////////////////////////
else if(::a==7)
{const int t=2;
double Circle[t]={0,3.14}; int n;
double* m=Circle;
cout<<"How many circles?"<<endl;
cin>>n;
for(int i=1; i<=n;i++)
{ cout<<"Enter the radius of the circle"<<endl;
cin>>Circle[0];
cout<<"Area = "<<(Circle[1]*(pow(Circle[0],t)))<<endl;
cout<<"Circum = "<<(2*Circle[1]*Circle[0])<<endl;
}  cout<<"size of array = "<<sizeof(Circle)/sizeof(double)<<endl; cout<<"array location in the memory is "<<m<<endl; cout<<"***********************"<<endl; }
////////////////////////////////////////////////////
else if(::a==8)
{ double amount,interest=0.15,total=0; int years;
cout<<"How much money do you have now?"<<endl;
cin>>amount;
cout<<"How many years do you want to invest your money with us (+15% every year)?"<<endl;
cin>>years;
for(int i=1;i<=years;i++)
{if(i>=2)
total=total*interest+total;
else
total=amount+amount*interest;
cout<<"Year "<<i<<" you will get "<<total<<endl;
}
cout<<"***********************"<<endl;
}
///////////////////////////////////////////
else if(::a==9)
{int f,number1,number2,sum;

cout<<"Hello!\n";
cout<<"How many numbers do you want to calculate?\nAnswer :- ";
cin>>f;
cout<<endl;
for(int i=1;i<=f;i++)


{cout<<"number1 = ";
cin>>number1;
cout<<"number2 = ";
cin>>number2;

sum=number1+number2;

if((sum%2)==0)
cout<<"sum = "<<sum<<endl<<"It is related to even numbers"<<endl<<endl;

if((sum%2)!=0)
cout<<"sum = "<<sum<<endl<<"It is related to odd numbers"<<endl<<endl;

    } cout<<"***********************"<<endl;} 
//////////////////////////////////////////////////////////////
    else if(::a==10)
    {int year1,year2,year3,month1,month2,month3,month4,day1,day2,day3,day4,hour1,hour2,hour3,hour4,hour5;
string answer;
cout<<"Please enter your birth year\nYear = ";
cin>>year1;
cout<<"\n";
cout<<"Please enter the current year\nCurrent year = ";
cin>>year2;
cout<<"\n";
year3=year2-year1;
cout<<"Here is your birth date in years :) "<<year3<<endl<<endl;
cout<<"Do you wanna continue?\nAnswer :- ";
cin>>answer;
cout<<"\n";
if(answer=="yes" || answer=="Yes")
{cout<<"Alright..Let's move on\n\n\n";}
else
{cout<<"Have a great time!\n\n"; system("pause"); return 0;}

///comment months 
cout<<"Please enter your birth month\nMonth = ";
cin>>month1;
cout<<"\n";
cout<<"Please enter the current month\nCurrent month = ";
cin>>month2;
cout<<"\n";
month3=(year3-1)*12;
month4=month3+month2;
cout<<"Here is your birth date in months :) "<<month4<<endl<<endl;
cout<<"Do you wanna continue?\nAnswer :- ";
cin>>answer;
cout<<"\n";
if(answer=="yes" || answer=="Yes")
{cout<<"Alright..Let's move on\n\n\n";}
else
{cout<<"Have a great time!\n\n"; system("pause"); return 0;}

///comment days
cout<<"Please enter your birth day\nDay = ";
cin>>day1;
cout<<"\n";
cout<<"Please enter the current day\nCurrent day = ";
cin>>day2;
cout<<"\n";
day3=(year3-1)*365;
day4=day3+(month2-1)*30+day2;
cout<<"Here is your birth date in days :) "<<day4<<endl<<endl;
cout<<"Do you wanna continue?\nAnswer :- ";
cin>>answer;
cout<<"\n";
if(answer=="yes" || answer=="Yes")
{cout<<"Alright..Let's move on\n\n\n";}
else
{cout<<"Have a great time!\n\n"; system("pause"); return 0;}

///comment hours
cout<<"Please enter your birth hour\nHour = ";
cin>>hour1;
cout<<"\n";
cout<<"Please enter the current hour\nCurrent hour = ";
cin>>hour2;
cout<<"\n";
hour3=(year3-1)*8760;
hour4=hour3+(month2-1)*720;
hour5=hour4+(day2*24);
cout<<"Here is your birth date in hours :) "<<hour5<<endl<<endl;
/*cout<<"Do you wanna continue?\nAnswer :- ";
cin>>answer;
cout<<"\n";
if(answer=="yes")
{cout<<"Alright..Let's move on\n\n\n";}
else
{cout<<"Have a great time!\n\n"; system("pause"); return 0;}*/ }
////////////////////////////////////
else if(::a==11)
{  double a; cin>>a; 
double op[4]={pow(a,2),sqrt(a),ceil(a),floor(a)};
int b=a;
	int op1[1]={abs(b)};
	
	for(int i=0;i<=4;i++)
{	
if(i==0)
cout<<"Pow = "<<op[i]<<endl;
else if(i==1)	
cout<<"Sqrt = "<<op[i]<<endl;
else if(i==2)
cout<<"Ceil = "<<op[i]<<endl;
else if(i==3)
cout<<"Floor = "<<op[i]<<endl;
} for(int j=0;j<1 && j>-1;j++)
cout<<"Absolute Value = "<<op1[j]<<endl;}
///////////////////
else
cout<<"Wrong value...."<<endl<<endl;

	
	} system("pause");}