#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	// Variable to store the file Name
	string file1, file2;
	// Get the file name from the user
	cout<<"Enter the name of first file::";
	cin>>file1;
	cout<<"Enter the name of second file::";
	cin>>file2;
	
	// Open the files in the text mode
	ifstream input1("file1.txt");
	ifstream input2("file2.txt");
	
	// Check if the files are successfully opened
	if(!input1 || !input2)
	{
		cout<<"Error opening one of the files!"<<endl;
	}
	
	// Variables to store the word counts
     int count1 = 0, count2 = 0;
    // Count the number of words in each file
	string word1, word2;
	if (word1 == word2) {
    // The words are the same, so increment both counts
      count1++;
      count2++;
    }
	 else
	{
    // The words are different, so only increment one count
      count1++;
      count2++;
    }
    // Print the results
	cout << "Total number of words in file 1: " << count1 << endl;
	cout << "Total number of words in file 2: " << count2 << endl;
	// Calculate the percentage similarity
	cout << "Percentage similarity: " << (double)count1 / count2 * 100 << "%" << endl;
	return 0;
  }

