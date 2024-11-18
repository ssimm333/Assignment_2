/*****************************************************************//**
 * @file	main.c
 * @brief	main file used to implement the text menu driven application
 *
 * @author Stanislav Simanovich
 * @author Calum Breen
 * @author Emilia Hildebrandt
 * @author Tiernan O'Shaughnessy
 * @author Jordi Roca
 * @author Bengisu Fansa
 *
 *
 * @date 13 November 2024
 *********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "functionDeclarations.h"


// set Intersection
// Create interset
// for each node in set1
//		for each node in set2
//			if set1i == set2i
//				add set1i to intset

 // defining the structure for the double linked list
typedef struct List {
	dllNode* head;
	dllNode* tail;
	dllNode* current;
} DoubleLinkedList;

// creates an empty ordered set (list contains no elements
// and number of elements is set to 0).Make sure that your solution provides
// an explicit create function.
DoubleLinkedList* createOrderedSet() {
	createDoubleLinkedList();
}
//				add set1i to interset


// set Union
// Create  uniset
// for each node in set1
//		for each node in set2
//			if set1i =! set2i
//				add set1i to uniset