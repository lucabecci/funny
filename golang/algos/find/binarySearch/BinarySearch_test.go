package binarysearch

import (
	"testing"
)

type binarySearchTest struct {
	arg1     []int
	expected int
}

var binarySearchTests = []binarySearchTest{
	binarySearchTest{
		[]int{12, 345, 346, 362, 421, 543, 5643, 213123, 543243242, 32423423423},
		213123,
	},
}

func TestBinarySearch(t *testing.T) {
	for _, test := range binarySearchTests {
		if output := BinarySearchIterative(test.arg1, test.expected, 0, len(test.arg1)-1); output != test.expected {
			t.Errorf("output %q not equal to expected %q", output, test.expected)
		}
	}
}
