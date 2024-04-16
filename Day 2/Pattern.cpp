#include<iostream>
using namespace std;

int main(){


// Square
  // outer loop -> Rows
  // for(int i=0; i<4; i=i+1){

  //   // Print 4 Stars
  // for(int j=0; j<4; j=j+1){
  //   cout<< "*";
  // }
  // cout<< endl;
  // }


// // Rectangle
//   for(int i=0; i<3; i=i+1){
//   for(int j=0; j<6; j=j+1){
//     cout<< "*";
//   }
//   cout<< endl;
//   }


// Hollow Rectangle
// Outer loop
  // for(int row=0; row<5; row=row+1){
  //   // inner loop
  // for(int col=0; col<5; col=col+1){
  //   // if zeroth or last row, then print star
  //   if(row == 0 || row == 4){
  //     cout<< "*";
  //   }
  //    else{
  //     if(col == 0 || col == 4){
  //       cout<< "*";
  //     }
  //     else{
  //       cout<< " ";
  //     }
  //    }
  // }
  // cout<< endl;
  // }


  // int n;
  // cin>> n;
  // // Half Pyramid
  // for(int row=0; row<n; row=row+1){
  // for(int col=0; col<row+1; col=col+1){
  //   cout<< "*";
  // }
  // cout<< endl;
  // }

  // Inverted Half Pyramid
  // int n;
  // cin>> n;
  // for(int row=0; row<n; row=row+1){
  // for(int col=0; col<n-row; col=col+1){
  //   cout<< "*";
  // }
  // cout<< endl;
  // }


// Numeric Half Pyramid
//    int n;
//   cin>> n;
//   for(int row=0; row<n; row=row+1){
//   for(int col=0; col<row+1; col=col+1){
//     cout<< col+1 << "";
//   }
//   cout<< endl;
//   }
// }



// Pyramid 
//   int n;
//   cin>> n;

//   for(int row=0; row<n; row=row+1){
//   for(int col=0; col<n-row-1; col=col+1){
//     cout<< " ";
//   }

//   for(int col=0; col<row+1; col=col=col+1){
//     cout<< "* ";
//   }

//   cout<< endl;
//   }

//   return 0;
// }

 int n;
  cin>> n;

  for(int row=0; row<n; row=row+1){
  for(int col=0; col<n-row-1; col=col+1){
    cout<< " ";
  }

  for(int col=0; col<row+1; col=col=col+1){
    cout<< "* ";
  }

  cout<< endl;
  }

  return 0;
}
