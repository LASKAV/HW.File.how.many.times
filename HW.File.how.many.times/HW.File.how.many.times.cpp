#include <iostream>
#include <fstream>
#include <string>

// Дан текстовый файл.Посчитать, сколько
// раз в нем встречается заданное пользователем слово.


int main()
{
    setlocale(LC_ALL, "ru");

    std::cout << "Введите слово : ";
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
            const char* found = strstr(str_user.c_str(), str_file.c_str());    // поиск строки в другой строке 
            if (found)                                                 
            {
                iter++;                                                
            }
        }

        Reader_FILE.close();                                           

        std::cout << "Слово " << str_user << " в файле повторялось =  " << iter << std::endl;
    }
    
    return 0;
}

