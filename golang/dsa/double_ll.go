package dsa

import (
	"fmt"
	"log"
)

/*
Process:
NULL <-> a <-> b <-> c <-> NULL;
for: a -> nil ? break : ...
*/

type DoubleLinkedList struct {
	Head *DoubleNode
	Size int
}

func (dll *DoubleLinkedList) Add(v int) {
	n := DoubleNode{}
	n.Value = v
	if dll.Size < 1 {
		dll.Size++
		dll.Head = &n
		return
	}
	current := dll.Head
	for i := 0; i < dll.Size; i++ {
		if current.Next == nil {
			n.Prev = current
			current.Next = &n
			dll.Size++
			return
		}
		current = current.Next
	}
}

/*
nil <-> 1 <-> 2 <-> 3 <-> 4 <-> nil
v: 22, p: 3
curr: 3
toMove: curr.next -> 4
curr.next : new node
new node.prev: curr
new node.next: toMove
toMove.prev: &new node
nil <-> 1 <-> 2 <-> 3 <-> 22 <-> 4 <-> nill
*/
func (dll *DoubleLinkedList) InsertAt(v int, p int) {
	n := DoubleNode{}
	n.Value = v
	if dll.Size < 1 {
		dll.Head = &n
		dll.Size++
		return
	}
	if p < 0 || p > dll.Size {
		log.Panic("Invalid position")
		return
	}

	curr := dll.Head
	for i := 0; i < dll.Size; i++ {
		if i == p {
			dll.Size++
			toMove := curr.Next
			toMove.Prev = &n
			n.Next = toMove
			n.Prev = curr
			curr.Next = &n
			return
		}
		if curr.Next == nil {
			n.Prev = curr
			curr.Next = &n
			dll.Size++
			return
		}
		curr = curr.Next
	}
}

func (dll *DoubleLinkedList) Delete(v int) {
	curr := dll.Head
	for i := 0; i < dll.Size; i++ {
		if curr.Value == v {

			tempPrev := curr.Prev
			tempNext := curr.Next
			tempPrev.Next = tempNext
			tempNext.Prev = tempPrev
			fmt.Println(curr, tempNext, tempPrev)
			curr = nil //memory p delete
			return
		}
		curr = curr.Next
	}
}

func (dll *DoubleLinkedList) LinearTraversal() {
	if dll.Size < 1 {
		log.Panic("The size is lower than 1")
		return
	}
	current := dll.Head
	for i := 0; i < dll.Size; i++ {
		fmt.Println(current.Value)
		if current.Next == nil {
			break
		}
		current = current.Next

	}
}
