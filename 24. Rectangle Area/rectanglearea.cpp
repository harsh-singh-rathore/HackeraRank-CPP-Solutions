#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle
 {
    protected:
        int length, breadth;
    public:
        void read_input() {
            cin >> length >> breadth;
        }
        void display() {
            cout << length << " " << breadth << endl;
        }
 };
 class RectangleArea : public Rectangle
 {
    public:
        void display() {
            cout << length*breadth << endl;
        }
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}