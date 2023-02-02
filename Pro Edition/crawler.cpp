#include<bits/stdc++.h>
#include<Urlmon.h>
#pragma comment(lib, "Urlmon.lib")
#include<unistd.h>
using namespace std;
void jihuo(){

}
int main(int argc,char** argv){
	if(argc==1){
		cout<<"Failed! Pleaase run main.exe!"<<endl;
		return 0;
	}
	if(argc==2){
		URLDownloadToFile(0,argv[1],"a.html",0,NULL);
		return 0;
	}
	URLDownloadToFile(0,argv[1],argv[2],0,NULL);
	return 0;
}
