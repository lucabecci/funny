import Lib from "../../utils/libs"

interface InterfaceIntegrationBuilder {
    generatePostMethod: () => void;
    generateTweetMethod: () => void;
}

class IntegrationBuilder implements InterfaceIntegrationBuilder{
    private integration: InterfaceIntegration
    constructor(){
        this.reset()
    }
    public reset(){
        this.integration = new Integration()
    }
    public generatePostMethod(){
        this.integration.getPosts = function(type: string){
            console.log(Lib.fakeFetchPosts(type))
        }
    }

    public generateTweetMethod(){
        this.integration.getTweets= function(){
            console.log(Lib.fakeFetchTweets())
        }
    }

    public getIntegration(): InterfaceIntegration{
      const integration = this.integration
      this.reset()
      return integration
  }
}

interface InterfaceIntegration {
    getPosts?: (type: string) => void
    getTweets?: () => void
}

class Integration implements InterfaceIntegration{}

class IntegrationDirector {
  private builder: InterfaceIntegrationBuilder
  
  public setBuilder(builder: InterfaceIntegrationBuilder): void {
    this.builder = builder
  }

  public buildTwitterIntegration(): void {
    this.builder.generateTweetMethod()
  }

  public buildInstagramIntegration(): void {
    this.builder.generatePostMethod()
  }
}


class ProcessBuilderIntegrations{
  private static director: IntegrationDirector = new IntegrationDirector
  public static process(): void {
    const builder = new IntegrationBuilder()
    this.director.setBuilder(builder)

    console.log("Twitter Build")
    this.director.buildTwitterIntegration()
    builder.getIntegration().getTweets!()

    console.log("\n")

    console.log("Instagram Build")
    this.director.buildInstagramIntegration()
    builder.getIntegration().getPosts!("Instagram")
  }
}

export default ProcessBuilderIntegrations
