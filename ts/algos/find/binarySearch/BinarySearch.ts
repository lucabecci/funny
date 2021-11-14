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

  private processRecursive(arr: number[], t: number, l: number, r: number): boolean {
    let m = (l + (r - l) / 2)
    if(arr[m] > t){
      return this.processRecursive(arr, t, l, m - 1)
    } else if(arr[m] < t){
      return this.processRecursive(arr, t, m + 1, r)
    } else {
      return true
    }
  }
  
  public mainRecursive(): void {
    const arr: number[] = [22,34,66,99,124,421,576,1135,2388,4090]
    const result: boolean = this.processRecursive(arr, 66, 0, arr.length - 1)
    if(result){
      console.log("Value find")
    }else{
      throw new Error("Value not find")
    }
  }

  public main(): void {
    const arr: number[] = [22,34,66,99,124,421,576,1135,2388,4090]
    const result: boolean = this.process(arr, 66, 0, arr.length - 1)
    if(result){
      console.log("Value find")
    }else {
      throw new Error("Value not find")
    }
  }
}

(function(){
  new BinarySearch().mainRecursive()
})()
