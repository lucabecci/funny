import {InterfacePost} from './interfaces'


class Lib {
    public static fakeFetchPosts(type: string): InterfacePost[]{
        return  [1,2,3].map((t) => {
            return {
                id: Math.random() ** t + "",
                name: `This is a post of ${type}`,
                description: `This is a simple post of the ${type} integration`,
                likes: Math.round(Math.random() * 300 ** t) 
            }
        }) 
    }
}

export default Lib