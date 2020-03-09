#ifndef Punkt2_h
#define Punkt2_h

class Punkt2
{
    double x = 0.0;
    double y = 0.0;
    static int countClasses;
    

public:
    Punkt2();
    
    Punkt2(double _x, double _y);
    
    Punkt2(const Punkt2 & p);
    
    ~Punkt2();
    
    Punkt2 operator+(Punkt2 const &a) const;
    Punkt2 operator-(Punkt2 const &a) const;
    Punkt2 operator*(Punkt2 const &a) const;
    
    void setX(double _x);
    
    void setY(double _y);
    
    double getX() const;
    
    double getY() const;
    
    double getRadius();
    
    double getAngle();
    
    double getDistance(Punkt2 _p);
    
    static int getCountClasses();
};

#endif /* Punkt2_h */
