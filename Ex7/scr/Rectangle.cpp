#include <iostream>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;

    public:
        void setlength(float i){
            length = i;
        }

        void setwidth(float i){
            width = i;
        }

        float perimeter(){
            return 2 * (length + width);
        }

        float area(){
            return length * width;
        }

        void show(){
            cout << "Length: " << length << "   Width: " << width << endl;
        }

        int sameArea(Rectangle r){
            float a1 = area();
            float a2 = r.area();
            return a1 == a2;
        }
};

int main(){
    Rectangle r1, r2;
    r1.setlength(5);
    r1.setwidth(2.5);
    r2.setlength(5);
    r2.setwidth(18.9);
    cout << "the first rectagle\n"; 
    r1.show();

    cout << "Area: " << r1.area() << "     Perimeter: " << r1.perimeter() << endl;

    cout << "the second rectagle\n";
    r2.show();

    cout << "Area: " << r2.area() << "     Perimeter: " << r2.perimeter() << endl;

    if(r1.sameArea(r2)){
        cout << "they have the same area\n";
    }else{
        cout << "they have different areas\n";
    }

    r1.setlength(15);
    r1.setwidth(6.3);

    cout << "the first rectagle\n"; 
    r1.show();

    cout << "Area: " << r1.area() << "     Perimeter: " << r1.perimeter() << endl;

    cout << "the second rectagle\n";
    r2.show();

    cout << "Area: " << r2.area() << "     Perimeter: " << r2.perimeter() << endl;

    if(r1.sameArea(r2)){
        cout << "they have the same area\n";
    }else{
        cout << "they have different areas\n";
    }
    return 0;
}
