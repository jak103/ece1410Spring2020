#ifndef FRACTION_HPP
#define FRACTION_HPP

class Fraction
{
  public:
    Fraction();
    Fraction(int num, int den)
    {
      m_num = num;
    }

    int getNum()
    {
      return m_num;
    }
    
    int getDen();
   
    friend Fraction operator + (Fraction bob, Fraction shelby);
    
    Fraction operator - (Fraction other);

  private:
    int m_num;
    int m_den;

};


ostream& operator << (ostream& out, Fraction fraction)
{
  out << fraction.getNum() << "/" << fraction.getDen();

  return out;
}

#endif