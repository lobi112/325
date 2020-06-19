#include "iostream";
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int start_x, start_y, finish_x, finish_y;

	string input_file_name  = "input.txt";
	string output_file_name = "output.txt";
	string ans;

	ifstream input_file;
	input_file.open(input_file_name);

		start_x = input_file.get();
		start_y = input_file.get();

		input_file.get(); input_file.get();

		finish_x = input_file.get();
		finish_y = input_file.get();

	input_file.close();

	switch ( abs(start_x - finish_x) + abs(start_y - finish_y) )
	{
		case 3: ans = "1"; break;
		case 0: case 2: case 4: case 6: ans = "2"; break;
		default: ans = "NO";
	}


	ofstream output_file;

		output_file.open(output_file_name);
		output_file.clear();
		output_file << ans;

	output_file.close();

	_getch();

	return 0;
}