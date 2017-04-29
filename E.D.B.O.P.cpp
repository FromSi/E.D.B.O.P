#include <iostream>
#include <fstream>
using namespace std;

class Character {
	private:
		int a, b;
		char d[10];
		
	public:
		ofstream fileAccessCpp;
		void masseg(int num){
			cout <<num << ". " << "Name: ";
			cin >> d;
		};

		void year (int num) {
			cout <<num << ". " << "How many years: ";
				cin >> a;
			
		};

		void growth(int num) {

			cout <<num << ". " << "Growth: ";
			cin >> b;
			
		};

		void allMs(int num) {
			fileAccessCpp.open("fileAccessCpp.txt", ios_base::app);
			fileAccessCpp << "\nCharacterization " << num << " man" << endl;
			fileAccessCpp << "Name: " << d << "\n" << "How many years: "<< a << "\n" << "Growth: "<< b << endl;
			fileAccessCpp.close();
		};

};

int main(int argc, char* argv[])
{
	int a = 2;
	int b = 0;
	int c = 1;

	cout << "Hello! \n";
	cout << "Welcome my Access :D \n";
	cout << "How many do the tables? [max 50]: ";
	cin >> a;
	a--;
	Character fed[50];

	if (a<=49) {
		do {
			fed[b].masseg(c);
			fed[b].year(c);
			fed[b].growth(c);
			cout << endl;
			b++;
			c++;
		} while (b <= a);
		b = 0;
		c = 1;
		fed[0].fileAccessCpp.open("fileAccessCpp.txt", ios_base::trunc);
		fed[0].fileAccessCpp.close();
		do {
			fed[b].allMs(c);
			cout << "\nTable "<<c<<" is ready\n";
			c++;
			b++;
		} while (b <= a);
	}
	else { cout << "Error! Tabl > 50 \n"; };
	system("pause");
	return 0;
}