#include "lambdas.h"
#include <fmt/core.h>
#include <vector>
#include <iostream>

// [capture clause] (parameters) -> return type
// {
//      definition   
// }

void DoLambdaStuff() {
    std::vector v1 = {3, 4, 2, 3};
    std::vector v2 = {4, 2, 3, 2};

    //  capture v1 and v2 by reference
    auto pushInto = [&] (int m) {
        v1.push_back(m);
        v2.push_back(m);
    };

    constexpr int N = 20;
    constexpr int M = 5;


    // now use this lambda
    pushInto(N);

    // access v1 by copy capture
    [v1]() {
        for (const int p : v1) {
              fmt::print("{}\n", p);
        }
    }();

 
    // below snippet find first number greater than N
    // [N]  denotes,   can access only N by value
    auto p = std::find_if(v1.begin(), v1.end(), [](int i)
    {
        return i > M;
    });
 

    fmt::print("First number greater than {} is {}\n", M, *p);

    // auto lambdas in c++ 14
    auto sum = [](auto a, auto b) {return a + b;};
    const auto lamRes = sum(1, 2);
    fmt::print("sum  is {}\n", lamRes);


}
