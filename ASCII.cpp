#include <iostream>

using namespace std;								

#include<iostream>
#include<fstream>

using namespace std;

int main() {

 ifstream file("AScII.txt");

 if(file.is_open())
 {
 
 char mArray[26][26];

 for(int i = 0;i<26;i++)
 {  
 	for(int j=0;j<26;j++)
 	{
 		file>>mArray[i][j];
 		
 		
 		
 		if(mArray[i][j]=='1')
 		{
 			cout<<"*";
		}
		if(mArray[i][j]=='0')
		{
			cout<<" ";
		}
	 }
	 cout<<endl;
 }
}
 return 0;
}
