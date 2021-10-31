package libs

import (
	"math/rand"
	"time"
)

type ArrayLib struct {
	min int
	max int
}

func (ar *ArrayLib) RandomArray() []int {
	var lon []int
	rand.Seed(time.Now().UnixNano())
	for i := 0; i <= ar.max; i++ {

	}

	return lon
}
