interface Builder {
    producePartA(): void
    producePartB(): void
    producePartC(): void
}

class ConcreteBuilder1 implements Builder {
    private product: Product1;

    constructor(){
        this.reset()
    }

    public reset(): void{
        this.product = new Product1()
    }

    public producePartA(): void {
        this.product.parts.push("PartsA1")
    }

    public producePartB(): void{
        this.product.parts.push("PartsB1")
    }

    public producePartC(): void{
        this.product.parts.push("PartsC1")
    }

    public getProduct(): Product1 {
        const result = this.product
        this.reset()
        return result
    }
}

class Product1 {
    public parts: string[] = []

    public listParts(): void {
        console.log(`Product parts ${this.parts.join(', ')} \n`)
    }
}

class Director {
    private builder: Builder

    public setBuilder(builder: Builder): void{
        this.builder = builder
    }

    public buildMinimalProduct(): void {
        this.builder.producePartA()
    }

    public buildFullProduct(): void {
        this.builder.producePartA()
        this.builder.producePartB()
        this.builder.producePartC()
    }
}

class GenerateBuilderPattern{
    private director: Director = new Director

    private process(director: Director): void {
        const builder = new ConcreteBuilder1()
        director.setBuilder(builder)

        console.log("Standard basic product")
        director.buildMinimalProduct()
        builder.getProduct().listParts()

        console.log("Full product")
        director.buildFullProduct()
        builder.getProduct().listParts()

        console.log("Random product")
        builder.producePartB()
        builder.producePartC()
        builder.getProduct().listParts()

    }

    public main(){
        this.director = new Director()
        this.process(this.director)
    }
}

export default {
    GenerateBuilderPattern
}
