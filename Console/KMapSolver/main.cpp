#include "filterkmapresults.h"
#include "operation.h"
#include "karnaughmap.h"
#include "graycodehandler.h"
#include "include/Lepton.h"
#include "expressionhandler.h"
#include <QString>

int main ()
{

//    Kmap k1;
    KarnaughMap k;
    vector <int> on1{0, 1, 7, 6};
//    on1.push_back(0);
//    on1.push_back(1);
//    on1.push_back(2);
    vector <int> dc;
//    dc.push_back(3);
    k.setType(3);
    k.setResultType(true);
    k.setOnesPosition(on1);
    cout << endl;
    cout << k.getResult() << endl;
//    vector<string> gc = generateGrayCodeSequence(3);
    std::string expr = "AB+CD+EF";

    cout << countVariable(expr) << endl;

}//end main
