#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    // char vec[784];
    unsigned char vec[784];
    int data[16] = {0};
    FILE* in = fopen("train-images.idx3-ubyte", "rb");
    if (in == NULL) {
        printf("error...\n");
        return 0;
    }
    FILE* out = fopen("Mnist.ds", "w");
    if (out == NULL) {
        printf("error...\n");
        return 0;
    }
    fread((void*)vec, 16, 1, in);
    for (int obj = 1; !feof(in); ++obj) {
        fprintf(out, "%d", obj);
        fread((void*)vec, 784, 1, in);
        for (int i = 0; i < 784; ++i)
            fprintf(out, " %d", vec[i]);
        fprintf(out, "\n");
    }
    fclose(in);
    fclose(out);
    return 0;
}
