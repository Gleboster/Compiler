
#ifndef COMPILER_TABLE_H
#define COMPILER_TABLE_H

#include <vector>
#include <string>

using namespace std;

template<typename T1>
class Table {
    class TableRow {
        int position;
        T1 t1;
    public:
        short width() { return 1; }

        TableRow(int pos) : position(pos) {};

        TableRow(int pos, T1 par1) : position(pos), t1(par1) {};

        int getPosition() {
            return position;
        }

        T1 get1() {
            return t1;
        }
    };

    vector<string> header;
    vector<TableRow> rows;
public:
    Table(const vector<string> &header) {
        setHeader(header);
    }

    short width() {
        return 2;
    };

    int height() {
        return rows.size();
    }

    void setHeader(const vector<string> &_header) {
        header = vector<string>(width());

        for (int i = 0; i < width(); ++i)
            header[i] = _header[i];
    }

    void addRow(T1 object) {
        rows.push_back(TableRow(height(), object));
    }

    TableRow operator[](int row) {
        return rows[row];
    }
};


#endif //COMPILER_TABLE_H
