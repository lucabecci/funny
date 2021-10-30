package insertionsort

import "fmt"

func insertionSort(arr []int) []int {
	var (
		i   int
		key int
		j   int
	)

	for i = 1; i < len(arr); i++ {
		key = arr[i]
		j = i - 1

		for j >= 0 && arr[j] > key {
			arr[j+1] = arr[j]
			j = j - 1
		}
		arr[j+1] = key
	}

	return arr
}

func Process() {
	arr := []int{12, 11, 13, 5, 6}
	fmt.Println("Before:", arr)
	insertionSort(arr)
	fmt.Println("After:", arr)
}
