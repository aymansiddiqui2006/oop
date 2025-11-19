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