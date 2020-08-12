#include <iostream>

void SplitMessage( const string& message,
                   vector<string>& words,
                   vector<string>& keys,
                   string& final_key );
void DecodeMessage(  vector<string>& words,
                   const vector<string>& keys );        
void DecodeWord( const string& word_encoded, 
                 const string& key,
                 string& word_decoded );
bool PrintMessage( const vector<string>& decoded_message,
                   const string& final_key );     
size_t  StringToInt( const string& snum);    
void ReplaceCodeWords( vector<string>& decoded_message );   
void DecodeNumericalKey( const string& key, vector<size_t>& key_pos);
                    
                          
int main()
{
    
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
