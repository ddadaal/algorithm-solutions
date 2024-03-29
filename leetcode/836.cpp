#include "cppincludes.h"

class Solution {

  public:
    // y1 < y2, x1 < x2
    bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2) {
        return !((rec1[1] >= rec2[3] || rec1[3] <= rec2[1]) ||
                 (rec1[0] >= rec2[2] || rec1[2] <= rec2[0]));
    }
};