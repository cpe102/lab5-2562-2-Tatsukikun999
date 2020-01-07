#include<iostream>
#include<string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];

	int age[N];
	for(int i=0;i<N;i++){
	cout << "Name of student = ";
	cin >> name[i];
	cout << "Age of student = ";
	cin >> age[i];}
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	int i = 0;
	while(i<N){
		if(age[i] == key){
			cout << name[i]<<"\n";
		}
	i++;}

	
	cout << "--------------------------------------\n";
	
	return 0;
}
