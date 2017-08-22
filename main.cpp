#include <iostream>
#include <type_traits>
#include "seephit.h"
using namespace std;



int main()
{
  constexpr auto parser = 
    #include "test/large_template.spt"
    
  REPORT_ERRORS(parser);
    
  spt::tree spt_tree(parser);
  spt::template_dict dct;
  spt_tree.root.render(cout, dct);
  cerr << endl;
}


