#include <string>
typedef int rgb;
class Shape{
    private:
        int x;
        int y;
    protected:
        rgb fill;
        rgb border;
    public:
    Shape(int x,int y){
        this->x=x;
        this->y=y;
    }
    inline int getX(){
        return this->x;
    }
    inline int getY(){
        return this->y;
    }
    inline void setX(int x){
        this->x=x;
    }
    inline void setY(int y){
        this->y=y;
    }
    virtual void draw()=0;
    virtual int getSurface()=0;
};
class Rectangle: public Shape{
    private:
        int width;
        int length;
    public:
        Rectangle(int width, int length):Shape(0,0){
            this->width=width;
            this->length=length;
        }
        int getSurface(){
            return 1;
        }
        virtual void draw(){};//declare this because it will get error if not declaring a virtual func
};
class Square: public Shape{
    private:
        int width;
    public:
        Square(int width):Shape(0,0){
            this->width = width;
        }
        virtual int getSurface(){
            return 1;
        }
        virtual void draw(){};//declare this because it will get error if not declaring a virtual func
};

int main()
{
    Square *test = new Square(3);
    Square test2(4);
    Rectangle *test3= new Rectangle(3,3);
    return 0;
}