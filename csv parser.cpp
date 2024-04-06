// с таким не справляется: ""Вот,а?""

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const std::string in_data = \
    """Вот,а?"",0,-1.2,4,5\n"
    "0,2,4,6,8\n"
    "1,3,\"\",7,9\n";


void ParseCSV(const string& csvSource, vector<vector<string> >& lines)
    {
       bool inQuote(false);
       bool newLine(false);
       string field;
       lines.clear();
       vector<string> line;

       string::const_iterator aChar = csvSource.begin();
       while (aChar != csvSource.end())
       {
          switch (*aChar)
          {
          case '"':
             newLine = false;
             inQuote = !inQuote;
             break;

          case ',':
             newLine = false;
             if (inQuote == true)
             {
                field += *aChar;
             }
             else
             {
                line.push_back(field);
                field.clear();
             }
             break;

          case '\n':
          case '\r':
             if (inQuote == true)
             {
                field += *aChar;
             }
             else
             {
                if (newLine == false)
                {
                   line.push_back(field);
                   lines.push_back(line);
                   field.clear();
                   line.clear();
                   newLine = true;
                }
             }
             break;

          default:
             newLine = false;
             field.push_back(*aChar);
             break;
          }

          aChar++;
       }

       if (field.size())
          line.push_back(field);

       if (line.size())
          lines.push_back(line);
    }

int main(int argc, char *argv[]) {
    vector<vector<string>> res;
    ParseCSV(in_data, res);
    return 0;
}

