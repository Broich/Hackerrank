//
//  apples_and_oranges.cpp
//  Hackerrank
//
//  Created by Kersten Broich on 2017-03-02.
//  Copyright © 2017 Kersten Broich. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

#include "apples_and_oranges.hpp"

using namespace std;

struct range
{
    int start;
    int end;
};

bool isWithinRange(range r, int pos)
{
    return ((pos >= r.start) && (pos <= r.end));
}

void apples_and_oranges()
{
    int appleCount = 0;
    int orangeCount = 0;
    int s;
    int t;
    cin >> s >> t;
    
    range house;
    house.start = s;
    house.end = t;
    
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
        cin >> apple[apple_i];
    }
    
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
        cin >> orange[orange_i];
    }
    
    for (int i = 0; i < m; i++) {
        int spot = a + apple[i];
        if (isWithinRange(house, spot)) {
            appleCount++;
        }
    }
    
    for (int i = 0; i < n; i++) {
        int spot = b +  orange[i];
        if (isWithinRange(house, spot)) {
            orangeCount++;
        }
    }
    
    cout << appleCount << endl;
    cout << orangeCount << endl;
}
