import IntegrationProcess from "./builder/example/integration"
class Main {
    static process(){
      IntegrationProcess.process()
    }
}

(() => {
    Main.process()
})()
