#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>

using namespace std;

void functionuser( );
void screandislplay( );
//logos:
void welcomelogo();
void logocinema( );

int main(){
	int option;
	
	welcomelogo();
	cout<<"       Press 1 for Login:"<<endl;
	cout<<"       Press 2 for Register"<<endl;
	cout<<"       Please..! Select Any Option";
     cin>>option;
     
system("cls");

     switch(option){
     	case 1:
     		
     		functionuser();
     		
     		break;
     		
        case 2:
        //registeration
        	
        	char name[10],lastname[10],age[3],number[14],password[20],cnic[29],mail[30];
        	ofstream registration;
			registration.open("register.txt");
        	cout<<"Enter your data information:"<<endl;
        	registration<<"Enter your data information:"<<endl;
        	
        	cout<<"First Name :";
        	registration<<" your Name : ";
        	cin>>name;	
			registration<<name<<endl;
        	
        	cout<<"Last NAme :";
        	registration<<" your last Name :"<<endl;
        	cin>>lastname;
            registration<<lastname<<endl;

        	cout<<"Age :";
        	registration<<" your Age :"<<endl;
        	cin>>age;
        	registration<<age<<endl;

			cout<<"CNIC Number :";
        	registration<<" your CNIC Number :"<<endl;
        	cin>>cnic;
            registration<<cnic<<endl;

        	cout<<"Mobile Number :";
        	registration<<" your mobile Number :"<<endl;
        	cin>>number;
        	registration<<number<<endl;


			cout<<"Email Adress :";
        	registration<<" your Email Adress :"<<endl;
        	cin>>mail;
        	registration<<mail<<endl;
        	
			cout<<"Password :";
        	registration<<" your password :"<<endl;
        	cin>>password;
        	registration<<password<<endl;

			registration.close();
        
        char  result;
        cout<<"Do you want To continue (Y/N)or(y/n):";
        cin>>result;
        if(result=='Y' || result=='y'){
		
		system("cls");
     		functionuser();
		}
		else{
			cout<<"Thank you Sir..";
		}
     	
	 }
	
	return 0;
}

//system data for user:
void functionuser(){
	
	char username[10] , userpass[10];
     		cout<<"                        UserName :";
     		cin>>username;
     		cout<<"                        Password :";
     		cin>>userpass;
     		
     system("cls");		  
			 	
   	if(strcmp(username,userpass)==1 || strcmp(username,userpass)==-1 ){
     		 
	cout<<"          Name : "<<username;			
                screandislplay();		 	
     		 	
			 }
	else if(strcmp(username,userpass)==0){
 	cout<<"Password and user would be not same...."<<endl;
		    cout<<" UserName :";
     		cin>>username;
     		cout<<" Password :";
     		cin>>userpass;
    system("cls");
	cout<<"          Name : "<<username;		 
	 		
     		screandislplay(); 	 
			}
     		
}

//cinema hall and get tickets:
void screandislplay( ){
logocinema();
	char the[10][10];
		for(int i=0; i<9;++i){
			char che = '1';
		for(int j=0;j<9;++j){
			
		the[i][j] = che;	
		che++;
		}
	}
	char ch='A';
	for(int i=0; i<9;++i){
				cout<<ch<<"      ";			
		for(int j=0;j<9;++j){
			cout<<"["<<the[i][j]<<"]  ";
			
		}
		cout<<endl;		
		ch++;
		}
		cout<< "\n             ----------------------------";
		
cout<<endl<<endl;
	cout<<"ticket price 500 each."<<endl;
	char row;
	int no;
	int seats;
	char answer;
	cout<<"Number of seats:";
	cin>>seats;
	int pay;
	pay = seats*500;

cout<<"Do you want to start? (Y/N)";
	cin>>answer;
	if(answer=='Y' || answer=='y'){
	
	for(int i=0; i<seats;i++){
	cout<<"Select seat: ";
	row = getche();
	cin>>no;
			if(row == 'A' || row == 'a' ){
				int first = 0;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'B' || row == 'b' ){
				int first = 1;
				int second = no-1;
				the[first][second] = 'X';

			}
			if(row == 'C' || row == 'c' ){
				int first = 2;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'D' || row == 'd'){
				int first = 3;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'E' || row == 'e'){
				int first = 4;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'F' || row == 'f'){
				int first = 5;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'G' || row == 'g'){
				int first = 6;
				int second = no-1;
				the[first][second] = 'X';
			}
			if(row == 'H' || row == 'h'){
				int first = 7;
				int second = no-1;
				the[first][second] = 'X';
			}
	
				if(row == 'I' || row == 'i'){
				int first = 8;
				int second = no-1;
				the[first][second] = 'X';
			}
	
	}
	cout<<endl<<endl;
	system("cls");
	
	ch='A';
	for(int i=0; i<9;++i){			
				cout<<ch<<"      ";			
		for(int j=0;j<9;++j){
			cout<<"["<<the[i][j]<<"]  ";
			
		}
		cout<<endl;		
		ch++;
		}
		cout<<"Please Pay "<<pay<<" Amount. Thank you for using Arena";
	
	
    }else{
	cout<<"Thank you for Using Arena cinema";
     }
}
//logocinema interhall
void logocinema(){
	    cout<<"                                                 ------------"<<endl;
	    cout<<"                                                | THE ARENA  |"<<endl;
        cout<<"                                                 ------------"<<endl;
}

//welcome logo
void welcomelogo(){
	cout<<endl<<endl<<endl;
	cout<<"                       ******************************************************"<<endl;
	cout<<"                       *           WELCOME      TO     CINEMA               *"<<endl;
	cout<<"                       ******************************************************"<<endl;
	cout<<endl<<endl;
	
}
