/**
 * @author: Jacob French
 * @date: 10/8/2015
 * @class: cs335
 * @coding style: K&R
 * @desc: This program takes a string and counts the number of occurences for 
 * each letter then prints them to the console.
 */


#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct counter{
  string letter;
  int tally;
  
} tallyKeeper;
void bubbleSort(vector<counter> vec);
void printResults(vector<counter> vec, int length);
vector<counter> getLetterTally(string stringToSearch);

int main(){

  string stringToSearch = 
  "CIJXJMWFAOZWBRSETBPNMKNBZKTUAOFUKCWFCXZYISCKKHPB"
  "UAFNFTHRLYSOVBGYKNBCAPMBOIEEULDCXUTCBWVGRSYY"
  "KCCPSOWXCEAFMLDOZPVAHCTKXEYSBVHRGEYINRFTUJZJ"
  "LNRDQUCORRTPZXWJSRSDWXHSHUSJBCKQVGPUKYWISTBC"
  "UDQAADABTQPOGPSZUGJBQQBIDCUQGMZVCOLUBIXDAJOQOV" 
  "IURUNJWTSMSJFUJNCISMLRGXWKSXPGKGYHZEEUHVNIFEYH" 
  "CLQNNBOUHMBLSIYHCLXPESDCVFDQTMZHVKMZZS";
  bubbleSort(getLetterTally(stringToSearch));

}



/**==================================================================
 * @name: getLetterTally
 * @param stringToSearch: string to be searched for char occurences.
 * @desc: takes a string that will be searched for char occurences
 * @return: a vector of counter structs sorted by char occurences.
 * ==================================================================
 */
vector<counter> getLetterTally(string stringToSearch){
  int total = 0;
  vector <counter> countVector;
  for(unsigned int i = 32; i != 128; ++i){
    for(unsigned int j = 0; j < stringToSearch.length(); j++){
      if((char)i == stringToSearch[j]){
	total++;
      }
    }
    
    if(total > 0){
      tallyKeeper.letter = (char)i;
      tallyKeeper.tally = total;
      countVector.push_back(tallyKeeper);
    }
      
    total = 0;
    
  }
  
  return countVector;
  
}



/**==================================================================
 * @name: bubbleSort
 * @param vec: vector of counter structs
 * @desc: takes a vector of structs and sorts it in decending order 
 * using a bubble sort, then sends it to be printed.  
 * @return: none
 * ==================================================================
 */
void bubbleSort(vector<counter> vec){
  int length = vec.size();
  counter temp;
  for(unsigned int i = 1; i < length; i++){
    for(unsigned int j = 0; j < length - i; j++){
      if(vec[j].tally < vec[j+1].tally){
	temp = vec[j];
	vec[j] = vec[j+1];
	vec[j+1] = temp;
      }
    }
  }
  
  printResults(vec, vec.size());
}



/**==================================================================
 * @name: printResults
 * @param vec: vector of counter structs
 * @param length: length of vec
 * @desc: prints every letter in counter stuct by most occuring
 * letter.
 * @return: none
 * ==================================================================
 */
void printResults(vector<counter> vec, int length){
  for(unsigned int i = 0; i < length; i++){
    for(unsigned int j = 0; j < vec[j].tally; j++){
      cout << vec[i].letter;
    }
  
  }
  cout << endl;
  
}
