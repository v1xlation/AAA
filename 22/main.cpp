#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // »нициализаци€ генератора случайных чисел
    srand(time(NULL));

    // »мена файлов
    const char* filenames[3] = {
        "file1.txt",
        "file2.txt",
        "file3.txt"
    };

    // —оздание и заполнение файлов
    for (int i = 0; i < 3; i++)
    {
        ofstream file(filenames[i]);

        if (!file.is_open())
        {
            cout << "ќшибка открыти€ файла " << filenames[i] << endl;
            return 1;
        }

        for (int j = 0; j < 10; j++)
        {
            int number = rand() % 10 + 1; // диапазон 1Ц10
            file << number;

            if (j < 9)
                file << " ";
        }

        file.close();
    }

    cout << "‘айлы успешно созданы и заполнены." << endl;
    return 0;
}
