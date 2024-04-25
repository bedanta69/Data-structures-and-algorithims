//log all pairs of an array
const boxes = ['a', 'b', 'c', 'd']

function logAllPairsofArray(array) {
    for (let i = 0; i < array.length; i++) {
        for (j = 0; j < array.length; j++) {
            console.log(array[i], array[j])
        }
    }
}
logAllPairsofArray(boxes)

//example of an o(n^2)