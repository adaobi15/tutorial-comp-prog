#include<iostream>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4' ,'5','6'}, {'7','8', '9'}};
int row;
int column;
char token ='x';

bool tie = false;;
string num1 = "";
string num2 = "";
void functionOne() {

cout << "    |     |   \n";
cout << " " <<space[0][0]<< "  | " <<space[0][1]<< "   | " <<space[0][2]<< "  \n";
cout << "____|_____|____\n";
cout << "    |     |   \n";
cout << " " <<space[1][0]<< "  | " <<space[1][1]<< "   | " <<space[1][2]<< "  \n";
cout << "____|_____|____\n";
cout << "    |     |   \n";
cout << " " <<space[2][0]<< "  | " <<space[2][1]<< "   | " <<space[2][2]<< "  \n";
cout << "    |     |   \n";

}
void  functiontwo(){
	int response;
	if(token== 'x')
	{
		cout << num1 << " place enter";
		cin >> response;
	}
		if(token == 'o')
	{
		cout << num2 << " place enter";
		cin >> response;
	}
	if (response == 1)
	{
		row = 0;
		column = 0;
	}
		if (response == 2)
	{
		row = 0;
		column = 1;
	}
		if (response == 3)
	{
		row = 0;
		column = 2;
	}
		if (response == 4)
	{
		row = 1;
		column = 0;
	}
		if (response == 5)
	{
		row = 1;
		column = 1;
	}
		if (response == 6)
	{
		row = 1;
		column = 2;
	}
		if (response ==7)
	{
		row = 2;
		column = 0;
	}
		if (response ==8)
	{
		row = 2;
		column = 1;
	}
		if (response ==9)
	{
		row = 2;
		column = 2;
	}
	
	else if (response<1 || response>9){
		cout << "invalid code!!" << endl;
	}
	if (token =='x' && space [row][column] != 'x' && space [row][column] != 'o')
{

		
	space[row][column] = 'x';
	token = 'o';
	
}
else if (token == 'o' && space [row][column] != 'x' && space [row][column] != 'o')
{
	space [row][column] != 'o';
	token = 'x';
}
else {
	cout << "there is no empty space!" << endl;
	functiontwo();
	
}
functionOne();
}
bool functionthree()
{
	for(int i= 0; i < 3; i++)
	{
	
	if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
	return true;
	
}
if (space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
{

	return true;
}
for(int i = 0;i<3 ; i++)
{
	for(int j=0; j<3; j++)
	
{

if(space[i][j] != 'x' && space [i][j] !='o')
{
	return false;
}
}
}
tie=true;
return false;
}

int main()
{
		cout << "Enter the name of your country player one: \n";
	getline (cin , num1);
		cout << "Enter the name of your country player two: \n";
	getline (cin , num2);
cout << num1 << " player 1  is the first \n "; 
cout << num2 << " player 2  is  second \n" ; 

	while(!functionthree())
	{
		functionOne();
		functiontwo();
		functionthree();
	}
	if(token =='x' && tie == false)
	{
		cout<<num2<<" you are the winner"<<endl;
	}
		else if(token =='o' && tie == false)
	{
		cout<<num1<<" you are the winner"<<endl;
	}
	else
	{
		cout << "its a draw!" << endl;
	}
	
}