#include <iostream>
#include <fstream>
#include <string>

// ��� ��������� ����.���������, �������
// ��� � ��� ����������� �������� ������������� �����.


int main()
{
    setlocale(LC_ALL, "ru");

    std::cout << "������� ����� : ";
    std::string str_file;                                            
    std::string str_user;                                            

    std::string File_name = "file_str.txt";
    std::ifstream Reader_FILE;   //   R    

    Reader_FILE.open(File_name);

    if (!Reader_FILE)                                                  
    {
        std::cout << "file_str open error";
        return -1;
    }
    else
    {
        std::cin >> str_user;
        int iter = 0;                                                     

        while (Reader_FILE >> str_file)                                            
        {
            const char* found = strstr(str_user.c_str(), str_file.c_str());    // ����� ������ � ������ ������ 
            if (found)                                                 
            {
                iter++;                                                
            }
        }

        Reader_FILE.close();                                           

        std::cout << "����� " << str_user << " � ����� ����������� =  " << iter << std::endl;
    }
    
    return 0;
}

