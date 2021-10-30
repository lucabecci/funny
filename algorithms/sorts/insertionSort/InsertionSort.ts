class InsertionSort{
  private process(arr: number[]){
    let j: number,key: number,i: number;
    for(i = 1; i < arr.length; i++){
      key = arr[i]
      j = i - 1

      while(j >= 0 && arr[j] > key){
        arr[j + 1] = arr[j]
        j = j - 1
      }

      arr[j + 1] = key
    }
  }

  public main(): void{
    let arr: number[] = [12 , 11, 13, 5, 6]
    console.log("Before:", arr)
    this.process(arr)
    console.log("After:", arr)
  }
}

(function(){
  new InsertionSort().main()
})()
