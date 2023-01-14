#include <iostream>
#include <string>
#include <vector>

#ifndef Text_hpp
#define Text_hpp

class Text {
  protected:
  std::vector<std::string> lines;
  public:
  
  Text          getText();
  std::string   getLine(unsigned int line);
  std::string   getTextAsString();
  unsigned int  getLineLength(unsigned int line);
  unsigned int  getLineCount();
  unsigned int  getTextLength();
};

#endif /* Text_hpp */
