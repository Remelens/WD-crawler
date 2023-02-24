#include<bits/stdc++.h>
#include<unistd.h>
#include<windows.h>
#define cls system("cls")
#define Utc 8
#define GT_YEA 0x000000
#define GT_MON 0x000001
#define GT_DAY 0x000002
#define GT_HOU 0x000003
#define GT_MIN 0x000004
#define GT_SEC 0x000005
using namespace std;
ofstream ferr ("err.log",ios::app);
void EnableDebugPriv() 
{      
	
	HANDLE hToken;      
	
	LUID sedebugnameValue;      
	
	TOKEN_PRIVILEGES tkp; 
	
	OpenProcessToken(GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken); 
	
	LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &sedebugnameValue); 
	
	tkp.PrivilegeCount = 1;      
	
	tkp.Privileges[0].Luid = sedebugnameValue;      
	
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED; 
	
	AdjustTokenPrivileges(hToken, false, &tkp, sizeof tkp, NULL, NULL); 
	
	CloseHandle(hToken);  
} 
int GetTimes(int lei){
	time_t now_time;
	now_time = time(NULL);
	tm* timer=gmtime(&now_time);
	if(lei==0){
		return 1900+timer->tm_year;
	}else if(lei==1){
		return 1+timer->tm_mon;
	}else if(lei==2){
		return timer->tm_mday;
	}else if(lei==3){
		return timer->tm_hour+Utc;
	}else if(lei==4){
		return timer->tm_min;
	}else if(lei==5){
		return timer->tm_sec;
	}else{
		return now_time;
	}
}
string char_to_str(char ch[]){
	string s;
	for(int i=0;i<strlen(ch);i++){
		s.push_back(ch[i]);
	}
	return s;
}
int char_to_int(const char* s){
	int i=0;
	for(int j=0;j<strlen(s);j++){
		i*=10;
		i+=s[j]-'0';
	}
	return i;
}
bool have_file(const char* name){
	ifstream fins (name);
	return fins.is_open();
}
bool have_floder(const char* name){
	bool b=chdir(name)==0;
	if(b) chdir("../");
	return b;
}
bool compare_2_html(const char* file1,const char* file2){
	ifstream fin1 (file1);
	ifstream fin2 (file2);
	string s1,s2;
	while(getline(fin1,s1)||getline(fin2,s2)){
		if(s1!=s2){
			return false;
		}
	}
	return true;
}
void jihuo(){
	
}
void crawler(const char* url,const char* thing,const char* filename){
	char url2[2048];
	sprintf(url2,"other-page %s%s %s",url,thing,filename);
	system(url2);
}
void crawler1(const char* url,const char* thing,const char* filename){
	char url2[2048];
	sprintf(url2,"other-page %s%s %s",url,thing,filename);
	system(url2);
}
void crawler2(const char* url,const char* thing,const char* filename){
	char url2[2048];
	sprintf(url2,"other-page %s%s %s",url,thing,filename);
	system(url2);
}
void crawler3(const char* url,const char* thing,const char* filename){
	char url2[2048];
	sprintf(url2,"other-page %s%s %s",url,thing,filename);
	system(url2);
}
void crawler4(const char* url,const char* thing,const char* filename){
	char url2[2048];
	sprintf(url2,"other-page %s%s %s",url,thing,filename);
	system(url2);
}
bool have_str(string s,string s2){
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
int main(int argc,char** argv){
	ferr<<"=========================="<<endl;
	char timedata[1000]={'\0'};
	sprintf(timedata,"%d/%02d/%02d %02d:%02d:%02d",GetTimes(GT_YEA),GetTimes(GT_MON),GetTimes(GT_DAY),GetTimes(GT_HOU),GetTimes(GT_MIN),GetTimes(GT_SEC));
	ferr<<"NOW:"<<timedata<<endl;
	char* path=getcwd(NULL,0);
	string lan;
	ifstream flan("lan");
	if(!flan.is_open()){
		cout<<"Welcome to use Py-Crawler ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
		cout<<"Professional";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);
		cout<<" Editon (TimeLine-Bookstore Inside Edition)"<<endl;
		cout<<"Use 5 threads."<<endl;
	}else{
		getline(flan,lan);
		cout<<lan<<endl;
	}
	jihuo();
	chdir(path);
	if(!have_floder("html"))
		system("mkdir html");// ./html/
	ofstream fout;
	if(have_file("a.html"))
		system("del /f /q a.html");
	char url[1024];
	if(argc==1){
		cout<<"Choose:"<<endl;
		cout<<"[1] TLB"<<endl;
		cout<<"[ANY KEY] Other website"<<endl<<"> ";
		char c;
		c=getchar();
		getchar();
		if(c=='1'){
			sprintf(url,"https://timeline-bookstore.wikidot.com/");
		}else{
			if(!flan.is_open()){
				cout<<"Example: https://timeline-bookstore.wikidot.com/"<<endl;
				cout<<"Input URL> ";
			}else{
				getline(flan,lan);
				cout<<lan<<endl;
				getline(flan,lan);
				cout<<lan;
			}
			gets(url);
		}
	}else{
	    sprintf(url,"%s",argv[1]);
	}
	//cout<<1;
	char cmd[1536];
	sprintf(cmd,"crawler %s",url);
	cout<<cmd<<endl;
	int a=system(cmd);
	ifstream fin ("a.html");
	if(a==1){
		ferr<<"----------------------------"<<endl;
		ferr<<"ERR:main.exe"<<endl;
		ferr<<"PAGE:"<<url<<endl;
		ferr<<"DO_NOT_FIND_CRAWLER_EXE"<<endl;
		exit(0);
	}else if(!fin.is_open()){
		ferr<<"----------------------------"<<endl;
		ferr<<"ERR:main.exe"<<endl;
		ferr<<"PAGE:"<<url<<endl;
		ferr<<"DO_NOT_FIND_FILE_A_HTML"<<endl;
		exit(0);
	}
	string s;
	fout.open("./html/index.html");
	while(getline(fin,s)){
		if(have_str("@import url(/admin:themes/code/1);",s)){
			fout<<"@import url("+char_to_str(url)+"admin:themes/code/1);"<<endl;
		}else{
			fout<<s<<endl;
		}
		if(have_str("<head>",s)){
			//fout<<"<base href=\"./\"/>"<<endl;
		}
		//cout<<1;
	}
	fout.close();
	fin.close();
	char url2[2048];
	int n=1;
	int nu;
	if(argc<3){
		cout<<"Your pages of /system:list-all-pages> ";
		cin>>nu;
	}else{
		nu=char_to_int(argv[2]);
	}
	long long l=clock(),l2=0;
	while(n<=nu){
		sprintf(url2,"get-all-page %ssystem:list-all-pages/p/%d",url,n);
		//cout<<url2<<endl;
		system(url2);
		n++;
	}
	int threads;
	if(argc<4){
		cout<<"Input the threads you need> ";
		char s;
		cin>>s;
		if(s>='1'&&s<='5'){
			threads=s-'0';
		}else{
			ferr<<"----------------------------"<<endl;
			ferr<<"ERR:main.exe"<<endl;
			ferr<<"THREADS_INPUT_ERROR"<<endl;
			exit(0);
		}
	}else{
		threads=argv[3][0]-'0';
	}
	system("all");
	fin.open("allurls.log");
	string things,things2,things3,things4,things5;
	while(getline(fin,things)){
		if(threads>=2){
			getline(fin,things2);
		}
		if(threads>=3){
			getline(fin,things3);
		}
		if(threads>=4){
			getline(fin,things4);
		}
		if(threads==5){
			getline(fin,things5);
		}
		char thing[512]={'\0'};
		for(int i=0;i<things.size();i++){
			thing[i]=things[i];
		}
		char thing2[512]={'\0'};
		for(int i=0;i<things2.size();i++){
			thing2[i]=things2[i];
		}
		char thing3[512]={'\0'};
		for(int i=0;i<things3.size();i++){
			thing3[i]=things3[i];
		}
		char thing4[512]={'\0'};
		for(int i=0;i<things4.size();i++){
			thing4[i]=things4[i];
		}
		char thing5[512]={'\0'};
		for(int i=0;i<things5.size();i++){
			thing5[i]=things5[i];
		}
		thread th1 (crawler,url,thing,"a.html");
		th1.join();
		if(threads>=2){
			thread th2 (crawler1,url,thing2,"b.html");
			th2.join();
		}
		if(threads>=3){
			thread th3 (crawler2,url,thing3,"c.html");
			th3.join();
		}
		if(threads>=4){
			thread th4 (crawler3,url,thing4,"d.html");
			th4.join();
		}
		if(threads==5){
			thread th5 (crawler4,url,thing5,"e.html");
			th5.join();
		}
		//cout<<url2<<endl;
	}
	fin.close();
	l2=clock();
	ferr<<"-----END-----"<<endl;
	ferr<<"Use Time:"<<(l2-l)/1000<<endl;
	//*/
	return 0;
}
//@import url(http://kcdfg.wdfiles.com/local--theme/silent-silver-patch/style.css);
