package libs

import (
	"math/rand"
	"time"
)

type ArrayLib struct {
	min int
	max int
}

func (ar *ArrayLib) RandomArray(l int) []int {
	lon := make([]int, l)
	rand.Seed(time.Now().UnixNano())
	for i := 0; i < l; i++ {
		v := rand.Intn(ar.max-ar.min) + ar.min
		lon[i] = v
	}
	return lon
}

func (ar *ArrayLib) RandomIncrementArray(l int, incremental int) []int {
	lon := make([]int, l)
	rand.Seed(time.Now().UnixNano())
	for k := 0; k < l; k++ {
		var v int
		if k > 0 {
			c := k * incremental
			v = rand.Intn(c-lon[k-1]) + lon[k-1]
		} else {
			v = k + 2
		}
		lon[k] = v
	}
	return lon
}
