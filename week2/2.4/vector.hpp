#ifndef VECTOR_HPP
#define VECTOR_HPP

/// @file

/// \brief
/// vector ADT
/// \details
/// This is an ADT that implements vector values.
/// The x and y are stored as two integers.
/// The appropriate constructors and operators are provided.

class vector{
private:
    int x;
    int y;
public:

    /// \brief
    /// constructor from explicit values
    /// \details
    /// This constructor initializes the x and y value of the vector.
    vector( int x, int y):
    x(x),
    y(y)
    {}

    /// \brief
    /// compare two vectors
    /// \details
    /// This operator checks if both vectors are equal.
    /// It returns true if both vectors are equal.
    bool operator==( const vector & rhs ) const {
       return ( x == rhs.x ) && ( y == rhs.y );
    }

    /// \brief
    /// outputs the vector values
    /// \details
    /// This operator prints the vector in this format
    /// x = (value)
    /// y = (value)
    friend std::ostream & operator<<(std::ostream & lhs, vector v){
        return lhs 
            << "x = " 
            << v.x 
            << "\ny = " 
            << v.y
            << "\n";
    }

    /// \brief
    /// return vector
    /// \details
    /// This operator return its vector.
    vector operator+() const{
        return *this;
    }

    /// \brief
    /// adds a vector by an vector
    /// \details
    /// This operator adds the the vectors x value
    /// with the other vectors x value and the same
    /// for the y values.
    vector operator+(const vector & rhs)const{
        return vector(x + rhs.x, y + rhs.y);
    }

    /// \brief
    /// adds a vector to another vector
    /// \details
    /// This operator adds the values of x and y to another
    /// vectors x and y values.
    vector & operator+=(vector rhs){
        x += rhs.x;
        y += rhs.y;
        return *this;
    }

    /// \brief
    /// multiplies a vector with an integer
    /// \details
    /// This operator multiplies the x and y value
    /// of the vector with an integer.
    vector operator*(const int & a){
        return vector(x * a , y * a);
    }

    /// \brief
    /// multiplies an vector with an integer to himself
    /// \details
    /// This operator multiplies an vectors x and y values
    /// with an integer and returns those values back to
    /// the vector.
    vector & operator*=(int a){
        x *= a;
        y *= a;
        return *this;
    }
};

/// \brief
/// multiplies a vector with an integer
/// \details
/// This operator multiplies the x and y value
/// of the vector with an integer.
vector operator*(int a, vector rhs){
    return (rhs * a);
};

#endif // VECTOR_HPP
