#ifndef COLOR_H
#define COLOR_H

enum Hue
{
    RED,
    BLUE,
    YELLOW
};

class Color
{
private:
    Hue color;

public:
    Color(Hue n_color) : color(n_color) {}

    Hue getColor() const { return color; };
    void setColor(const Hue n_color) { color = n_color; };
};

#endif
