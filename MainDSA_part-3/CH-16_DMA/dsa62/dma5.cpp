#include <iostream>
using namespace std;
// dsa 62

// dma with oop
template <typename T>
class Collection
{
private:
    int size;
    T *arr;
    // 5
    int index = 0;

public:
    //  1 constructor
    Collection(int size)
    {
        // array allocated
        this->size = size;
        arr = new T[size];
        if (arr != nullptr)
        {
            cout << endl
                 << "Allocate " << endl;
        }
    }

    // 3
    void fetch()
    {
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }

    // 4
    void insert(int index, T value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
        }
    }

    // 5 push
    void push(T value)
    {
        if (index = 0 && index < this->size)
        {
            arr[index] = value;
            index++;

            // index++ na kariye to aagal maa value store thase baki ma garbage value aavse,to ema insert no use karine add karvanu
        }
    }

    //   2  destuctor
    ~Collection()
    {
        // array delocate
        delete[] arr;
        arr = nullptr;

        if (arr == nullptr)
        {
            cout << endl
                 << "delocate " << endl
                 << endl;
        }
    }
};

int main()
{
    Collection<int> c1(3);
    Collection<char> c2(7);
    // Collection<char> c1('a');
    // Collection<float> c1(2.3);

    // c1.insert(0, 10);
    // c1.insert(1, 20);
    // c1.insert(2, 30);

    c1.push(1010);
    c1.push(2020);
    c1.push(3030);

    c2.push('s');
    c2.push('h');
    c2.push('e');
    c2.push('e');
    c2.push('t');
    c2.push('a');
    c2.push('l');

    c1.fetch();
    c2.fetch();

    return 0;
}