// EnumGit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "header.h"


int main()
{
    // comment 2
    // comment 3
    simple1 s1_1 = simple1::s52;
    std::cout << "size1_1 = " << sizeof(simple1::s51) << std::endl;
    std::cout << "size1_2 = " << sizeof(s1_1) << std::endl;
    PAS_NIBP_INTVL_TIME s3_1 = PAS_INTVL_TIME_25_MIN;
    std::cout << "size3_1 = " << sizeof(PAS_NIBP_INTVL_TIME::PAS_INTVL_TIME_11_MIN) << std::endl;
    std::cout << "size3_1 = " << sizeof(s3_1) << std::endl;
    ec4 s4_1 = ec4::c1;
    std::cout << "size4_1 = " << sizeof(ec4::c2) << std::endl;
    std::cout << "size3_1 = " << sizeof(s4_1) << std::endl;
    const branch2 b2 = yellow;
    ec5 s5 = ec5::test;
    getchar();
    return 0;
}

