#include <iostream>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "test" << endl;
	int result;
	char oldname[] = "oldname.cpp";
	char newname[] = "newname.cpp";
	
	cout << "oldname: ";
	cin >> oldname;

	cout << "newname: ";
	cin >> newname;

	result = rename(oldname, newname);
	if (result == 0 ) {
		cout << "success";
	}
	else {
		perror("Error");
	}
	return 0;
}
