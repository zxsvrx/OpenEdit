#ifndef TextEditor_hpp
#define TextEditor_hpp

#include "Text.hpp"

class TextEditor : public Text {
  unsigned int cursorX;
  unsigned int cursorY;
  unsigned int selectionStart;
  unsigned int selectionEnd;
  std::vector<PreReader> activePreReaders;
  public:
  
  int addPreReader(PreReader & pr);
  void removePreReader(int id);
  
  void setCursor(unsigned int x, unsigned int y);
  void moveCursor(int x, int y);
  
  void add(char c); 
  void remove();
}

#endif /* TextEditor_hpp */
