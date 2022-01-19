package dsa

import "fmt"

type LinkedList struct {
	Head *Node
	Size int
}

func (l *LinkedList) InsertEnd(v int) {
	n := Node{}
	n.value = v
	if l.Size == 0 {
		l.Head = &n
		l.Size++
		return
	}

	ptr := l.Head
	for i := 0; i < l.Size; i++ {
		if ptr.next == nil {
			ptr.next = &n
			l.Size++
			return
		}
		ptr = ptr.next
	}
}

func (l *LinkedList) InsertAt(pos int, v int) {
	newN := Node{}
	newN.value = v

	if pos < 0 {
		return
	}

	if pos == 0 {
		l.Head = &newN
		l.Size++
		return
	}

	if pos > l.Size {
		return
	}

	n := l.GetAt(pos)
	newN.next = n
	prevN := l.GetAt(pos - 1)
	prevN.next = &newN
	l.Size++
}

func (l *LinkedList) Search(val int) int {
	ptr := l.Head
	for i := 0; i < l.Size; i++ {
		if ptr.value == val {
			return i
		}
		ptr = ptr.next
	}
	return -1
}

func (l *LinkedList) GetAt(pos int) *Node {
	ptr := l.Head
	if pos < 0 {
		return ptr
	}
	if pos > (l.Size - 1) {
		return nil
	}
	for i := 0; i < pos; i++ {
		ptr = ptr.next
	}
	return ptr
}

func (l *LinkedList) Print() {
	if l.Size == 0 {
		fmt.Println("0 nodes in your Linked List")
		return
	}
	ptr := l.Head
	for i := 0; i < l.Size; i++ {
		fmt.Println(ptr.value)
		ptr = ptr.next
	}
}
