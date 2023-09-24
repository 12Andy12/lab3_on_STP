#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MyCalss
{
public:

	int fun1(int a, int b, int c)
	{
		int max = a;
		if (b > max)
			max = b;
		if (c > max)
			max = c;
		return max;
	}

    string fun2(int a) 
    {
        string strA = to_string(a);
        string res = "";
        for (int i = 0; i < strA.size(); i++) {

            if ((strA[i] - '0') % 2 == 0) {
                res = strA[i] + res;
            }
        }
        return res;
    }


    int fun3(int a) 
    {
        string strA = to_string(a);
        int min = 99999;
        for (int i = 0; i < strA.size(); i++) {

            if ((strA[i] - '0') < min) {
                min = strA[i] - '0';
            }
        }
        return min;
    }

    int fun4(vector<vector<int>> mas)
    {
        int sum = 0;
        for (int i = 0; i < mas.size(); ++i)
        {
            for (int j = 0; j <= i; ++j)
            {
                if (mas[i][j] % 2 != 0)
                    sum += mas[i][j];
            }
        }
        return sum;
    }
};

