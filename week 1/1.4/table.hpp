#ifndef TABLE_HPP
#define TABLE_HPP


class table{
private:
    int n_legs;
    double length;
    double width;

public:

    table(int n_legs, double length, double width):
        n_legs(n_legs),
        length(length),
        width(width)
    {}

    void plus_poot();
    void print_table();
};

#endif // TABLE_HPP