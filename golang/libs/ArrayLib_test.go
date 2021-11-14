package libs

import (
	"fmt"
	"math/rand"
	"testing"
)

var arrayLibTests = []ArrayLib{}

func init() {
	for i := 0; i <= 5; i++ {
		arrayLibTests = append(arrayLibTests, ArrayLib{
			max: rand.Intn(4000-5) + 5,
			min: rand.Intn(20-10) + 10,
		})
	}
	fmt.Println(arrayLibTests)
}

func TestRandomArray(t *testing.T) {
	for _, test := range arrayLibTests {
		if out := test.RandomArray(200); len(out) != 200 {
			t.Fatal(out)
		}
	}
}

func TestRandomIncrementArray(t *testing.T) {
}
