/*
Nama : Sina Mustopa
Kelas : A
NPM : 140810180017
Deskripsi : Reverse Word dengan stack Singly Linked List
*/
#include<iostream>
using namespace std;
	struct Stack{
 		char a;
 		Stack* next;
		};
		
typedef Stack* pointer;
typedef pointer List;

void createList (List& Top){
 Top=NULL;
}

void createElement(pointer& pBaru){
 pBaru=new Stack;
 cin>>pBaru->a;
}

void pushStackL(List& Top,pointer pBaru){
 if(Top==NULL){
  Top=pBaru;
 }
 else {
  pBaru->next=Top;
  Top=pBaru;
 }
}

void popStackL(List& Top){
 pointer pHapus;
 cout << Top->a;
 if(Top->next==NULL){
  Top=NULL;
 }
 else {
  pHapus=Top;
  Top=Top->next;
  pHapus->next=NULL;
 }
}

int main(){
 	int n;
 	pointer pBaru;
 	List Top;
 	cout << "Banyak Huruf : "; cin>>n;
 		createList(Top);
 		for (int i=0;i<n;i++){
 			cout<<"Input Data : ";
  			createElement(pBaru);
 			pushStackL(Top,pBaru);
			 }
 		for (int i=0;i<n;i++){
  			popStackL(Top);
 		}
	}
