#ifndef DisplayText_hpp
#define DisplayText_hpp

class DisplayText {
  StyleSheet styleSheet;
  public:
  
  void setStyleSheet(StyleSheet & _styleSheet);
  std::string getText(std::string & text);
};

#endif /* DisplayText_hpp */
