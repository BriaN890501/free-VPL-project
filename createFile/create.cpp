#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string code = "#include <iostream>\nusing namespace std;\n\nint main()\n{\n    cout << \"hello world\" << endl;\n    system(\"PAUSE\");\n    return 0;\n}";

    fstream file;
    file.open("test.cpp", ios::in);

    if(file)
    {
    	file.close();
        cout << "File has existed" << endl;
        return false;
    }
    else
    {
    	file.close();
    	file.open("test.cpp", ios::out);
	    file << code;
	    file.close();
	}

	return 0;
}