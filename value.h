int value(char ch, int count){
  int _val = 0;
  switch(ch){
    '1': _val = 10; break;
    'J': _val = 10; break;
    'Q': _val = 10; break; 
    'K': _val = 10; break;
    'A': _val = count > 11 ? 1 : 11; break;
    default: _val = ch - '0'; break;
  }

  return _val;
}
