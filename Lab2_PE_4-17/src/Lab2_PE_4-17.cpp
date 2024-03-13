//============================================================================
// Name        : Lab1_PE_4-17.cpp
//			   : CSC-155 C++ Computer Science 1
//			   : Dept. of CS - Oakton Community College
//			   :
// Author      : Mike Mordec
// Date		   : 08/25/22
// Version     :
//
// Description : Solution to Programming Exercise 4-17 of
//			   : C++ Programming: From Problem Analysis to Program Design 8e,
//			   : by D.S. Malik, Cengage Learning 2018
//============================================================================

#include <iostream>

using namespace std;

int main() {
    // Write your main here

    double colonialBase, splitBase, singleBase;
    double colonialSq, splitSq, singleSq;
    double colonialPPSF, splitPPSF, singlePPSF;

    cout << "Enter the price of colonial model: ";
    cin >> colonialBase;
    cout << "Enter the finished area in square feet of colonial model: ";
    cin >> colonialSq;
    colonialPPSF = colonialBase / colonialSq;
    cout << endl << endl;

    cout << "Enter the price of the split entry model: ";
    cin >> splitBase;
    cout << "Enter the finished area in square feet of the split entry model: ";
	cin >> splitSq;
    splitPPSF = splitBase / splitSq;
    cout << endl << endl;

    cout << "Enter the price of the single story model: ";
    cin >> singleBase;
    cout << "Enter the finished area in square feet of the story model: ";
    cin >> singleSq;
    singlePPSF = singleBase / singleSq;
    cout << endl << endl;

    // Three way tie
    if (colonialPPSF == splitPPSF && splitPPSF == singlePPSF)
    {
        cout << "The price per square foot all three models are the same";
        return 0;
    }

    // Two way tie
    if(colonialPPSF == singlePPSF && singlePPSF < splitPPSF)
    {
        cout << "The price per square foot of the colonial and single-story models tie for the least.";
        return 0;
    }
    if(colonialPPSF == splitPPSF && splitPPSF < singlePPSF)
    {
        cout << "The price per square foot of the colonial and split-entry models tie for the least.";
        return 0;
    }
    if(singlePPSF == splitPPSF && splitPPSF < colonialPPSF)
    {
        cout << "The price per square foot of the single-story and split-entry models tie for the least.";
        return 0;
    }

    // No ties
    if ((singlePPSF < splitPPSF) && (singlePPSF < colonialPPSF))
    {
        cout << "The price per square foot of the single-story model is the least.";
        return 0;
    }
    if ((splitPPSF < singlePPSF) && (splitPPSF < colonialPPSF))
    {
        cout << "The price per square foot of the split-entry model is the least.";
        return 0;
    }
    if ((colonialPPSF < splitPPSF) && (colonialPPSF < singlePPSF))
    {
        cout << "The price per square foot of the colonial model is the least.";
        return 0;
    }
    return 0;
}
