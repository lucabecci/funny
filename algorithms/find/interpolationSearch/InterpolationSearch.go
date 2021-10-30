package interpolationsearch

import (
	"fmt"
	"log"
)

func interpolationsearch(arr []int, l int, r int, t int) bool {
	var pos int
	if l <= r && t >= arr[l] && t <= arr[r] {
		pos = l + int(float64((r-l)/(arr[r]-arr[l])*(t-arr[r])))
		if arr[pos] == t {
			return true
		}

		if arr[pos] < t {
			return interpolationsearch(arr, pos+1, r, t)
		}

		if arr[pos] > t {
			return interpolationsearch(arr, l, pos-1, t)
		}
	}
	return false
}

func Process() {
	var arr = []int{11, 33, 55, 66, 77, 88, 99, 111, 222, 333, 444, 555, 666}
	var l int = 0
	var r int = len(arr) - 1
	var t int = 555
	result := interpolationsearch(arr, l, r, t)
	if result != true {
		log.Panic("Value not find")
	} else {
		fmt.Println("Value find")
	}
}
