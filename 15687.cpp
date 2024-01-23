class Rectangle {
  int width, height;

public:
  Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
  }
  int get_width() const { return width; }
  int get_height() const { return height; }
  void set_width(int width) { this->width = width; }
  void set_height(int height) { this->height = height; }
  int area() const { return width * height; }
  int perimeter() const { return (width + height) * 2; }
  bool is_square() const {
    if (width == height)
      return true;
    else
      return false;
  }
};