#pragma once
#include "TList.h"
#include <cstddef>
#include <ostream>

struct TNode{
	int	   value;//значение текущего элем
	TNode* pNext;//указат на след элем, NULL - у последнего
};

class TList{
protected:
	TNode* pFirst;
public:
	TList();
	void insFirst(int insValue);
	void insCurrent(TNode* current,int insValue);
	void insEnd(int insValue);
	void deleteFirst();
	void deleteEnd();
	int LenList();
	void deleteEvenValue();

	friend std::ostream& operator<< (std::ostream& out,const TList& list);
};

