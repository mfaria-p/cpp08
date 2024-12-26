#include "Span.hpp"

int main() {
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    try {
        sp.addNumber(11);
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    Span sp2 = Span(10000);
    std::vector<int> v;
    for (int i = 0; i < 10000; i++)
        v.push_back(i);
    try {
        sp2.addNumbers(v.begin(), v.end());
    } catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    return 0;
}