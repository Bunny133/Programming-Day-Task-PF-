// #include <iostream>
// #include <fstream>
// using namespace std;

// void readnames();

// int main()
// {

//     return 0;
// }
// void readnames()
// {
//     int age;
//     string name;
//     string line;
//     fstream File;
//     File.open("names.txt", ios::in);
//     File >> line;

//     File.close();
//     cout << name << endl;
//     cout << age;
// }

#include <iostream>

using namespace std;

// Morse code dictionary
const char *morse_lookup(char c)
{
    const char *morse_codes[] = {
        ".-",   // A
        "-...", // B
        "-.-.", // C
        "-..",  // D
        ".",    // E
        "..-.", // F
        "--.",  // G
        "....", // H
        "..",   // I
        ".---", // J
        "-.-",  // K
        ".-..", // L
        "--",   // M
        "-.",   // N
        "---",  // O
        ".--.", // P
        "--.-", // Q
        ".-.",  // R
        "...",  // S
        "-",    // T
        "..-",  // U
        "...-", // V
        ".--",  // W
        "-..-", // X
        "-.--", // Y
        "--.."  // Z
    };

    if (c >= 'A' && c <= 'Z')
    {
        return morse_codes[c - 'A'];
    }
    else
    {
        return " ";
    }
}

string to_morse(string plaintext)
{
    string morsecode = "";
    for (int i = 0; i < plaintext.size(); i++)
    {
        char c = plaintext[i];
        if (isalpha(c))
        {
            morsecode += morse_lookup(c);
        }
        if (i < plaintext.size() - 1)
        {
            morsecode += " "; // Space between characters
        }
    }
    return morsecode;
}

int main()
{
    // Example usage
    string plaintext = "Hello World!";
    string morsecode = to_morse(plaintext);
    cout << morsecode << endl;
    return 0;
}