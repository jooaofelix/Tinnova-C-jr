#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;
int main(){
	
	char c [1000];
	ofstream arquivo;
	int contador=0;
	arquivo.open("arq.txt", ios::app);
	
		while(true){
				cout<<("escreva um caracter: \n");
				cin>>c;
				
				if(c[0]=='0'){//saida com caracter '0'!
				break;
				}
				arquivo<<c;
				system("cls");
			}
		
				arquivo.close();
				
				ifstream arquivoS;
				string linha;
				arquivoS.open("arq.txt");
			
			while(getline(arquivoS, linha)){
				cout<<"esta escrito no arquivo: \n\n";
				cout<<"-"<<linha <<" - ";
				
			}
	}
	
