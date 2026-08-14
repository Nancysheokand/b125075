#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    char *arr = new char[n];

    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(arr, n);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        // Check vowel
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' ||
            arr[i] == 'o' || arr[i] == 'u' ||
            arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
            arr[i] == 'O' || arr[i] == 'U')
        {
            vowels++;
        }

        // Check consonant
        else if ((arr[i] >= 'a' && arr[i] <= 'z') ||
                 (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            consonants++;
        }

        // Check digit
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            digits++;
        }

        // Check space
        else if (arr[i] == ' ')
        {
            spaces++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces << endl;

    delete[] arr;

    return 0;
}
