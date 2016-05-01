//Arrays and Looping
// from Learn C the hard way
#include <stdio.h>

int main(int argc,char *argv[])
{
	int i=0;
	// go through each string in argv
	// why am I skipping argv[0]?
	
	for(i = 1; i < argc; i++)
	//argc is the number of arguments followed in the command line 
	{
	printf("arg %d:%s\n",i,argv[i]);
	}
	
// let`s make our own array of strings
	char *states[]={"California","Oregon","Washington","Texas"};
	
	int num_states=4;
	
	for(i=0;i<num_states;i++){
		printf("state %d:%s\n",i,states[i]);
	}	
	return 0;
}
