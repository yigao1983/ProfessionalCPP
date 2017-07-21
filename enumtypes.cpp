#include <iostream>

using namespace std;

int main()
{
  enum PieceType {
    PieceTypeKing,
    PieceTypeQueen,
    PieceTypePawn
  };
  
  enum class NewPieceType {
    PieceTypeKing,
    PieceTypeQueen,
    PieceTypePawn    
  };
    
  PieceType king = PieceTypeKing;

  NewPieceType newKing = NewPieceType::PieceTypeKing;
  
  cout << king << endl;
  
  return 0;
}
