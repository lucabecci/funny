package dsa

import "fmt"

type Queue_LL struct {
	q     *Node
	front *Node
	rear  *Node
	size  int
}

func (q *Queue_LL) Enqueue(v int) {
	new_q := Node{}
	new_q.value = v
	new_q.next = nil
	if q.rear == nil {
		q.q = &new_q
		return
	}
	temp := q.q
	for i := 0; i < q.size; i++ {
		fmt.Println(temp.value)
		temp = temp.next
	}
}

func (q *Queue_LL) Dequeue(v int) {

}

func (q *Queue_LL) Traversal(v int) {

}
