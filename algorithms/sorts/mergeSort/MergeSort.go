package mergesort

import "fmt"

func sort(arr []int) []int {
	if len(arr) < 2 {
		return arr
	}
	var m = len(arr) / 2
	var a = sort(arr[:m])
	var b = sort(arr[m:])
	return merge(a, b)
}

func merge(a []int, b []int) []int {
	var r = make([]int, len(a)+len(b))
	var i = 0
	var j = 0

	for i < len(a) && j < len(b) {
		if a[i] <= b[j] {
			r[i+j] = a[i]
			i++
		} else {
			r[i+j] = b[j]
			j++
		}
	}

	for i < len(a) {
		r[i+j] = a[i]
		i++
	}

	for j < len(b) {
		r[i+j] = b[j]
		j++
	}
	return r
}

func Process() {
	arr := []int{23, 53, 64, 92, 643, 3, 6545, 1453, 3421, 12, 5}
	fmt.Println("Before:", arr)
	arr = sort(arr)
	fmt.Println("After:", arr)
}
