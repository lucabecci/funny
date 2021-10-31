package main

import (
	"fmt"
)

func main() {
	fmt.Println("Algorithms main process")
	arr := []int{1, 2, 3, 4, 5}
	var middle = len(arr) / 2
	fmt.Println(arr[:middle])
	fmt.Println(arr[middle:])
}
