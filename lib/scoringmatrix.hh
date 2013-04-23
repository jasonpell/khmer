#ifndef SCORINGMATRIX_HH
#define SCORINGMATRIX_HH

#define MAT 0
#define SNP 1
#define INS 2
#define DEL 3

class ScoringMatrix {
   //double sm[5][5];
   double scores[4]; 

private:
   int assign(char);

public:
   ScoringMatrix(double mat, double snp, double ins, double del) {
      scores[MAT] = mat;
      scores[SNP] = snp;
      scores[INS] = ins;
      scores[DEL] = del;
   }
   ScoringMatrix() {
      scores[MAT] = 0.0;
      scores[SNP] = 7.0;
      scores[INS] = 4.0;
      scores[DEL] = 4.0;
      /*
      sm =
      {
      {0, 9, 9, 9, 7},
      {9, 0, 9, 9, 7},
      {9, 9, 0, 9, 7},
      {9, 9, 9, 0, 7},
      {7, 7, 7, 7, 6}
      };
      */
   }
   
   double score(char, char);
};

#endif // SCORINGMATRIX_HH
