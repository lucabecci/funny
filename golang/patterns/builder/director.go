package gobuilder

type director struct {
	builder IBuilder
}

func newDirector(b IBuilder) *director {
	return &director{
		builder: b,
	}
}

func (d *director) setBuilder(b IBuilder) {
	d.builder = b
}

func (d *director) buildHouse() house {
	d.builder.setDoorType()
	d.builder.setWindowType()
	d.builder.setNumFloor()
	return d.builder.getHouse()
}
