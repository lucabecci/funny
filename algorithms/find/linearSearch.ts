class LinearSearch {
    private process(arr: number[], v: number){
        for (let i = 0; i < arr.length; i++) {
            if(arr[i] === v) return true       
        }
        return false
    }

    public main(){
        const arr = [22,321,4,23,6,2,66,3245,755]
        const result = this.process(arr,66)
        if(result) console.log("Value find")
        else console.log("Value not find")
    }
}

(function(){
    new LinearSearch().main()
})()