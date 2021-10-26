package gobuilder

type normalBuilder struct {
	windowType string
	doorType   string
	floor      int
}

func NewNormalBuilder() *normalBuilder {
	return &normalBuilder{}
}

func (n *normalBuilder) setWindowType() {
	n.windowType = "Normal window"
}

func (n *normalBuilder) setDoorType() {
	n.doorType = "Normal door"
}

func (n *normalBuilder) setNumFloor() {
	n.floor = 2
}

func (n *normalBuilder) getHouse() house {
	return house{
		doorType:   n.doorType,
		windowType: n.windowType,
		floor:      n.floor,
	}
}
