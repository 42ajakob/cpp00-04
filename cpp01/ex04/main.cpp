#include <iostream>
#include <string>
#include <fstream>

void replaceSubstring(std::string& str, const std::string& s1, const std::string& s2) {
	size_t	pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int main(/*int argc, char **argv*/)
{
	// if (argc < 4 || argc > 4) {
	// 	std::cerr << "Error: Wrong amount of Arguments " << std::endl;
	// 	return 1;
	// }
	// std::string	srcFilename = argv[1];
	// std::string s1 = argv[2];
	// std::string s2 = argv[3];
	// std::string desFilename = srcFilename + ".replace";

	std::string srcFilename;
	std::string s1;
	std::string s2;
	std::cout << "Enter the source file name: ";
    std::cin >> srcFilename;
	std::string desFilename = srcFilename + ".replace";
    std::cout << "Enter the string to be replaced (s1): ";
    std::cin >> s1;
    std::cout << "Enter the replacement string (s2): ";
    std::cin >> s2;

	std::ifstream srcFile(srcFilename, std::ios::in);
    if (!srcFile) {
        std::cerr << "Error: Cannot open source file " << srcFilename << std::endl;
        return 1;
    }
	std::ofstream desFile(desFilename, std::ios::out);
    if (!desFile) {
        std::cerr << "Error: Cannot create destination file " << desFilename << std::endl;
        srcFile.close();
        return 1;
    }

	std::string line;
    while (std::getline(srcFile, line)) {
        replaceSubstring(line, s1, s2);
        desFile << line << std::endl;
    }
    srcFile.close();
    desFile.close();

	return (0);
}