#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;

int main()

{
    long long num = 0;
    // start timer
    auto start = chrono::steady_clock::now();


    while (true)
    {
        num = num + 1;

        // 10 to the 9 = billion
        // 10 to the 12 = trillion
        //Scientific Notation: 10 to the 9
        if (num > 1000000000)
        {
            break;
        }
    }


    // end
    auto finish = chrono::steady_clock::now();


    // measure
    double elapsed_seconds = chrono::duration_cast<chrono::duration<double>>(finish - start).count();
    cout << num << "\nDuration is = " << elapsed_seconds << endl;

    //answer from ThinkStation

    // 1.35e-07
    //  = 1.35e-7
    // = 1.35 × 10-7
    // = 0.000000135

    return 0;
}