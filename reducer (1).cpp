#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>


using namespace std;
int main(int argc, char* argv[])
{
	string buffer[100];
	int freq_buf[100];
	char *key, *key_value;
	string word;
	int i=0;
	int flag=0;
	int int_key_value;
	while(cin>>word)
	{
		//cin>> word;
		flag=0;
		key = strtok((char*)word.c_str()," (,)");
		key_value = strtok(NULL," (),");
		int_key_value=atoi(key_value);
		if(i==0)
		{
			buffer[i]=key;
			freq_buf[i]=int_key_value;
			i++;
		}

		else
		{
			if(buffer[i-1][0]==key[0])
				{
					for(int k=0;k<i;k++)
					{

						if(strcmp(key, (char*)buffer[k].c_str())==0)
							{
								freq_buf[k]+=int_key_value;
								flag=1;
								//break;
							}
					}
						if(flag==0)
							{
								buffer[i]=key;
								freq_buf[i]=int_key_value;
								i++;
							}
				}

			else
				{
					for(int j=0;j<i;j++)
					{
						cout<<"("<<buffer[j]<<","<<freq_buf[j]<<")"<<endl;
					}
					
					i=0;
					//flag=0;
					buffer[i]=key;
					freq_buf[i]=int_key_value;
					i++;

				}
		}
		


	}
		//cout<<i<<"Exiting I";	
			for(int j=0;j<i;j++)
					{
						cout<<"("<<buffer[j]<<","<<freq_buf[j]<<")"<<endl;
					}
						

	//delete key;
	//delete key_value;
	return 0;
}
