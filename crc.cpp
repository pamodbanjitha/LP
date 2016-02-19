#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
int main(){
	int m;
	string pol,msg,nmsg;
	cout<<"Message :";
	cin>>msg;
	cout<<"polynomial in Binary :";
	cin>>pol;
	nmsg=msg;
	for(int i=0;i<(pol.length()-1);i++){
		nmsg+="0";
	}
	cout<<nmsg;
	return 0;
}
