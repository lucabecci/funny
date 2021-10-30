class BubbleSort{
  private process(arr: number[]): number[]{
    let sorted = false
    while(!sorted){
      sorted = true
      for(let i = 0; i < arr.length; i++){
        if(arr[i + 1] < arr[i]){
          let temp = arr[i + 1]
          arr[i + 1] = arr[i]
          arr[i] = temp
          sorted = false
        }
      }
    }
    return arr
  }

  public main(){
    let arr: number[] = [22,33,12,55,23,4,12,53,666,21]
    console.log("Before:", arr)
    arr = this.process(arr)
    console.log("After:", arr)
  }
}

(function(){
  new BubbleSort().main()
})()
