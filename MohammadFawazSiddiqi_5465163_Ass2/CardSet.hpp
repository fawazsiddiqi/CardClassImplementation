/*********************************************
 * CardSet.hpp - Contains declaration of class CardSet
 *
 *********************************************/

#ifndef CARDSET_HPP
#define CARDSET_HPP

class CardSet
{
public:
		CardSet();
		CardSet(int);
		~CardSet();
		int Size() const;
		bool IsEmpty() const;
		void Shuffle();
		int Deal();
		void Deal(int,CardSet&,CardSet&);
		void Deal(int,CardSet&,CardSet&,CardSet&,CardSet&);
		void AddCard(int);
		void MergeShuffle(CardSet&);
		void Print() const;
	
private:
		int* Card;
		int nCards;
		void PrintCard(int c) const;
};

#endif
