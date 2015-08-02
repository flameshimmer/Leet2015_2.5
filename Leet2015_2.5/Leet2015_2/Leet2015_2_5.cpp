// Leet2015.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Solution2_5.h"

// This file contains the questions surfaces in leetcode pass 2.

using namespace std;
typedef std::numeric_limits< double > dbl;

int _tmain(int argc, _TCHAR* argv[])
{
	// Runtime begin marker start
	clock_t begin = clock();

	Solution2_5::TwoSumIII::Main(); // Easy -----------> potential better way of doing it?
	//Solution2_5::BinaryTreeMaximumPathSum::Main(); // Medium  -----------------------> had some issues 
	//Solution2_5::BitwiseAndOfNumbersRange::Main(); // Medium -------------------------> had some issues
	//Solution2_5::ContainsDuplicateIII::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::ConvertSortedListToBinarySearchTree::Main(); // Medium ----------------------> had some issues
	//Solution2_5::CountCompleteTreeNodes::Main();  // Medium ======================================> has better solve
	//Solution2_5::CountPrimes::Main();  // Easy ----------------------------------> had some issues
	//Solution2_5::DungeonGame::Main(); // Hard ----------------------------------> had some issues
	//Solution2_5::FindMinimumInRotatedSortedArray::Main(); //Medium ----------------------------------> had some issues
	//Solution2_5::FindPeakElement::Main(); //Medium  ----------------------------------> had some issues
	//Solution2_5::JumpGameII::Main(); // Hard ----------------------------------> had some issues
	//Solution2_5::KthLargestElementInAnArray::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::LargestNumber::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::LinkedListCycleII::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::LongestPalindromicSubString::Main(); // Medium ----------------------------------> had better way of doing it
	//Solution2_5::LongestSubstringWithAtMostTwoDistinctCharacters::Main(); //Hard ----------------------------------> may have better way to do it
	//Solution2_5::LRUCacheEntry::Main(); // Hard ----------------------------------> had some issues
	//Solution2_5::MaximumGap::Main(); // Hard----------------------------------> had some issues(forgot the algo)
	//Solution2_5::MaximumProductSubarray::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::MergeKSortedLists::Main();  // Hard ----------------------------------> found a better way of doing it
	//Solution2_5::MedianOfTwoSortedArrays::Main(); // Hard----------------------------------> need some work still
	//Solution2_5::OneEditDistance::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::PalindromeNumber::Main(); // Easy ----------------------------------> not any extra space?
	//Solution2_5::PalindromePartitioningII::Main(); // Hard ----------------------------------> had some issues
	//Solution2_5::PathSum::Main(); // Easy  ----------------------------------> had some issues
	//Solution2_5::PermutationSequence::Main(); // Medium ----------------------------------> had some issues, completely forget how to do it
	//Solution2_5::ReadNCharactersGivenRead4::Main(); // Easy ----------------------------------> had some issues
	//Solution2_5::RecoverBinarySearchTree::Main(); // Hard----------------------------------> had some issues. completely  forgot how to do it. Need to look at iterative way to do it too.
	//Solution2_5::BestTimeToBuyAndSellStockIV::Main(); // Hard----------------------------------> had some issues, completely forget the solve
	//Solution2_5::RegularExpressionMatching::Main(); // Hard ----------------------------------> had some issues
	//Solution2_5::WildcardMatching::Main(); // Hard----------------------------------> had some issues
	//Solution2_5::ImplementStrStr::Main(); // Easy----------------------------------> had some issues, forget KMP
	//Solution2_5::ShortestPalindrome::Main(); // Hard ---------------------------------> had some issues, completely forget the solve
	//Solution2_5::SingleNumberII::Main(); // Medium ----------------------------------> had some issues
	//Solution2_5::SpiralMatrix::Main(); // Medium    ----------------------------------> had some issues
	//Solution2_5::SurroundedRegions::Main(); // Medium   ----------------------------------> had some issues
	//Solution2_5::ValidSudoku::Main(); // Easy----------------------------------> had some issues
	//Solution2_5::TextJustification::Main(); // Hard ----------------------------------> had some issues. Emgod. Took 1.5 hours
	//Solution2_5::SubstringWithConcatenationOfAllWords::Main(); // Hard----------------------------------> has a more complicated but faster solve, jumped over that.
	//Solution2_5::SudokuSolver::Main(); // Hard----------------------------------> had some issues. Found a much simpler and faster way to do this. Yay
	//Solution2_5::TrappingRainWater::Main(); // Hard --------------------------------> Found a second 1pass O(n) solution
	//Solution2_5::UniqueBinarySearchTreesII::Main();  // Medium----------------------------------> had some issues.
	//Solution2_5::WordBreakII::Main();----------------------------------> had some issues.
	//Solution2_5::WordSearch::Main(); // Medium ----------------------------------> had some issues. Found a faster solve
	//Solution2_5::WordLadderII::Main(); // Hard
	//Solution2_5::TheSkylineProblem::Main(); // Hard ---------------------------------> had some issues, completely forget the solve
	//Solution2_5::SlidingWindowMaximum::Main(); // Hard
	//Solution2_5::ValidNumber::Main(); // Hard
	//Solution2_5::NumberOfDigitOne::Main(); // Medium
	//Solution2_5::Sqrt::Main // Medium


	// Runtime end marker
	clock_t end = clock();
	double elapsed_time_in_millisecond = double(end - begin) / double(CLOCKS_PER_SEC / 1000.0);

	// End program routine
	cout.precision(dbl::digits10);
	cout << "\n\nYour program total runtime is: " << elapsed_time_in_millisecond << "ms";
	cout << "\n\nPress enter key to exit ...\n\n";
	cin.get();
	return 0;
}

