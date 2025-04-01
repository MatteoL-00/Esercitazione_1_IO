#include <iostream>
#include <fstream>
#include <vector>

int main()
{

    std::ifstream inputFile("data.txt");
    if(inputFile.fail())
        {
            std::cerr << "File not found" << std::endl;
           return 1;}

    unsigned int A=1;
    unsigned int B=5;
    int a =-1;
    int b = 2;
    double mean=0 ;
    unsigned int n = 1;
    std::vector<double> values;
    double value;
    std::vector<double> means;
       while (inputFile >> value) {

           value=(value - A)*(b-a)/(B-A) + a;  
           values.push_back(value);
           double somma=0;
           for(double valore:values){
               somma+=valore;}
           double mean1= somma / n;
           n++;
           mean= mean1;


   }

   std::cout << "mean =   " << mean << std::endl;



    return 0;
}
