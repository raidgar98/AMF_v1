#pragma once
#include<vector>
using namespace std;

class baseFilter
{
private:
        vector<double> parameters;
        char** fixedPixel = nullptr;
public:
        baseFilter();
        virtual ~baseFilter() = 0;
        void setParameters(vector<double> iParameters) { parameters = iParameters; }
        vector<double> getParameters() { return parameters; }
        void setFixedPixel(int xPixel, int yPixel);
        char** getFixedPixel() {return fixedPixel;}

        void takePicture(char tabR, char tabG, char tabB);
        // jakiTyp? returnFixedPicture();
        virtual void Correction()=0;
};
