
#include <iostream>
using namespace std;

class Image
{
protected:
    int width, height;

public:
    Image(int w, int h)
    {
        width = w;
        height = h;
    }
};

class CompressedImage : public Image
{
protected:
    float compression;

public:
    CompressedImage(int w, int h, float c)
        : Image(w, h)
    {
        compression = c;
    }
};

class EncryptedImage : public CompressedImage
{
    string algorithm;

public:
    EncryptedImage(int w, int h, float c, string a)
        : CompressedImage(w, h, c)
    {
        algorithm = a;
    }

    void display()
    {
        int original = width * height;
        float effective = original * compression / 100;

        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Original Pixels: " << original << endl;
        cout << "Compression: " << compression << "%" << endl;
        cout << "Effective Pixel Size: " << effective << endl;
        cout << "Encryption Algorithm: " << algorithm << endl;
    }
};

int main()
{
    int w, h;
    float c;
    string a;

    cout << "Enter width and height: ";
    cin >> w >> h;

    cout << "Enter compression percentage: ";
    cin >> c;

    cout << "Enter encryption algorithm: ";
    cin >> a;

    EncryptedImage img(w, h, c, a);
    img.display();

    return 0;
}
