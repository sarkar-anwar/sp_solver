#include<iostream>
#include<armadillo>
#include<ctime>
#include<string>
#include<vector>
#include<getopt.h>

using namespace std;
using namespace arma;

int main(int argc, char** argv){

	//Check number of arguments passed
	if (argc<6){
		//Tell the user how to run the program
		cerr<<"Usage: "<<argv[0]<< " <Semiconductor>" 
					<< " <Ndop>"
					<< " <EOT>"
					<< " <Vstart>"
					<< " <Vend>"
					<< " <nV>"
					<<endl;
		return 1;
	}

	vector <string> sources;
	
	
	
	return 0;
}
