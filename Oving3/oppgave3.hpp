#pragma once
#include <string>
using namespace std;

const double moms = 1.25;

class Commodity {
    public:
      Commodity(const string &name_, int id_, double price_);
      const string &get_name() const;
      int get_id() const;
      double get_price() const;
      double get_price(double quantity) const;
      void set_price(double new_price);
      double get_price_with_sales_tax() const;
      double get_price_with_sales_tax(double quantity) const;

    private:
      string name;
      int id;
      double price;
};

Commodity::Commodity(const string &name_, int id_, double price_)
    : name(name_), id(id_), price(price_) {}

const string &Commodity::get_name() const {
  return name;
}

int Commodity::get_id() const{
  return id;
}

inline double Commodity::get_price() const {
  return price;
}

double Commodity::get_price(double quantity) const{
  return price * quantity;
}

void Commodity::set_price(double new_price) {
  price = new_price;
}

inline double Commodity::get_price_with_sales_tax() const {
  return price * moms;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
  return price * quantity * moms;
}