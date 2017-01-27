// A 2-dimensional point class!
// Coordinates are double-precision floating point.
class Point {

private:
  double x_coord;
  double y_coord;
  double z_coord;

public:
  // Constructors
  Point();                                // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double val);
  void setY(double val);
  void setZ(double val);
  void set(double x, double y, double z);
  
  // Accessor methods
  double getX();
  double getY();
  double getZ();

  // Distance
  double distanceTo(const Point &point) const;
};
