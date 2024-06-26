#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void replaceSubstring(std::string& str, const std::string& s1, const std::string& s2) {
	size_t	pos = 0;
	while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length();
    }
}

int main(int argc, char **argv)
{
	if (argc < 4 || argc > 4) {
		std::cerr << "Error: Wrong amount of Arguments " << std::endl;
		return 1;
	}
	std::string	srcFilename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string desFilename = srcFilename + ".replace";

	std::ifstream srcFile(srcFilename.c_str(), std::ios::in);
    if (!srcFile) {
        std::cerr << "Error: Cannot open source file " << srcFilename << std::endl;
        return 1;
    }
	std::ofstream desFile(desFilename.c_str(), std::ios::out);
    if (!desFile) {
        std::cerr << "Error: Cannot create destination file " << desFilename << std::endl;
        srcFile.close();
        return 1;
    }

	std::ostringstream oss;
	oss << srcFile.rdbuf();
    std::string content = oss.str();
	replaceSubstring(content, s1, s2);
    desFile << content;

    srcFile.close();
    desFile.close();

	return (0);
}