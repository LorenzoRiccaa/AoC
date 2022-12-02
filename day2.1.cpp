#include <iostream>
#include <fstream>
#include <string>
#define N 251
using namespace std;

int main () {
	
	int counterPoint=0;
	int i=0;
	
  string line;
  
  ifstream myfile ("day2.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    	if(line=="A X"){
    		counterPoint+=4;
		} else if(line=="A Y"){
			counterPoint+=8;
		} else if(line=="A Z"){
			counterPoint+=3;
		} else if(line=="B X"){
			counterPoint+=1;
		} else if(line=="B Y"){
			counterPoint+=5;
		} else if(line=="B Z"){
			counterPoint+=9;
		} else if(line=="C X"){
			counterPoint+=7;
		} else if(line=="C Y"){
			counterPoint+=2;
		} else if(line=="C Z"){
			counterPoint+=6;
		}
		
		i++;
    }
    myfile.close();

  }else cout << "Unable to open file"; 
  
  cout<<counterPoint<<endl<<i;
  

}