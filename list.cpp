/**
    ||======\\     =====
    ||       ||  //
    ||       //  ||
    ||======//   \\
    ||  \\    //   =====
    ||   \\  //  ____  ____
    ||    \\//   |  |  |  |
    ==     //    |---  |---
          ===    |     |

           list.cpp

 Copyright (c) 2022-2023 HelloOSMe
      All rights reserved.
 */
#include<bits/stdc++.h>
#include<dirent.h>
#include<unistd.h>
#include <sys/stat.h>
using namespace std;
const char* rootdir=getcwd(NULL,0);
map<string,bool> pu;
string search_value="";
/*功能函数*/
extern string bts(string str){
	int a,len=str.size();
	for(a=0;a<len;a++){
		if(str[a]>='A'&&str[a]<='Z'){
			str[a]=str[a]+32;
		}
	}
	return str;
}
extern bool have_str(string s,string s2){
	if(s.size()>s2.size()) return 0;
	for(int i=0;i<s2.size();i++){
		bool b=1;
		for(int j=0;j<s.size();j++){
			if(s[j]!=s2[i+j]){
				b=0;
				break;
			}
		}
		if(b){
			return 1;
		}
	}
	return 0;
}
extern string char_to_str(const char* ch){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
extern bool have_file(const char* f2){
	ifstream fin (f2);
	bool b=fin.is_open();
	fin.close();
	return b;
}
/*end.*/
extern void readfile(const char* fn){
	ifstream fin(fn);
	string s,sval="";
	int diver=0;
	bool show11=false;
	string title="";
	string tmp="";
	for(int i=0;i<29;i++){
		getline(fin,s);
	}
	getline(fin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='0'&&s[i]<='9'){
			sval.push_back(s[i]);
		}
	}
	char* nowdir=getcwd(NULL,0);
	string nd="",pth="";
	int pather=0;
	chdir(rootdir);
	chdir("source");
	string pathof="";
	for(int i=strlen(nowdir)-1;i>=0;i--){
		if(nowdir[i]=='/'||nowdir[i]=='\\'){
			for(int j=nd.size()-1;j>=0;j--){
				pth.push_back(nd[j]);
			}
			if(pth=="html"){break;}
			//pth是dir名称
			pathof+="/"+pth;
			nd="mkdir "+pth;
			//cout<<nd<<' '<<pth<<endl;
			system(nd.c_str());
			chdir(pth.c_str());
			nd.clear();
			pth.clear();
		}else{
			nd.push_back(nowdir[i]);
		}
	}
	fin.close();
	chdir(rootdir);
	tmp="python ./list.py "+sval+" "+pathof+"/"+char_to_str(fn);
	system(tmp.c_str());
	//cout<<tmp<<endl<<"-----------"<<endl;
	chdir(nowdir);
}
extern int ls(string floder){
	struct stat buf;
	if(floder=="-h"||floder=="--help"){
		cout<<"usage: ls [floder]"<<endl;
	}
	char argv[256]={'\0'};
	for(int i=0;i<floder.size();i++){
		argv[i]=floder[i];
	}
	DIR *dp;
	struct dirent *dirp;
	if(strlen(argv)==0){
		printf("Usage:dir directory_name\n");
		return 1;
	}
	if((dp=opendir(argv))==NULL){
		printf("Cannot open%s.\n",argv);
		printf("Try to use sudo.\n");
		return 1;
	}
	while((dirp=readdir(dp))!=NULL){
		stat(dirp->d_name, &buf);
		if(S_IFREG & buf.st_mode){
			readfile(dirp->d_name);
		}
	}
	closedir(dp);
	return 0;
}
extern vector<string> lsfloder(string floder){
	vector<string> strlf;
	struct stat buf;
	char argv[256]={'\0'};
	for(int i=0;i<floder.size();i++){
		argv[i]=floder[i];
	}
	DIR *dp;
	struct dirent *dirp;
	if(strlen(argv)==0){
		printf("Usage:dir directory_name\n");
		return strlf;
	}
	if((dp=opendir(argv))==NULL){
		printf("Cannot open%s.\n",argv);
		printf("Try to use sudo.\n");
		return strlf;
	}
	while((dirp=readdir(dp))!=NULL){
		stat(dirp->d_name, &buf);
		if(/*!have_file(dirp->d_name)*/S_IFDIR & buf.st_mode){
			if(char_to_str(dirp->d_name)=="."||char_to_str(dirp->d_name)==".."){continue;}
			strlf.push_back(char_to_str(dirp->d_name));
		}
	}
	closedir(dp);
	return strlf;
}
void dfs(){
	//深度优先搜索，遍历html文件夹。
	vector<string> strlf=lsfloder(getcwd(NULL,0));
	ls(char_to_str(getcwd(NULL,0)));
	for(int i=0;i<strlf.size();i++){
		chdir(strlf[i].c_str());
		dfs();
		chdir("..");
	}
}
int main(int argc,char** argv){
	system("mkdir source");
	system("cls");
	chdir("html");
	search_value="";
	dfs();
	return 0;
}
