/*CS335 LAB04 Challenge 1: 
 * and compare to normal ASCII text.
 * @author: Keith Harryman
 * @date: 10-8-2015
 * @class: cs335 lab4-1
 * @coding style: K&R
 * @desc: LAB4-Challenge 1:Compare hexadecimal digits converted from numbers 
 */
 
#include <iostream>
#include <cstring>
#include <iomanip>
#include <sstream>

using namespace std;

void countStringLength(string);
int cta2=0, ctb2=0, ctc2=0, ctd2=0, cte2=0, ctf2=0;

int main(){
  int nums[14]={111111111,222222222,333333333,444444444,555555555,123456789,234567890,345678901,456789012,567890123,678901234,789012345,890123456,14159265};
  string strs[14];
  int cta=0, ctb=0, ctc=0, ctd=0, cte=0, ctf=0;
  for (int i=0;i<14;i++){
    stringstream ss;
    ss<<hex<<nums[i];
    string res=ss.str();
    strs[i]=res;
  }

  for (int i=0;i<14;i++){
    for (unsigned int j=0;j<strs[i].length();j++){
      if (strs[i][j] == 'a')
        cta++;  
      if (strs[i][j]== 'b')
        ctb++;  
      if (strs[i][j] == 'c')
        ctc++;  
      if (strs[i][j] == 'd')
        ctd++;  
      if (strs[i][j] == 'e')
        cte++;  
      if (strs[i][j] == 'f')
        ctf++;
    }      
  }

  string str2 = "In computer programming, an indent style is a convention governing the indentation of blocks of code to convey the program's structure. This article largely addresses the free-form languages, such as C programming language and its descendants, but can be applied to most other programming languages, especially those in the curly bracket family, where whitespace is otherwise insignificant.";
  countStringLength(str2);
  cout<<"335 Lab-4 Challenge #1"<<endl<<endl;
  cout<<left<<setw(10)<<"letter:"<<right<<setw(3)<<"a"<<setw(3)<<"b"<<setw(3)<<"c"<<setw(3)<<"d"<<setw(3)<<"e"<<setw(3)<<"f"<<endl;
  cout<<setw(10)<<""<<setw(3)<<"--"<<setw(3)<<"--"<<setw(3)<<"--"<<setw(3)<<"--"<<setw(3)<<"--"<<setw(3)<<"--"<<endl;
  cout<<left<<setw(10)<<"numbers:"<<right<<setw(3)<<cta<<setw(3)<<ctb<<setw(3)<<ctc<<setw(3)<<ctd<<setw(3)<<cte<<setw(3)<<ctf<<endl;
  cout<<left<<setw(10)<<"text:"<<right<<setw(3)<<cta2<<setw(3)<<ctb2<<setw(3)<<ctc2<<setw(3)<<ctd2<<setw(3)<<cte2<<setw(3)<<ctf2<<endl<<endl;
  
  if (cta==cta2)
    cout<<"Letter a has same count!"<<endl;
  if (ctb==ctb2)
    cout<<"Letter b has same count!"<<endl;
  if (ctc==ctc2)
    cout<<"Letter c has same count!"<<endl;
  if (ctd==ctd2)
    cout<<"Letter d has same count!"<<endl;
  if (cte==cte2)
    cout<<"Letter e has same count!"<<endl;
  if (ctf==ctf2)
    cout<<"Letter f has same count!"<<endl;

  return 0;
}

/**==================================================================
 * @name: countStringLength
 * @param string
 * @param length: length of str
 * @desc: counts occurences of letters a through f in str
 * @return: none
 * ==================================================================
 */
void countStringLength(string str){
  int len=str.length();
  for (int i=0;i<len;i++){
    if (tolower(str[i])=='a')
      cta2++;  
    if (tolower(str[i])=='b')
      ctb2++;  
    if (tolower(str[i])=='c')
      ctc2++;  
    if (tolower(str[i])=='d')
      ctd2++;  
    if (tolower(str[i])=='e')
      cte2++;  
    if (tolower(str[i])=='f')
      ctf2++;
  }
}

