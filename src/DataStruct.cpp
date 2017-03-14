#include "headers.h"

void Vector::init(const int& dimision) {
    this->dimision = dimision;
    if (dimision <= 0) {
        dim = NULL;
    } else {
        dim = new float[dimision];
    }
}

Vector::~Vector() {
    if (dim != NULL)
        delete [] dim;
}

float Vector::operator*(const Vector& v) const {
    if (dimision != v.dimision) {
        printf("[Vector] operator*(), dimision error.\n");
        exit(0);
    }
    float val = 0.0;
    for (int i = 0; i < dimision; ++i)
        val += dim[i] * v.dim[i];
    return val;
}

float Vector::distance(const Vector& v) const {
    if (dimision != v.dimision) {
        printf("[Vector] distance(), dimision error.\n");
        exit(0);
    }
    float dist = 0.0;
    for (int i = 0; i < dimision; ++i)
        dist += (dim[i] - v.dim[i]) * (dim[i] - v.dim[i]);
    return sqrt(dist);
}

void Buffer::sortBuffer(Buffer* buff, const int& buffSize) {
    quickSort(buff, 0, buffSize - 1);
}

void quickSort(Buffer* buff, int begin, int end) {
    if (begin < end) {
        int middle = partition(buff, begin, end);
        quickSort(buff, begin, middle - 1);
        quickSort(buff, middle + 1, end);
    }
}

int partition(Buffer* buff, int begin, int end) {
    Buffer pivot = buff[end], tmp;
    int i = begin - 1;
    for (int j = begin; j < end; ++j) {
        if (buff[j].val <= pivot.val) {
            tmp = buff[j];
            buff[j] = buff[++i];
            buff[i] = tmp;
        }
    }
    tmp = buff[++i];
    buff[i] = buff[end];
    buff[end] = tmp;
    return i;
}
