package linearsearch

import (
	"fmt"
	"log"
)

func LinearSearch(arr []int, v int) bool {
	for i := 0; i < len(arr); i++ {
		if arr[i] == v {
			return true
		}
	}
	return false
}

func Process() {
	arr := []int{22, 44, 11, 3421, 3254, 275, 975}
	err := LinearSearch(arr, 3254)
	if err != true {
		log.Fatal("Value not find")
	} else {
		fmt.Printf("Value find")
	}
}
