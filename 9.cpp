#include <iostream>



int addnum(int add1, int add2)
{

    std::cout << "This function add " << add1 << " and "
        << add2 << ". " << " The result is " << add1 + add2 << ".\n";

    int addn = add1 + add2;

    return addn;
}

int subnum(int sub1, int sub2)
{

    std::cout << "This function subtract " << sub1 << " and "
        << sub2 << ". " << "The result is " << sub1 - sub2 << ".\n";

    int subg = sub1 - sub2;

    return subg;

}


int multnum(int mult1, int mult2)
{

    std::cout << "This function multiply " << mult1 << " and "
        << mult2 << ". " << "The result is " << mult1 * mult2 << ".\n";

    int multi = mult1 * mult2;

    return multi;

}


float divnum(float divi1, float divi2)
{

    std::cout << "This function divide " << divi1 << " and "
        << divi2 << ". " << "The result is " << divi1 / divi2 << ".\n";

    float divid = divi1 / divi2;

    return divid;
}

int main() {

    addnum(23, 12);

    subnum(23, 12);

    multnum(23, 12);

    divnum(23, 12);

    return 0;

}
