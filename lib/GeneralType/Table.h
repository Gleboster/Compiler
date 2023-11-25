
#ifndef COMPILER_TABLE_H
#define COMPILER_TABLE_H

#include <vector>

template<typename T>
class Table {
    std::vector<T> rows;

public:
    void setHeader();

    T operator[](int row);
};


#endif //COMPILER_TABLE_H
