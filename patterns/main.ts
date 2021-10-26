import Pattern from './builder/pattern'

class Main {
    static process(){
        new Pattern.GenerateBuilderPattern().main()
    }
}

(() => {
    Main.process()
})()