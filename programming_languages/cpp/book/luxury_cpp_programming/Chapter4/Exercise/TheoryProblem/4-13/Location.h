class Location {
private:
    int width, height;
public:
    Location() {
        this->width = 0;
        this->height = 0;
    }
    Location(int w, int h) {
        this->width = w;
        this->height = h;
    }
    void show();
};
void Location::show() {
    cout << this->width << ", " << this->height << endl;
}