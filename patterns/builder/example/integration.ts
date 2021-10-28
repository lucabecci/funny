import Lib from "patterns/utils/@lib"

interface InterfaceIntegrationBuilder {
    generatePostsMethod: () => void 
}

class IntegrationBuilder implements InterfaceIntegrationBuilder{
    private integration: InterfaceIntegration
    constructor(){
        this.reset()
    }
    public reset(){
        this.integration = new Integration()
    }
    public generatePostsMethod(){
        this.integration.getPosts = Object.assign(this, (type: string) => {
            console.log(Lib.fakeFetchPosts(type))
        })
    }

    public generateTweetsMethod(){
        this.integration.getPosts = Object.assign(this, (type: string) => {
            console.log(Lib.fakeFetchPosts(type))
        })
    }
}

interface InterfaceIntegration {
    getPosts?: (type: string) => void
}

class Integration implements InterfaceIntegration{}
