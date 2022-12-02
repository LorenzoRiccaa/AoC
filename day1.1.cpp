#include <iostream>
#include <fstream>
#include <string>
#define N 251
using namespace std;

int main () {
	int contatore=0;
	int a;
	int ris = 0;
	int contenitore[N];
	int i = 0;
	int finale;
	
  string line;
  
    for(int j=0; j<N; j++){
  		contenitore[j]=0;
  	}

  ifstream myfile ("day1.1.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
    	if(line.empty()==false){
    		a = stoi(line);
		} else {
			contenitore[i] = ris;
			i++;	
			ris=0;
			a=0;
		}
			
		ris=ris+a;
    }
    myfile.close();

  }else cout << "Unable to open file"; 
  
  finale = contenitore[0];
  
  for(int j=0; j<i; j++){
  	cout<<contenitore[j]<<endl<<endl;
  	if(contenitore[j]>finale){
	  	finale=contenitore[j];
	  }
  }
  
  cout<<endl<<endl<<finale<<endl<<i;

}