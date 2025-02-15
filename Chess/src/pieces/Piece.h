#ifndef PIECE_H
#define PIECE_H

enum PieceTypes {
    BLACK_KING  ,
    BLACK_QUEEN ,
    BLACK_ROOK  ,
    BLACK_BISHOP,
    BLACK_KNIGHT,
    BLACK_PAWN  ,
    WHITE_KING  ,
    WHITE_QUEEN ,
    WHITE_ROOK  ,
    WHITE_BISHOP,
    WHITE_KNIGHT,
    WHITE_PAWNr
};

class Piece {
public:
    virtual PieceType getType();
    virtual getMoves(int place[2], Board board);
};

#endif
