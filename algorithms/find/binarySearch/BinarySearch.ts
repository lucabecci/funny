class BinarySearch{
  private process(arr: number[], t: number, l: number, r: number): boolean {
    let mid: number;
    for(l; l <= r;){
        mid = (l + (r-l)/2)
      if(arr[mid] > t){
        l = mid - 1
      } else if(arr[mid] < t){
        r = mid + 1
      } else {
        return true
      }
    }
    return false
  }
  
  public main(){
    const arr: number[] = [22,34,66,99,124,421,576,1135,2388,4090]
    const result: boolean = this.process(arr, 66, 0, arr.length)
    if(result){
      console.log("Value find")
    }else {
      throw new Error("Value not find")
    }
  }
}

(function(){
  new BinarySearch().main()
})()
