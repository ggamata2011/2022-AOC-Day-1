#include <iostream>
#include <string>
//Use for file input and output
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
//Input filestream
ifstream file;

file.open("input.txt");

int SumArray[500];
int n =0;
int CurrentSum = 0;

while(!file.eof()){

//Used for holding Current Number
string num;
int number;

//Get Current Line
getline(file,num);

//If we encountered whitespace, check sums before moving on to next elf
if(num == "")
{
    SumArray[n] = CurrentSum;
    n++;
    CurrentSum = 0;
}
else{
//Add to Current Sum
number = stoi(num);
CurrentSum+= number;

}

}


sort(SumArray,SumArray + n, greater<int>());

cout << "Max sum is:" << SumArray[0] << endl;
cout << "Second Max is:" << SumArray[1] << endl;
cout << "Third Max is:" << SumArray[2] << endl;
cout << "Combined Value:" << SumArray[0]+SumArray[1]+SumArray[2];
}





