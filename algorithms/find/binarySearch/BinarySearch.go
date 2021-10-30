package binarysearch

import (
	"fmt"
	"log"
)

func BinarySearchIterative(arr []int, t int, l int, h int) bool {
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
			return true
		}
	}
	return false
}

func Process() {
	arr := []int{22, 33, 55, 67, 77, 88, 99, 122, 323, 4556, 7657}
	result := BinarySearchIterative(arr, 4556, 0, len(arr))
	if result != true {
		log.Panic("Value not find")
	} else {
		fmt.Println("Value find")
	}
}
