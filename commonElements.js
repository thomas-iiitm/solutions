/*************************************
Finding common elements given K arrays
O(k*n)
*************************************/

let kArr = [
  [5, 34, 3, 56, 76, 4, 37],
  [34, 4, 343, 34, 3, 5, 37],
  [22, 76, 34, 23, 55, 37]
]

function getCommonElements(arr){
  let res = []
  let k = arr.length;
  let temp = arr[0]
  for(let elm of temp){
    if(isPresentInAll(elm, arr, k)){
      res.push(elm)
    }
  }
  console.log(res)
}

function isPresentInAll(elm, arr, k){
  let isPresent = true
  for(let i=1; i<k; i++){
    if(arr[i].indexOf(elm) === -1){
      isPresent = false
      break;
    }
  }
  return isPresent
}
