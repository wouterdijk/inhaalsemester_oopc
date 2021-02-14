#ifndef STOOL_HPP
#define STOOL_HPP


class stool{
private:
    int n_legs;
    int n_seats;

public:

    stool(int n_legs, int n_seats):
        n_legs(n_legs),
        n_seats(n_seats)

    {}
    
    void min_poot();
    void print_stool();
};

#endif // STOOL_HPP