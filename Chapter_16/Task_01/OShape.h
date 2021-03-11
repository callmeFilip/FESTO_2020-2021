#ifndef OSHAPE_H
#define OSHAPE_H

class Shape
{
private:
public:
    virtual ~Shape() {}
};

class Square : public Shape
{
private:
public:
    virtual ~Square() {}
};

class Circle : public Shape
{
private:
public:
    virtual ~Circle() {}
};

class Triangle : public Shape
{
private:
public:
    virtual ~Triangle() {}
};

class Object
{
private:
public:
    virtual ~Object();
};

class OShape : public Object
{
private:
public:
    virtual ~OShape();
};

class OCircle : public Circle, public OShape
{
private:
public:
    ~OCircle() {}
};

class OSquare : public Square, public OShape
{
private:
public:
    ~OSquare();
};

class OTriangle : public Triangle, public OShape
{
private:
public:
    ~OTriangle();
};

#endif // OSHAPE_H
