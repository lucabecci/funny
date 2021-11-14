import IntegrationProcess from "./patterns/builder/example/integration"
class Main {
    static process(){
      IntegrationProcess.process()
    }
}

(() => {
    Main.process()
})()
