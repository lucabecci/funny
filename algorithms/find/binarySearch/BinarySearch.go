package binarysearch

import (
	"fmt"
	"log"
)

func BinarySearchIterative(arr []int, t int, l int, h int) int {
	startIndex := l
	endindex := h

	var mid int

	for startIndex <= endindex {
		mid = int(startIndex + (endindex-startIndex)/2)
		if arr[mid] > t {
			endindex = mid - 1
		} else if arr[mid] < t {
			startIndex = mid + 1
		} else {
			return arr[mid]
		}
	}
	return -1
}

func BinarySearchRecursive(arr []int, t int, l int, r int) int {
	m := int(l + (r-l)/2)
	if arr[m] > t {
		return BinarySearchRecursive(arr, t, l, m-1)
	} else if arr[m] < t {
		return BinarySearchRecursive(arr, t, m+1, r)
	} else {
		return arr[m]
	}
}

func Process() {
	arr := []int{22, 33, 55, 67, 77, 88, 99, 122, 323, 4556, 7657}
	result := BinarySearchIterative(arr, 4556, 0, len(arr)-1)
	if result != 4556 {
		log.Panic("Value not find")
	} else {
		fmt.Println("Value find")
	}
}

func ProcessRecursive() {
	arr := []int{22, 33, 55, 67, 77, 88, 99, 122, 323, 4556, 7657}
	result := BinarySearchRecursive(arr, 4556, 0, len(arr)-1)
	if result != 4556 {
		log.Panic("Value not find")
	} else {
		fmt.Println("Value find")
	}
}
