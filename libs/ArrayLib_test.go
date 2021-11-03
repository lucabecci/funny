package libs

import (
	"fmt"
	"math/rand"
	"testing"
)

type arrayLibTest struct {
	longitude int
	increment int
}

var arrayLibTests = []arrayLibTest{
	arrayLibTest{
		30,
		200,
	},
}

var arrayLib ArrayLib

func init() {
	arrayLib = ArrayLib{
		min: 10,
		max: 200,
	}
	for i := 0; i <= 5; i++ {
		arrayLibTests = append(arrayLibTests, arrayLibTest{
			longitude: rand.Intn(200-5) + 5,
			increment: rand.Intn(4000-10) + 10,
		})
	}
	fmt.Println(arrayLibTests)
}

func TestRandomArray(t *testing.T) {
	arrayLib = ArrayLib{
		min: 5,
		max: 15,
	}
	arr := arrayLib.RandomArray(20)
	if len(arr) != 20 {
		t.Fatal("expected", 20)
		t.Fatal("received", len(arr))
	}
}

func TestRandomIncrementArray(t *testing.T) {
	arrayLib = ArrayLib{
		min: 7,
		max: 200,
	}

	arr := arrayLib.RandomIncrementArray(20, 800)
	if len(arr) != 20 {
		t.Fatal("expected", 20)
		t.Fatal("received", len(arr))
	}
}
