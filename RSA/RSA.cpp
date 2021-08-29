#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Выделение памяти под строку названия файла
    char* fname = new char[255];
    cout << "Enter input file name: ";
    cin.getline(fname, 255);

    // Открытие файлов для считывания и записи
    ifstream ist(fname);
    ofstream ost("out.txt");

    // Если файл не был найден, то программа сообщит об этом и завершится с ошибкой -1
    if (!ist.is_open()) {
        cout << "File \"" << fname << "\" not found!\n";
        return -1;
    }

    // Построчное считывание файла и его обработка
    char text[255];
    int k = 0;
    while (ist.getline(text, 255)) {
        // функция обработки символов
        ost << endl;
        k++;
    }

    // Закрытие файлов
    ist.close();
    ost.close();


    // Если в файле не было строк, то выводит сообщение об ошибке
    if (k == 0) {
        cout << "File \"" << fname << "\" is empty" << endl;
    }
    else {
        cout << "File \"out.txt\" is ready" << endl;
    }
    return 0;

}