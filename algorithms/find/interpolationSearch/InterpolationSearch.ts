class InterpolationSearch{
  private process(arr: number[], l: number, r: number, t: number): number{
    if(l <= r && t >= arr[l] && t <= arr[r]){
      let pos = l + Math.floor((r - l) / (arr[r] - arr[l]) * (t - arr[l]))
      if(arr[pos] === t){
        return arr[pos]
      }
      if(arr[pos] < t){
        return this.process(arr, pos + 1, r, t)
      }
      if(arr[pos] > t){
        return this.process(arr, l, pos - 1, t)
      }
    }
    return -1
  }


  public main(){
    const arr: number[] = [11,12,22,33,44,55,66,77,88,999,1222,3444,5433,6764,7544]
    const target: number = 3444;
    const result: number = this.process(arr, 0, arr.length - 1, target)
    if(result === target){
      console.log("Number finded")
    }else{
      throw new Error("Number no finded")
    }

  }
}

(function(){
  new InterpolationSearch().main()
})()
