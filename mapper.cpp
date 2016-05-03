#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;
int main(){
	    char filename[50];
	    ifstream file;
	    string p_val="(1)";
	    cin.getline(filename,50);
	    file.open(filename);
	    if(!file.is_open())
		{
			cout<<"ERROR ENCOUNTERED WHILE OPENING THE FILE";
		        exit(EXIT_FAILURE);
                }
	    
	    string key;
    	    string value = "1";
	    file>>key;
            while(file.good()){
            cout<<"("<<key<<","<<value<<")"<<endl;
	    file>>key;
			      }
	cout<<p_val<<endl;
                           
    return 0;
}
