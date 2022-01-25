package main

import (
	"fmt"

	"github.com/lucabecci/patterns/golang/dsa"
)

func main() {
	fmt.Println("DSA main process")
	DoubleLinkedList()
}

func LinkedList() {
	fmt.Println("Linked list test")
	list := dsa.LinkedList{}
	list.InsertEnd(22)
	list.InsertEnd(21)
	list.InsertEnd(3)
	list.InsertEnd(72)
	list.Print()
}

func DoubleLinkedList() {
	fmt.Println("Double linked list test")
	ll := dsa.DoubleLinkedList{}
	ll.Add(22)
	ll.Add(33)
	ll.Add(44)
	ll.InsertAt(55, 0)
	ll.Add(331)
	ll.Add(524)
	ll.Add(373)
	ll.Add(944)
	ll.Delete(331)
	ll.LinearTraversal()
}
