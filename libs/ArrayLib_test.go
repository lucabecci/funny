package libs

import (
	"testing"
)

var arrayLib ArrayLib

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
