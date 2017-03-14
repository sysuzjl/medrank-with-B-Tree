#ifndef __MEDRANK__
#define __MEDRANK__

class MedRank {
public:
    MedRank(const int& objNum, const int& lineNum, const float& MINFREQ);
    ~MedRank();
    /* use the index <trees> and the project value of a query point <queryProjectVal>
     * to find a point which appromixate closest to a query point
     * return the point index */
    int medrank(const BTree* trees, const float* queryProjectVal, int& probNum);
    /* find a point in <data> which is closest to <q>
     * return the point index */
    int findClosestPoint(const Vector* data, const Vector& q);
private:
    int objNum;        // number of objects in the training data
    int lineNum;       // number of the projection lines
    int *l, *h, *fc;   // l and h are pointers, fc are frequency count
    float MINFREQ;     // the parameter MINFREQ of medrank algorithm
    Node* node;        // save the nodes which pointers <l> and <h> point to
};

#endif