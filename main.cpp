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
    unsigned int N = 1000;
    std::vector<double> values;
    double value;
    std::vector<double> means;
       while (inputFile >> value) {

           value=(value - A)*(b-a)/(B-A) + a;
           values.push_back(value);
           inputFile.close();



          std::ofstream outputFile("result.txt");
          if (outputFile.is_open()) {
              double somma=0;

                  for (unsigned int i = 0; i < N-1 ; i++) {
                      somma += values[i];
                      double media = somma / (i + 1);
                      outputFile << i + 1 << " " << media << std::endl;

                  }
                  outputFile.close();

            } else {
                std::cout << "Errore: impossibile aprire il file." << std::endl;
            }

   }

    return 0;
}
