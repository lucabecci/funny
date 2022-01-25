package dsa

import "fmt"

type LinkedList struct {
	head *Node
	size int
}

func (l *LinkedList) InsertEnd(v int) {
	n := Node{}
	n.value = v
	if l.size == 0 {
		l.head = &n
		l.size++
		return
	}

	ptr := l.head
	for i := 0; i < l.size; i++ {
		if ptr.next == nil {
			ptr.next = &n
			l.size++
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
		l.head = &newN
		l.size++
		return
	}

	if pos > l.size {
		return
	}

	n := l.GetAt(pos)
	newN.next = n
	prevN := l.GetAt(pos - 1)
	prevN.next = &newN
	l.size++
}

func (l *LinkedList) Search(val int) int {
	ptr := l.head
	for i := 0; i < l.size; i++ {
		if ptr.value == val {
			return i
		}
		ptr = ptr.next
	}
	return -1
}

func (l *LinkedList) GetAt(pos int) *Node {
	ptr := l.head
	if pos < 0 {
		return ptr
	}
	if pos > (l.size - 1) {
		return nil
	}
	for i := 0; i < pos; i++ {
		ptr = ptr.next
	}
	return ptr
}

func (l *LinkedList) Print() {
	if l.size == 0 {
		fmt.Println("0 nodes in your Linked List")
		return
	}
	ptr := l.head
	for i := 0; i < l.size; i++ {
		fmt.Println(ptr.value)
		ptr = ptr.next
	}
}
