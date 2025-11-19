#include<bits/stdc++.h>
using namespace std;

// int main() {
//     // Open a file
//     ofstream file("real_file.txt");

//     // Write the string to the file
//     file << "Welcome to GeeksforGeeks.";
//     return 0;
// }


// using namespace std;
// int main()
// {
//     // Open a file in read mode
//     ifstream file("real_file.txt");
//     string s;
//     // Read string from the file
//     file >> s;
//     cout << "Read String: " << s;
//     return 0;
// }


// Closing the File

// #include <bits/stdc++.h>
// using namespace std;
int main()
{
    // Open a file in read mode
    ifstream file("real_file.txt");
    string s;
    // Read string from the file
    getline(file, s);
    cout << "Read String: " << s;
    // Close the file
    file.close();
    return 0;
}
