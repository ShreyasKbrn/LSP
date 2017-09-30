#include<iostream>
#include<cstdlib>
#define max 10;

int main(int argc, char **argv, char **envp){


	int c=0;
	while(*envp){
	++c;
		std::cout<<*envp<<"   @ address"<<envp<<"\n";
		++envp;
	}

	std::cout<<c;

	char * present=getenv("PWD");
	if(present){std::cout<<"\n"<<present;}
	else{std::cout<<"\nNot found";}

	std::cout<<max;
return 0;
}
