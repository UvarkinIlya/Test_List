#include "TList.h"
#include <cstddef>


TList::TList(){
	pFirst = NULL;
}

void TList::insFirst(int insValue){
	TNode* newFirst = new TNode;
	newFirst->value = insValue;
	newFirst->pNext = pFirst;

	pFirst = newFirst;
}

void TList::insCurrent(TNode* current,int insValue){
	TNode* node = new TNode;
	node->value = insValue;
	node->pNext = current->pNext;

	current->pNext = node;
}

void TList::insEnd(int insValue){
	TNode* ElemEnd = new TNode;
	ElemEnd->value = insValue;
	ElemEnd->pNext = NULL;

	if(pFirst == NULL){
		pFirst = ElemEnd;
		return;
	}

	TNode* current = pFirst;
	while(current->pNext != NULL){
		current = current->pNext;
	}

	current->pNext = ElemEnd;
}

void TList::deleteFirst(){
	if(pFirst == NULL){
		throw "pFirst null pointer";
	}

	TNode* pNext = pFirst->pNext;
	delete[] pFirst;
	pFirst = pFirst->pNext;
}

int TList::LenList(){
	int count = 0;
	TNode* current = pFirst;
	while(current != NULL){
		current = current->pNext;
		count++;
	}

	return count;
}

void TList::deleteEvenValue(){
	TNode* del = pFirst;
	while(pFirst != NULL && del->value % 2 == 0){
		pFirst = pFirst->pNext;
		delete del;
		del = pFirst;
	}

	TNode* current = pFirst;
	TNode* prev = pFirst;
	while(current != NULL){
		if(current->value % 2 == 0){
			prev->pNext = current->pNext;
			delete current;
			current = prev->pNext;
			continue;
		}
		prev = current;
		current = current->pNext;
	}
}

std::ostream& operator<< (std::ostream& out,const TList& list){
	out << "List: ";

	TNode* current = list.pFirst;
	if(current == NULL){
		out << "EMPTY\n";
		return out;
	}

	while(current->pNext != NULL){
		out << current->value << "->";
		current = current->pNext;
	}
	out << current->value << "\n";

	return out;
}