#ifndef LOGIC_ARRAY_H
#define LOGIC_ARRAY_H

#include <memory>
#include "../other/log.h"
#include "serializable.h"
#include "coords.h"

template <class T>
class double_array : public serializable {
private:
    int width, height;
    std::shared_ptr<std::shared_ptr<T> []> arr = nullptr;

public:
    explicit double_array(coords& capacity);
    explicit double_array(json& package);
    std::shared_ptr<json> pack(int serializer) override;

    T& operator[](coords& index);
    T& operator[](std::shared_ptr<coords> index);
    void clear();

    int size();
    bool empty();
};



template <class T>
double_array<T>::double_array(coords& capacity) {
    static_assert(std::is_convertible<T*, serializable*>::value, "double_array class may only contain serializable objects");
    width = capacity.get_x();
    height = capacity.get_y();
    arr = std::shared_ptr<std::shared_ptr<T> []>(new std::shared_ptr<T> [width * height]);
}

template <class T>
double_array<T>::double_array(json& package) : serializable(package) {
    static_assert(std::is_convertible<T*, serializable*>::value, "double_array class may only contain serializable objects");
    width = package["width"];
    height = package["height"];
    arr = std::shared_ptr<std::shared_ptr<T> []>(new std::shared_ptr<T> [width * height]);
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            arr[i][j] = std::make_shared<T>(package["data"][i][j]);
        }
    }
}

template <class T>
std::shared_ptr<json> double_array<T>::pack(int serializer) {
    std::shared_ptr<json> package = std::make_shared<json>();
    (*package)["width"] = width;
    (*package)["height"] = height;
    (*package)["data"] = json::object();
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            (*package)["data"][i][j] = *(arr[i][j]->pack(serializer));
        }
    }
    return package;
}



template <class T>
T& double_array<T>::operator[](coords& index) {
    if (((index.get_x() >= 0) && (index.get_x() < width)) || ((index.get_y() >= 0) && (index.get_y() < height))) {
        return *(arr[index.get_y() * index.get_x()]);
    } else {
        log::report();
        throw std::runtime_error("Index out of bounds!");
    }
}

template <class T>
T& double_array<T>::operator[](std::shared_ptr<coords> index) {
    if (((index->get_x() >= 0) && (index->get_x() < width)) || ((index->get_y() >= 0) && (index->get_y() < height))) {
        return *(arr[index->get_y() * index->get_x()]);
    } else {
        log::report();
        throw std::runtime_error("Index out of bounds!");
    }
}

template <class T>
void double_array<T>::clear() {
    for (int i = 0; i < this->length; ++i) {
        arr[i] = nullptr;
    }
}



template <class T>
int double_array<T>::size() {
    return width * height;
}

template <class T>
bool double_array<T>::empty() {
    return ((width == 0) && (height == 0));
}


#endif //LOGIC_ARRAY_H