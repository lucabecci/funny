class MergeSort {
  private merge(a: number[], b: number[]): number[]{
    let r = new Array(a.length + b.length)
    let i = 0
    let j = 0

    while(i < a.length && j < b.length){
      if(a[i] <= b[j]){
        r[i+j] = a[i]
        i++
      }else{
        r[i+j] = b[j]
        j++
      }
    }

    while(i < a.length) {
      r[i+j] = a[i]
      i++
    }

    while(j < b.length){
      r[i+j] = b[j]
      j++
    }

    return  r
  }

  public sort(items: number[]): number[] {
    if(items.length < 2){
      return items
    }
    let m = items.length / 2
    let a = this.sort(items.slice(0, m))
    let b = this.sort(items.slice(m, items.length))
    const result: number[] = this.merge(a, b)
    return result
  }
}


class MergeSortProcess {
  public static run(): void{
    let arr: number[] = [23,53,64,92,643,3,6545,1453,3421,12,52]
    console.log("Before:", arr)
    const sorted: number[] = new MergeSort().sort(arr)
    console.log("After:", sorted)
  }
}


(function(){
MergeSortProcess.run()
})()
