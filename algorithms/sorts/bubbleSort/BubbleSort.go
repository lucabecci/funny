package bubblesort

import "fmt"

func bubbleSort(arr []int) []int {
	sorted := false
	for !sorted {
		sorted = true
		for i := 0; i < len(arr)-1; i++ {
			if arr[i+1] < arr[i] {
				arr[i+1], arr[i] = arr[i], arr[i+1]
				sorted = false
			}
		}
	}
	return arr
}

func Process() {
	arr := []int{22, 1, 4, 7, 12, 55, 2, 551, 242}
	fmt.Println("Before:", arr)
	arr = bubbleSort(arr)
	fmt.Println("After:", arr)
}
